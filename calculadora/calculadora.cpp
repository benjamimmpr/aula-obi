#include <iostream>

using namespace std;

int main(void){
    double operation, a, b, res;

    cout << "Selecione a operação que você deseja realizar: \n";
    cout << "1 -> SOMA \n";
    cout << "2 -> SUBTRAÇÃO \n";
    cout << "3 -> MULTIPLICAÇÃO \n";
    cout << "4 -> DIVISÃO \n";
    cin >> operation;

    cout << "Escolha dois números para realizar a operação \n";
    cin >> a >> b;

    if(operation == 1){
        res = a + b;
        cout << "O resultado da soma é " << res << endl;
    }else if(operation == 2){
        res = a - b;
        cout << "O resultado da subtração é " << res << endl;
    }else if(operation == 3){
        res = a * b;
        cout << "O resultado da multiplicação é " << res << endl;
    }else if(operation == 4){
        res = a / b;
        cout << "O resultado da divisão é " << res << endl;
    }else{
        cout << "Operação inválida. \n";
    }

    return 0;
}