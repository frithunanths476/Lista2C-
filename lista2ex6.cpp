#include <iostream>
using namespace std;

main(){
	setlocale (LC_ALL, "Portuguese");
	
	int numero, aux, temp, ultimo, penultimo;
	
	cout << "Insira o n�mero: ";
	cin >> numero;
	
	cout << penultimo << endl << ultimo << endl;
	
	for(aux=3; aux<=numero; aux++){
		cout << (ultimo+penultimo) << endl;
		temp = penultimo;
		penultimo = ultimo;
		ultimo = ultimo+temp;
	}
}



// a variavel (aux) serve para trocar o valor entre duas vari�veis.
// a variavel (temp) serve para armazenar valores antigos, no caso desse codigo, da variavel penultimo.

// for[estrutura de repeti��o](aux=3 [pois j� foi exibido os dois primeiros termos da sequ�ncia 0 e 1]; aux<=n [para percorrer n itera��es]; aux++).


