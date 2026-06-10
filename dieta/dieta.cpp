#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;

    cin >> n;
    cin >> m;

    vector<int> p(n);
    vector<int> g(n);
    vector<int> c(n);

    int somap = 0;
    int somag = 0;
    int somac = 0;

    for(int i = 0; i < n; i++){
        cin >> p[i];
        cin >> g[i];
        cin >> c[i];
        somap += p[i];
        somag += g[i];
        somac += c[i];
    }

    int total = (4 * somap) + (9 * somag) + (4 * somac);
    int res = m - total;

    cout << res << endl;

    return 0;
}