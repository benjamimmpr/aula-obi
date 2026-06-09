#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    int c = 0;

    cin >> n >> k;

    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end(), greater<int>());

    cout << v[k - 1] << endl;

    return 0;
}