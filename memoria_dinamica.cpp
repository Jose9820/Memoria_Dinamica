#include <iostream>
#include <conio.h>
// tare: pedirle al usario si quiere crear otro dato ó cuantos datos desea, ordenacion de los nodos por valor de los datos(usar dos auxiliares para que funcione)
using namespace std;

struct Nodo{
 	int dato;
 	struct Nodo *siguiente;
}*inicio, *actual, *auxiliar;

void insertarNodo(int);
void mostrarNodos();

int main(){
 	inicio=NULL;
 	cout << "Cantidad de valores: ";
 	int N;
 	cin >> N;
 	int valores[N];
 	cout << endl;
 	for (int i=0; i < N; i++){
 		cout << "Ingrese el valor " << i+1 << ": ";
 		cin >> valores[i];
	 }
 	for (int i=0; i < N; i++){
 		insertarNodo(valores[i]);
	 }
 	cout << endl;
 	mostrarNodos();
  	cin.get();
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

void mostrarNodos(){
 	actual=inicio;
 	while(actual!=NULL){
		cout << "-> " << actual->dato << "  ";
		actual=actual->siguiente;
	}
}
