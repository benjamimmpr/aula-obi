// Problema — Maior Torcida

// Durante um campeonato escolar, N alunos informaram para quantos jogos do campeonato eles pretendem assistir.

// Determine o maior valor informado.

// Entrada

// A primeira linha contém um inteiro N.

// A segunda linha contém N inteiros A₁, A₂, ..., Aₙ.

// Saída

// Imprima o maior valor informado.

// Exemplo

// Entrada

// 5
// 12 7 15 8 10

// Saída

// 15

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int res = 0;

    for(int i = 0; i < n; i++){
        res = max(res, v[i]);
    }

    cout << res << endl;

    return 0;
}