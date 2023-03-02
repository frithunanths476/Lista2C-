#include <iostream>

using namespace std;

bool eh_primo(int n){
    if(n <= 1){
        return false;
    }
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int num;
    cout << "Digite um numero inteiro: ";
    cin >> num;
    cout << "Os numeros primos menores ou iguais a " << num << " sao: ";
    for(int i = 2; i <= num; i++){
        if(eh_primo(i)){
            cout << i << " ";
        }
    }
    return 0;
}
