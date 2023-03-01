#include <iostream>
using namespace std;

main(){
	int numero, qtde;
	
	cout << "informe o numero para a tabuada: ";
	cin >> numero;
	
	cout << "informe ate quantos voce quer que va: ";
	cin >> qtde;
	
	for (int x = 0; x <= qtde; x++){
		cout << numero << " x " << x << " = " << numero * x << endl;
	}
}
