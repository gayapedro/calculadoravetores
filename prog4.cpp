/*
Questao 4
Trabalho de Linguagem de Programacao - UNIFACS
Desenvolvido por Lucas Fonseca e Pedro Gaya
*/
#include <iostream>
#include "Vetor2d.hpp"
#include "Vetor3d.hpp"

using namespace std;

void limpar(){
	#ifdef _WIN32
	    system("cls");
	#else
	    system ("clear");
	#endif
}

void logo(){
	limpar();
	cout << "  #####                                                                           #     #                                          " << endl;
	cout << " #     #   ##   #       ####  #    # #        ##   #####   ####  #####    ##      #     # ###### #####  ####  #####  ######  ####  " << endl;
	cout << " #        #  #  #      #    # #    # #       #  #  #    # #    # #    #  #  #     #     # #        #   #    # #    # #      #      " << endl;
	cout << " #       #    # #      #      #    # #      #    # #    # #    # #    # #    #    #     # #####    #   #    # #    # #####   ####  " << endl;
	cout << " #       ###### #      #      #    # #      ###### #    # #    # #####  ######     #   #  #        #   #    # #####  #           # " << endl;
	cout << " #     # #    # #      #    # #    # #      #    # #    # #    # #   #  #    #      # #   #        #   #    # #   #  #      #    # " << endl;
	cout << "  #####  #    # ######  ####   ####  ###### #    # #####   ####  #    # #    #       #    ######   #    ####  #    # ######  ####  " << endl;
	cout << endl << endl;
}

int menu(){
	int escolha;
	do{
	logo();
	cout << "\tSeja bem-vindo a calculadora de vetores. Para iniciar, escolha a opcao desejada:" << endl;
	cout << "\t1- Vetores 2d (R2)" << endl;
	cout << "\t2- Vetores 3d (R3)" << endl;
	cout << "\t3- Sair" << endl;
	cin >> escolha;
	}while(escolha != 1 && escolha != 2 && escolha != 3);
	return escolha;
}

int main(){
	int user,calcuser,voltar,repet;
	float x2,y2,z2,x3,y3,z3;
	do{
		repet = 0;
		user = menu();
		if(user == 1){
			logo();
			cout << "\tFavor digitar as coordenadas x e y do seu vetor." << endl;
			cin >> x2;
			cin >> y2;
			Vetor2d *vetordois = new Vetor2d(x2,y2);
			do{
				voltar = 2;
				logo();
				do{
				cout << "\tFavor escolher a opcao desejada:" << endl;
				cout << "\t1-Adicao" << endl;
				cout << "\t2-Subtracao" << endl;
				cout << "\t3-Multiplicar por escalar" << endl;
				cout << "\t4-Modulo" << endl;
				cout << "\t5-Versor" << endl;
				cout << "\t6-Produto Escalar" << endl;
				cout << "\t7-Angulo entre dois vetores" << endl;
				cout << "\t8-Relacao entre dois vetores" << endl;
				cout << "\t9-Checar produto interno" << endl;
				cout << "\t10-Calcular norma" << endl;
				cout << "\t11-Voltar" << endl;
				cin >> calcuser;
				}while(calcuser < 1 || calcuser >11);
				if(calcuser==1){
					logo();
					vetordois->somar();
				}
				else if(calcuser==2){
					logo();
					vetordois->subtrair();
				}
				else if(calcuser==3){
					logo();
					vetordois->escalar();
				}
				else if(calcuser==4){
					logo();
					vetordois->modulo();
				}
				else if(calcuser==5){
					logo();
					vetordois->versor();
				}
				else if(calcuser==6){
					logo();
					vetordois->prodescalar();
				}
				else if(calcuser==7){
					logo();
					vetordois->angulo();
				}
				else if(calcuser==8){
					logo();
					vetordois->detalhes();
				}
				else if(calcuser==9){
					logo();
					vetordois->prodinterno();
				}
				else if(calcuser==10){
					logo();
					vetordois->norma();
				}
				else if(calcuser==11){
					repet = 1;
				}
				if(calcuser>=1 && calcuser <=10){
					do{
					cout << "\tDeseja voltar?" << endl;
					cout << "\t1-Sim" << endl << "\t2-Nao" << endl;
					cin >> voltar;
					}while(voltar != 1 && voltar != 2);
				}
			}while(voltar == 1);
		}
		else if(user == 2){
			logo();
			cout << "\tFavor digitar as coordenadas x,y e z do seu vetor." << endl;
			cin >> x3;
			cin >> y3;
			cin >> z3;
			Vetor3d *vetortres = new Vetor3d(x3,y3,z3);
			do{
				voltar = 2;
				logo();
				do{
				cout << "\tFavor escolher a opcao desejada:" << endl;
				cout << "\t1-Adicao" << endl;
				cout << "\t2-Subtracao" << endl;
				cout << "\t3-Multiplicar por escalar" << endl;
				cout << "\t4-Produto Vetorial" << endl;
				cout << "\t5-Modulo" << endl;
				cout << "\t6-Versor" << endl;
				cout << "\t7-Produto Escalar" << endl;
				cout << "\t8-Angulo entre dois vetores" << endl;
				cout << "\t9-Relacao entre dois vetores" << endl;
				cout << "\t10-Checar produto interno" << endl;
				cout << "\t11-Calcular norma" << endl;
				cout << "\t12-Voltar" << endl;
				cin >> calcuser;
				}while(calcuser < 1 || calcuser > 12);
				if(calcuser==1){
					logo();
					vetortres->somar();
				}
				else if(calcuser==2){
					logo();
					vetortres->subtrair();
				}
				else if(calcuser==3){
					logo();
					vetortres->escalar();
				}
				else if(calcuser==4){
					logo();
					vetortres->prodvetorial();
				}
				else if(calcuser==5){
					logo();
					vetortres->modulo();
				}
				else if(calcuser==6){
					logo();
					vetortres->versor();
				}
				else if(calcuser==7){
					logo();
					vetortres->prodescalar();
				}
				else if(calcuser==8){
					logo();
					vetortres->angulo();
				}
				else if(calcuser==9){
					logo();
					vetortres->detalhes();
				}
				else if(calcuser==10){
					logo();
					vetortres->prodinterno();
				}
				else if(calcuser==11){
					logo();
					vetortres->norma();
				}
				else if(calcuser==12){
					repet = 1;
				}
				if(calcuser >= 1 && calcuser <=11){
					do{
						cout << "\tDeseja voltar?" << endl;
						cout << "\t1-Sim" << endl << "\t2-Nao" << endl;
						cin >> voltar;
					}while(voltar != 1 && voltar != 2);
				}
			}while(voltar == 1);
		}
		else{
			limpar();
			cout << "\tAgradecemos o interesse." << endl;
		}
	}while(repet==1);
	return 0;
}