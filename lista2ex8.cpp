#include <iostream>
using namespace std;
 
 //a fun��o abaixo serve para converter o n�mero em codigo bin�rio
 void dectaBinario(int n){
 	
	 int numeroBinario[n];
	 int i = 0;
	 while (n > 0) {
	 	//o que est� abaixo serve para arranjar em codigo bin�rio
	 	numeroBinario[i] = n % 2;
	 	n = n / 2;
	 	i++;
	 }
	 //esse for serve para o codigo aparecer da maneira correta na tela
	 for (int X = i - 1; X >= 0; X--)
	     cout << numeroBinario[X];
 }
 
 int main(){
 	setlocale (LC_ALL, "Portuguese");
 	int n; 
 	
 	cout << "Informe o n�mero: ";
 	cin >> n;
 	dectaBinario(n);
 }
