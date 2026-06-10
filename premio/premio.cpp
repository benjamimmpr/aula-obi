#include <bits/stdc++.h>
using namespace std;

int main(){
    int p, d, b;

    cin >> p;
    cin >> d;
    cin >> b;

    int pontos = p + (2 * d) + (3 * b);

    if(pontos >= 150){
        cout << "B" << endl;
    }else if(pontos >= 120 && pontos < 150){
        cout << "D" << endl;
    }else if(pontos >= 100 && pontos < 120){
        cout << "P" << endl;
    }else{
        cout << "N" << endl;
    }

    return 0;
}