// Problema — Palavra Equilibrada

// Uma palavra é considerada equilibrada quando possui a mesma quantidade de letras 'A' e 'B'.

// Dada uma string formada apenas por letras maiúsculas determine se ela é equilibrada.

// Entrada

// Uma única string S.

// Saída

// Imprima:

// SIM

// se a quantidade de 'A' for igual à quantidade de 'B'.

// Caso contrário, imprima:

// NAO

// Exemplo 1

// Entrada
// ABACBC

// Saída
// SIM

// Exemplo 2

// Entrada
// AAAB

// Saída
// NAO

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;

    cin >> s;

    int contA = 0;
    int contB = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'A'){
            contA++;
        }else if(s[i] == 'B'){
            contB++;
        }
    }

    if(contA == contB){
        cout << "SIM" << endl;
    }else{
        cout << "NAO" << endl;
    }

    return 0;
}