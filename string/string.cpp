// Problema: Senha Segura

// Uma senha é considerada segura se contém pelo menos 3 letras 'A' (maiúsculas).

// Dada uma senha, determine se ela é segura.

//Entrada

// A entrada contém uma única string S, formada apenas por letras maiúsculas do alfabeto.

// Saída

// Imprima:

// SEGURA

// se a senha possui pelo menos 3 letras 'A'.

// Caso contrário, imprima:

// INSEGURA

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int cont = 0;

    cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'A'){
            cont++;
        }
    }

    if(cont >= 3){
        cout << "SEGURA" << endl;
    }else{
        cout << "INSEGURA" << endl;
    }

    return 0;
}