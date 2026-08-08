#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;

    cin >> n;
    cin >> m;

    int count_araras = 0;

    for(int i = 1; i <= m; i += 5){
        count_araras++;
    }

    if(count_araras >= n){
        cout << "S";
    }else{
        cout << "N";
    }

    return 0;
}