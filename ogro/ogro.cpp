#include <bits/stdc++.h>
using namespace std;

int main() {
    int E, D;
    int res = 0;

    cin >> E;
    cin >> D;

    if(E > D){
        res = E + D;
    }else{
        res = 2 * (D - E);
    }

    cout << res;
    

    return 0;
}