#include <bits/stdc++.h>
using namespace std;

int main(){
    int V = 0;

    for(int i = 0; i < 6; i++){
        string s;
        cin >> s;
        if(s == "V"){
            V++;
        }
    }

    if(V == 5 || V == 6){
        cout << "1" << endl;
    }else if(V == 3 || V == 4){
        cout << "2" << endl;
    }else if(V == 1 || V == 2){
        cout << "3" << endl;
    }else{
        cout << "-1" << endl;
    }

    return 0;
}