#include <iostream>
using namespace std;

bool ePrimo(int n, int nn);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n = 0;
	
	printf("Digite um número: ");
	scanf("%d", &n);
	if (ePrimo(n, 1))
	  printf("%d é primo!", n);
	else
	  printf("%d não é primo!", n);
	  
	return 0;
}

bool ePrimo(int n, int nn){
	static int divs = 0;
	
	if (nn > n)
	  return n;
	  
	if (n % nn == 0)
	  divs++;
	  
	ePrimo(n ,nn + 1);
	
	if (divs <= 2)
	  return 1;
	return 0;
	  
}
