#ifndef VETOR2D_H_INCLUDED
#define VETOR2D_H_INCLUDED
#include <iostream>
#include <iomanip>
#include <math.h>
#define RAD 57.2958
using namespace std;

class Vetor2d {
	
	public:
		float cordx;
		float cordy;
		Vetor2d(float x, float y);
		void somar();
		void subtrair();
		void escalar();
		void modulo();
		void versor();
		void prodescalar();
		void angulo();
		void detalhes();
		void prodinterno();
		void norma();
};

Vetor2d::Vetor2d(float x, float y){
	this->cordx = x;
	this->cordy = y;
}

void Vetor2d::somar(){
	float m1,m2,r1,r2;
	int numero,i;
	r1 = this->cordx;
	r2 = this->cordy;
	cout << "\tQuantos vetores deseja somar ao vetor original?" << endl;
	cin >> numero;
	for(int i=0;i < numero;i++){
		cout << "\tFavor informar as coordenadas x e y do " << i+1 << " vetor." << endl; 
		cin >> m1;
		cin >> m2;
		r1+=m1;
		r2+=m2;
	}
	cout << fixed;
	cout << setprecision(2);
	cout << "\tResultado da soma dos vetores:" << endl;
	cout << "\t\t< " << r1 << " , " << r2 << " >" << endl;
}

void Vetor2d::subtrair(){
	float m1,m2,r1,r2;
	int numero,i;
	r1 = this->cordx;
	r2 = this->cordy;
	cout << "\tQuantos vetores deseja subtrair do vetor original?" << endl;
	cin >> numero;
	for(int i=0;i < numero;i++){
		cout << "\tFavor informar as coordenadas x e y do " << i+1 << " vetor." << endl; 
		cin >> m1;
		cin >> m2;
		r1-=m1;
		r2-=m2;
	}
	cout << fixed;
	cout << setprecision(2);
	cout << "\tResultado da subtracao dos vetores:" << endl;
	cout << "\t\t< " << r1 << " , " << r2 << " >" << endl;
}

void Vetor2d::escalar(){
	float mult,x,y;
	cout << "\tFavor informar por quanto deseja multiplicar o vetor." << endl;
	cin >> mult;
	x = (this->cordx)*mult;
	y = (this->cordy)*mult;
	cout << fixed;
	cout << setprecision(2);
	cout << "\tResultado da multiplicacao por escalar:" << endl;
	cout << "\t\t< " << x << " , " << y << " >" << endl;
}

void Vetor2d::modulo(){
	float resultado,x,y;
	x = this->cordx;
	y = this->cordy;
	resultado = sqrt((x*x)+(y*y));
	cout << fixed;
	cout << setprecision(2);
	cout << "\tO modulo desse vetor:" << endl;
	cout << "\t\t|v| = " << resultado << endl;
}

void Vetor2d::versor(){
	float x,y,modulo;
	x = this->cordx;
	y = this->cordy;
	modulo = sqrt((x*x)+(y*y));
	x /= modulo;
	y /= modulo;
	cout << fixed;
	cout << setprecision(2);
	cout << "\tO versor desse vetor é:" << endl;
	cout << "\t\t< " << x << " , " << y << " >" << endl;
}

void Vetor2d::prodescalar(){
	float x,y,x2,y2,resultado;
	x = this->cordx;
	y = this->cordy;
	cout << "\tFavor inserir o vetor:" << endl;
	cin >> x2;
	cin >> y2;
	resultado = x*x2 + y*y2;
	cout << fixed;
	cout << setprecision(2);
	cout << "\tO resultado do produto escalar:" << endl;
	cout << "\t\t" << resultado << endl;
}

void Vetor2d::angulo(){
	float x,y,x2,y2,escalar,mod1,mod2,resultado;
	x = this->cordx;
	y = this->cordy;
	cout << "\tFavor inserir o vetor:" << endl;
	cin >> x2;
	cin >> y2;
	escalar = x*x2 + y*y2;
	mod1 = sqrt((x*x)+(y*y));
	mod2 = sqrt((x2*x2)+(y2*y2));
	resultado = acos(escalar/(mod1*mod2));
	cout << "\tO resultado do angulo entre os dois vetores:" << endl;
	cout << "\t\t" << resultado << " rads ou " << resultado*RAD << " graus." << endl;
}

void Vetor2d::detalhes(){
	float x,y,x2,y2,escalar,v1,v2;
	x = this->cordx;
	y = this->cordy;
	cout << "\tFavor inserir o vetor:" << endl;
	cin >> x2;
	cin >> y2;
	escalar = x*x2 + y*y2;
	v1 = x / x2;
	v2 = y / y2;
	cout << fixed;
	cout << setprecision(2);
	if(escalar == 0){
		cout << "\tOs dois vetores sao perpendiculares." << endl;
	}else if(v1 == v2){
		cout << "\tOs dois vetores sao paralelos." << endl;
	}else{
		cout << "Os dois vetores nao possuem relacão. (Nem paralelos nem perpendiculares)" << endl;
	}
}

void Vetor2d::prodinterno(){
	float x,y,x2,y2,v1,v2;
	x = this->cordx;
	y = this->cordy;
	cout << "\tFavor inserir o vetor:" << endl;
	cin >> x2;
	cin >> y2;
	v1 = x / x2;
	v2 = y / y2;
	if(v1 == v2) {
		cout << "\tOs dois vetores sao produto interno." << endl;

	}
	else{
		cout << "\tOs dois vetores nao sao produto interno." << endl;
	}
}

void Vetor2d::norma(){
	float resultado,x,y;
	x = this->cordx;
	y = this->cordy;
	resultado = sqrt((x*x)+(y*y));
	cout << fixed;
	cout << setprecision(2);
	cout << "\tA norma desse vetor:" << endl;
	cout << "\t\t" << resultado << endl;
}

#endif