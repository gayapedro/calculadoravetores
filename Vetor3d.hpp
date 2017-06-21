#ifndef VETOR3D_H_INCLUDED
#define VETOR3D_H_INCLUDED
#include <iostream>
#include <iomanip>
#include <math.h>
#define RAD 57.2958
using namespace std;

class Vetor3d {

	public:
		float cordx;
		float cordy;
		float cordz;
		Vetor3d(float x, float y, float z);
		void somar();
		void subtrair();
		void escalar();
		void prodvetorial();
		void modulo();
		void versor();
		void prodescalar();
		void angulo();
		void detalhes();
		void prodinterno();
		void norma();
};

Vetor3d::Vetor3d(float x, float y, float z){
	this->cordx = x;
	this->cordy = y;
	this->cordz = z;
}

void Vetor3d::somar(){
	float m1,m2,m3,r1,r2,r3;
	int numero,i;
	r1 = this->cordx;
	r2 = this->cordy;
	r3 = this->cordz;
	cout << "\tQuantos vetores deseja somar ao vetor original?" << endl;
	cin >> numero;
	for(int i=0;i < numero;i++){
		cout << "\tFavor informar as coordenadas x,y e z do vetor " << i+1 << "." << endl; 
		cin >> m1;
		cin >> m2;
		cin >> m3;
		r1+=m1;
		r2+=m2;
		r3+=m3;
	}
	cout << fixed;
	cout << setprecision(2);
	cout << "\tResultado da soma dos vetores:" << endl;
	cout << "\t\t< " << r1 << " , " << r2 << " , " << r3 << " >" << endl;
}

void Vetor3d::subtrair(){
	float m1,m2,m3,r1,r2,r3;
	int numero,i;
	r1 = this->cordx;
	r2 = this->cordy;
	r3 = this->cordz;
	cout << "\tQuantos vetores deseja subtrair do vetor original?" << endl;
	cin >> numero;
	for(int i=0;i < numero;i++){
		cout << "\tFavor informar as coordenadas x,y e z do vetor " << i+1 << "." << endl; 
		cin >> m1;
		cin >> m2;
		cin >> m3;
		r1-=m1;
		r2-=m2;
		r3-=m3;
	}
	cout << fixed;
	cout << setprecision(2);
	cout << "\tResultado da subtracao dos vetores:" << endl;
	cout << "\t\t< " << r1 << " , " << r2 << " , " << r3 << " >" << endl;
}

void Vetor3d::escalar(){
	float mult,x,y,z;
	cout << "\tFavor informar por quanto deseja multiplicar o vetor." << endl;
	cin >> mult;
	x = (this->cordx)*mult;
	y = (this->cordy)*mult;
	z = (this->cordz)*mult;
	cout << fixed;
	cout << setprecision(2);
	cout << "\tResultado da multiplicacao por escalar:" << endl;
	cout << "\t\t< " << x << " , " << y << " , " << z << " >" << endl;
}

void Vetor3d::prodvetorial(){
	float x1,y1,z1,x2,y2,z2,x3,y3,z3;
	x1 = this->cordx;
	y1 = this->cordy;
	z1 = this->cordz;
	cout << "\tFavor informar o segundo vetor. (x,y e z)" << endl;
	cin >> x2;
	cin >> y2;
	cin >> z2;
	x3 = (y1*z2)-(z1*y2);
	y3 = (z1*x2)-(x1*z2);
	z3 = (x1*y2)-(y1*x2);
	cout << fixed;
	cout << setprecision(2);
	cout << "\tResultado do produto vetorial:" << endl;
	cout << "\t\t< " << x3 << " , " << y3 << " , " << z3 << " >" << endl;
}

void Vetor3d::modulo(){
	float resultado,x,y,z;
	x = this->cordx;
	y = this->cordy;
	z = this->cordz;
	resultado = sqrt((x*x)+(y*y)+(z*z));
	cout << fixed;
	cout << setprecision(2);
	cout << "\tO modulo desse vetor:" << endl;
	cout << "\t\t|v| = " << resultado << endl;
}

void Vetor3d::versor(){
	float x,y,z,modulo;
	x = this->cordx;
	y = this->cordy;
	z = this->cordz;
	modulo = sqrt((x*x)+(y*y)+(z*z));
	x /= modulo;
	y /= modulo;
	z /= modulo;
	cout << fixed;
	cout << setprecision(2);
	cout << "\tO versor desse vetor é:" << endl;
	cout << "\t\t< " << x << " , " << y << " , " << z << " >" << endl;
}

void Vetor3d::prodescalar(){
	float x,y,z,x2,y2,z2,resultado;
	x = this->cordx;
	y = this->cordy;
	z = this->cordz;
	cout << "\tFavor inserir o vetor:" << endl;
	cin >> x2;
	cin >> y2;
	cin >> z2;
	resultado = x*x2 + y*y2 + z*z2;
	cout << fixed;
	cout << setprecision(2);
	cout << "\tO resultado do produto escalar:" << endl;
	cout << "\t\t" << resultado << endl;
}

void Vetor3d::angulo(){
	float x,y,z,x2,y2,z2,escalar,mod1,mod2,resultado;
	x = this->cordx;
	y = this->cordy;
	z = this->cordz;
	cout << "\tFavor inserir o vetor:" << endl;
	cin >> x2;
	cin >> y2;
	cin >> z2;
	escalar = x*x2 + y*y2 + z*z2;
	mod1 = sqrt((x*x)+(y*y)+(z*z));
	mod2 = sqrt((x2*x2)+(y2*y2)+(z2*z2));
	resultado = acos(escalar/(mod1*mod2));
	cout << "\tO resultado do angulo entre os dois vetores:" << endl;
	cout << "\t\t" << resultado << " rads ou " << resultado*RAD << " graus." << endl;
}

void Vetor3d::detalhes(){
	float x,y,z,x2,y2,z2,escalar,v1,v2,v3;
	x = this->cordx;
	y = this->cordy;
	z = this->cordz;
	cout << "\tFavor inserir o vetor:" << endl;
	cin >> x2;
	cin >> y2;
	cin >> z2;
	escalar = x*x2 + y*y2 + z*z2;
	v1 = x / x2;
	v2 = y / y2;
	v3 = z / z2;
	cout << fixed;
	cout << setprecision(2);
	if(escalar == 0){
		cout << "\tOs dois vetores sao perpendiculares." << endl;
	}else if(v1 == v2 && v1 == v3){
		cout << "\tOs dois vetores sao paralelos." << endl;
	}else{
		cout << "Os dois vetores nao possuem relacão. (Nem paralelos nem perpendiculares)" << endl;
	}
}

void Vetor3d::prodinterno(){
	float x,y,z,x2,y2,z2,v1,v2,v3;
	x = this->cordx;
	y = this->cordy;
	z = this->cordz;
	cout << "\tFavor inserir o vetor:" << endl;
	cin >> x2;
	cin >> y2;
	cin >> z2;
	v1 = x / x2;
	v2 = y / y2;
	v3 = z / z2;
	if(v1 == v2 && v1 == v3) {
		cout << "\tOs dois vetores sao produto interno." << endl;

	}
	else{
		cout << "\tOs dois vetores nao sao produto interno." << endl;
	}
}

void Vetor3d::norma(){
	float resultado,x,y,z;
	x = this->cordx;
	y = this->cordy;
	z = this->cordz;
	resultado = sqrt((x*x)+(y*y)+(z*z));
	cout << fixed;
	cout << setprecision(2);
	cout << "\tA norma desse vetor:" << endl;
	cout << "\t\t" << resultado << endl;
}

#endif