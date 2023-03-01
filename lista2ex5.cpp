#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int fat;
int cont;

main(){
	setlocale (LC_ALL, "Portuguese");
	
	int n;
	
	cout << "Informe um número inteiro: ";
	cin >> n;
	
	fat = 1;
	cont = 1;
	
	while(cont <= n){
		fat = fat * cont;
		cont = cont + 1;
		
	}
	
	printf("O fatorial do número informado é: %d", fat);
	
}
