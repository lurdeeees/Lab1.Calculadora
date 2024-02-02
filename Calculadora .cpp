#include <iostream>
using namespace std;

float valor1 = 0;
float valor2 = 0;
float resultado = 0; 
//En esta sección se utilizó variables de tipo float por que permite representar
//un numero positivo o negativo con decimales. 
int suma ();
int resta ();
int multiplicacion ();
int division ();
//Se declaran las variables a utilizar de tipo entero. 

int main (){
	suma();
	resta ();
	multiplicacion();
	division();
	//Se manda a llamar las funciones para que puedan ser ejecutadas en el menu principal
	
	return 0; //
}

int suma (){
	cout << "***SUMA***"<< endl;
	cout << "Ingrese el primer valor "<< endl; //Se pide el primer valor al usuario 
	cin >> valor1; //captura el valor ingresado y se almacena en la variable declarada como valor1;
	cout << "Ingrese el segundo valor" << endl; //Se pide el segundo valor al usuario
	cin >> valor2;//captura el valor ingresado y se almacena en la variable declarada como valor2;
	resultado = (valor1 + valor2);//Realiza la operacion indicada con los valores que se han almacenado en valor1 y valor2
	cout << "La suma es: "<< resultado << endl; //Se da el resultado de la operacion, concatenando la varibales resultado.
}
int resta (){
	cout << "***RESTA***"<< endl;
	cout << "Ingrese el primer valor "<< endl;//Se pide el primer valor al usuario 
	cin >> valor1;//captura el valor ingresado y se almacena en la variable declarada como valor1;
	cout << "Ingrese el segundo valor" << endl;//Se pide el segundo valor al usuario
	cin >> valor2;//captura el valor ingresado y se almacena en la variable declarada como valor2;
	resultado = (valor1 - valor2); //Realiza la operacion indicada con los valores que se han almacenado en valor1 y valor2
	cout << "La resta es: "<< resultado << endl; //Se da el resultado de la operacion, concatenando la varibales resultado.
}
int multiplicacion (){
	cout << "***MULTIPLICACION***"<< endl;
	cout << "Ingrese el primer valor "<< endl;//Se pide el primer valor al usuario 
	cin >> valor1;//captura el valor ingresado y se almacena en la variable declarada como valor1;
	cout << "Ingrese el segundo valor" << endl;//Se pide el segundo valor al usuario
	cin >> valor2;//captura el valor ingresado y se almacena en la variable declarada como valor2;
	resultado = (valor1 * valor2);//Realiza la operacion indicada con los valores que se han almacenado en valor1 y valor2
	cout << "La multiplicacion es: "<< resultado << endl;//Se da el resultado de la operacion, concatenando la varibales resultado.
}
int division (){
	cout << "***DIVISION***"<< endl;
	cout << "Ingrese el primer valor "<< endl;//Se pide el primer valor al usuario 
	cin >> valor1;//captura el valor ingresado y se almacena en la variable declarada como valor1;
	cout << "Ingrese el segundo valor" << endl;//Se pide el segundo valor al usuario
	cin >> valor2;//captura el valor ingresado y se almacena en la variable declarada como valor2;
	resultado = (valor1 / valor2);//Realiza la operacion indicada con los valores que se han almacenado en valor1 y valor2
	cout << "La division es: "<< resultado << endl;//Se da el resultado de la operacion, concatenando la varibales resultado.
}