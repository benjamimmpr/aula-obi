#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n; 
    
    cin >> n; 

    vector<int> v(n); 

    for(int i = 0; i < n; i++){
        cin >> v[i]; 
    } 

    reverse( v.begin(), v.end() );

    int maior = -1;

    int res = 0;

    for(int i = 0; i < n; i++){
        if( v[i] <= maior ){
            res++; 
        } 
        maior = max(maior, v[i]); 
    }

    cout << res << endl;

    return 0;
}
