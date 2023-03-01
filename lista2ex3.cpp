#include <iostream>
using namespace std;

main(){
	setlocale (LC_ALL, "Portuguese");
	
	int numero, cont, contMatrix;
	
	cout << "Insira um numero: ";
	cin >> numero;
	
	int matrix[numero];
	
	for (int I = 1; I<=numero; I++){
		
		
		for (int X = 1; X<=I; X++){
		
		if(I % X == 0){
		   cont++;
		}
			
		}
		
		if(cont == 2){
			matrix[contMatrix] = I;
		}
		cont = 0;
	}
		for (int I = 0; I<=numero; I++){
		if(matrix[I] > 0){
			cout << "Esses são os números primos " << matrix[I] << endl;
		}
		else{
			break;
		}
	}
}
