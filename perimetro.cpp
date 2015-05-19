/*----------------------------------------
|  Autor: Noelia Rodriguez               |
|  Fecha: 9/5/15                         |
|----------------------------------------|
|  Descripción del Programa:             |                         
|  Calcular el perimetro de un rect.     |                                       
| -------------------------------------*/

#include <iostream>
#include <cstdlib>
using namespace std;


//Declaracion de funciones


double getPerimetro(double, double);
double getNumPositivo();


//Programa principal
int main()
{
	cout << "Para calcular el perimetro de un rectangulo en cm" <<endl << "Ingrese la altura: ";
	double altura = getNumPositivo();
	cout << "Ingrese la base: ";
	double base = getNumPositivo();
	cout << endl << "El perimetro es " << getPerimetro(altura,base) << " cm "<< endl;
	
	}

double getNumPositivo(){
	double num;
	cin >> num;
	while (num <=0){
		cout << "Escriba un numero positivo"<< endl;
		cin >> num;
	}
	return num;
	}
double getPerimetro(double h, double b){
	double perimetro = (h+b)*2;
	return perimetro;
}


