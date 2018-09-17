#include <iostream>
#include <conio.h>
// tare: pedirle al usario si quiere crear otro dato ó cuantos datos desea, ordenacion de los nodos por valor de los datos(usar dos auxiliares para que funcione)
using namespace std;

struct Nodo{
 	int dato;
 	struct Nodo *siguiente;
}*inicio, *actual, *auxiliar, *auxiliar1, *auxiliar2;

void insertarNodo(int);
void mostrarNodos();
void ordenarDatos(int);

int main(){
 	inicio=NULL;
 	int respuesta, valor, N;
 	do{
 		cout << "Eliga una opcion:\n\n1.- Agregar datos\n2.- Terminar\n3.- Mostrar datos en orden ascendente\n...";
 		cin >> respuesta;
 		switch(respuesta){
 	 		case 1:
 	 			cout << "\nCantidad de datos: ";
		 		cin >> N;
		 		cout << endl;
		 		for (int i=0; i<N; i++){
		 			cout << "Ingrese dato " << i+1 << " : ";
		 			cin >> valor;
		 			insertarNodo(valor);
				 }
		 		break;
 			case 2:
 	  			mostrarNodos();
 	 			break;
 			case 3:
 	 			ordenarDatos(N);
 	 			break;
 			default:
 				cout << "Error. Opcion invalida...";
 				break;
		 }
	 	cin.get();
	 	cin.get();
	 	system("cls");
	 }while(respuesta != 2);
 	
 	return 0;
}

void insertarNodo(int valor){
 	actual=inicio;
 	if (actual==NULL){
	  		auxiliar=new Nodo();
	 		auxiliar->dato=valor;
	 		auxiliar->siguiente=NULL;
	 		inicio=auxiliar;
	 }else{
	 	while (actual->siguiente!=NULL){
		 	actual=actual->siguiente;
		 	
		 }
 		auxiliar=new Nodo();
 		auxiliar->dato=valor;
 		auxiliar->siguiente=NULL;
 		actual->siguiente=auxiliar;
	 }
}

void ordenarDatos(int N){
 	cout << "orden ascendente: " << endl;
 	for(int i= 0; i < N; i ++){
 		actual=inicio;
	 	for(int j = 0; j < N; j++){
 			if(actual->dato > actual->siguiente->dato){
 				auxiliar1=actual->siguiente;
 				actual->siguiente=auxiliar->siguiente->siguiente;
 				auxiliar1->siguiente=actual;
 				auxiliar2->siguiente=auxiliar1;
			 }
		 	auxiliar2=actual;
		 	actual=actual->siguiente;
		 }
	 }
 	mostrarNodos();
} 

void mostrarNodos(){
 	actual=inicio;
 	cout << endl;
 	while(actual!=NULL){
		cout << "-> " << actual->dato << "  ";
		actual=actual->siguiente;
	}
}
