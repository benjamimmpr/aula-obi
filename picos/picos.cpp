// Problema — Picos

// Um número em um vetor é chamado de pico quando ele é estritamente maior que seus dois vizinhos.

// Por exemplo, no vetor:

// 3 8 2

// o número 8 é um pico.

// Dado um vetor, conte quantos picos existem.

// Entrada

// A primeira linha contém um inteiro N (N ≥ 3).

// A segunda linha contém N inteiros.

// Saída

// Imprima a quantidade de picos.

// Exemplo

// Entrada

// 7
// 1 5 2 6 4 8 3

// Saída

// 3

// Explicação:

// 1 5 2 6 4 8 3
//   ↑   ↑   ↑

// Os números 5, 6 e 8 são picos.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int picos = 0;

    for(int i = 1; i < n - 1; i++){
        if((v[i] > v[i - 1]) && (v[i] > v[i + 1])){
            picos++;
        }
    }

    cout << picos << endl;

    return 0;
}