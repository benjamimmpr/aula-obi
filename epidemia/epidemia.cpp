#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, r, p;

    cin >> n;
    cin >> r;
    cin >> p;

    int d = 0;
    int novos = n;
    int total = n;

    while(total < p){
        novos *= r;
        total += novos;
        d++;
    }

    cout << d << endl;

    return 0;
}