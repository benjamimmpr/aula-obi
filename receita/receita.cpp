#include <bits/stdc++.h>
using namespace std;

int main(){
    int p, o;
    cin >> p;
    cin >> o;

    int cafep = p / 2;
    int cafeo = o / 4;

    int res = min(cafep, cafeo);

    cout << res << endl;

    return 0;
}