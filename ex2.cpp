#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, armazena;
	
	cout << "Insira um número: ";
	cin >> numero;
	
	do{
		armazena = armazena + numero % 10; 
		numero = numero / 10;
	}while(numero!=0);
	
	cout << "a soma dos digitos é: " << armazena;
	
}
