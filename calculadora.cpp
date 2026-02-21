//CABEÇALHO
#include <iostream>


//NAMESPACE
using namespace std;


//FUNÇÃO PRINCIPAL(MAIN)
int main(void){
    int a, b, soma;

    cout << "Qual o primeiro número? ";
    cin >> a;

    cout << "Qual o segundo número? ";
    cin >> b;

    soma = a + b;

    cout << "O resultado da soma é " << soma << endl;

    return 0;
}