#include <iostream>

using namespace std;

int main(void) {
    int N, P, D = 0, bacterias = 1;

    cin >> N;
    cin >> P;

    while(bacterias * P <= N){
        bacterias *= P;
        D++;
    }

    cout << D;

    return 0;
}