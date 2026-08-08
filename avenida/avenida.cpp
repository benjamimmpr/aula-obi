#include <bits/stdc++.h>
using namespace std;

int main(){
    int d;

    cin >> d;

    int dist_a = abs(d - 0);
    int dist_b = abs(d - 400);
    int dist_c = abs(d - 800);
    int dist_d = abs(d - 1200);
    int dist_e = abs(d - 1600);
    int dist_f = abs(d - 2000);

    int res = min({dist_a, dist_b, dist_c, dist_d, dist_e, dist_f});

    cout << res;

    return 0;
}