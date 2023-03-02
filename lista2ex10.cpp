#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	int i, numero;
	
	cout << "Informe um número: ";
	cin >> numero;
	
	if(numero >=101){
		cout << "Não tem múltiplo";
	}
	
	for(i = numero; i <= 100; i+=numero)
	   printf("%4d", i);   
	   
	return 0;   
}
