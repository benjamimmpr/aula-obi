#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin >> n;

    int f[n];

    for(int i = 0; i < n; i++){
        cin >> f[i];
    }

    int t = 0, pos = 0;

    for(int i = 0; i < n; i++){
        if(f[i] >= 60){
            t = max(t, (i - pos));
            pos++;
        }
    }

    cout << t << endl;

    return 0;
}