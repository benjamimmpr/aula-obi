#include <bits/stdc++.h>
using namespace std;

int main(){
    int h, m, s, t;

    cin >> h >> m >> s >> t;

    s = s + t;

    while(s >= 60){
        m++;
        s = s - 60;
    }
    while(m >= 60){
        h++;
        m = m - 60;
    }
    while(h >= 24){
        h = h - 24;
    }

    cout << h << endl;
    cout << m << endl;
    cout << s << endl;
    

    return 0;
}