#include <iostream>


using namespace std;

int main(){
 	int N;
 	int *var;
 	var=new int[N];
 	cout << "Ingrese cantidad de datos: ";
 	cin >> N;
  	int arreglo_N[N];
 	for (int i=0; i < N; i++){
 		cout << "Ingrese el dato " << i+1 << ": ";
 		cin >> arreglo_N[i];
 	}
 	for (int i=0; i<N; i++){
 		cout << "\nValor " << i+1 << ": " << arreglo_N[i];
	 }
 	delete[] var;
}
