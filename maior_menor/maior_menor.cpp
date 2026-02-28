#include <iostream>

using namespace std;

int main(void){
    int a, b;

    cout << "Escreva os números que você deseja comparar: \n";
    cin >> a >> b;

    if (a > b){
        cout << a << " é maior do que " << b << endl;
    }else if (a < b){
        cout << a << " é menor do que " << b << endl;
    }else if (a == b){
        cout << a << " é igual a " << b << endl;
    }

    return 0;
}