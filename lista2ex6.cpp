#include <iostream>
using namespace std;

main(){
	setlocale (LC_ALL, "Portuguese");
	
	int numero, aux, temp, ultimo, penultimo;
	
	cout << "Insira o número: ";
	cin >> numero;
	
	cout << penultimo << endl << ultimo << endl;
	
	for(aux=3; aux<=numero; aux++){
		cout << (ultimo+penultimo) << endl;
		temp = penultimo;
		penultimo = ultimo;
		ultimo = ultimo+temp;
	}
}



// a variavel (aux) serve para trocar o valor entre duas variáveis.
// a variavel (temp) serve para armazenar valores antigos, no caso desse codigo, da variavel penultimo.

// for[estrutura de repetição](aux=3 [pois já foi exibido os dois primeiros termos da sequência 0 e 1]; aux<=n [para percorrer n iterações]; aux++).


