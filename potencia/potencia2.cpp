#include <iostream>

using namespace std;

int main(void){
    int base = 2;
    long long res = 1;
    char r;

    while(true){
        cout << "Resultado = " << res << "\n";
        cout << "Você quer multiplicar por 2? Responda Y se sim. ";
        cin >> r;

        if(r != 'Y' && r != 'y'){
            cout << "Ok. O resultado final foi " << res << ". \n";
            break;
        }

        res = res * base;
    }

    return 0;
}