#include <iostream>
#include <conio.h>

using namespace std;

struct Nodo{
	int dato;
	struct Nodo *siguiente;
}*inicio, *actual, *auxiliar;

void insertarNodo(int);
void mostrarNodo();

int main(){
 	inicio=NULL;
 	
 	insertarNodo(10);
 	insertarNodo(20);
 	insertarNodo(30);
 	mostrarNodo();
 	
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

void mostrarNodo(){
 	actual=inicio;
 	while(actual!=NULL){
		cout << "-> " << actual->dato << " ";
		actual=actual->siguiente;
	}
}
