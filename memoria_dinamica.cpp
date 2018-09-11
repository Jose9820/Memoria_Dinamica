#include <iostream>

using namespace std;

struct Nodo{
	int val;
	struct Nodo *ptr;
}*nodo,*inicio;

int main(){
 	nodo= new struct Nodo;
 	inicio=nodo;
 	inicio->ptr=NULL;
 	inicio->val=10;
 	cout << "primer valor: " << inicio->val << endl;
 	
 	nodo=new struct Nodo;
 	inicio->ptr=nodo;
 	inicio->ptr->ptr=NULL;
 	inicio->ptr->val=20;
 	cout << "segundo valor: " << inicio->ptr->val << endl;
}
