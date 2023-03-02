#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, cont, soma = 0;
	
	cout << "Digite um número: ";
	cin >> numero;
	
	int resto[numero];
	
	for (int I = 1; I<=numero; I++){
		if(numero % I == 0){
			resto[cont]= I;
			cont++;
		}
	}
	for (int I = 0; I<=numero; I++){
		if(resto[I] < numero && resto[I] > 0){
			cout << "Esses são os divisores: " << resto[I] << endl;
			soma = soma + resto[I];
		}
		else{
			break;
		}
	}
	
	cout << "Essa é a soma de todos os divisores: " << soma << endl;
	
	if(soma == numero){
		cout << "O número é perfeito";
	}else if(soma!=numero){
		cout << "O número não é perfeito";
	}
	
}
