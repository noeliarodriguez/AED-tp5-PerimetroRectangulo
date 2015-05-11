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

double getNumPositivo();
double getPerimetro(double, double);

//Programa principal
int main()
{
	double altura;
	double base;
	
	cout << "Para calcular el perimetro de un rectangulo en cm" <<endl << "Ingrese la altura: ";
	cin >> altura;
	cout << "Ingrese la base: ";
	cin >> base;
	cout << endl << "El perimetro es " << getPerimetro(altura,base) << " cm "<< endl;
	
	}

double getNumPositivo(){
	double num;
	while (num <= 0){
	cin >> num; 
		}
	}
double getPerimetro(double h, double b){
	double perimetro = (h+b)*2;
	return perimetro;
}


