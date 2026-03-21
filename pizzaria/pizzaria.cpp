#include <iostream>

using namespace std;

int main(void) {
    int G, P;

    cin >> G;
    cin >> P;

    if(!(G >= 1) || !(G <= 10)){
        return 0;
    }else if(!(P >= 1) || !(P <= 10)){
        return 0;
    }

    cout << (G * 8) + (P * 4) - 2 << endl;

    return 0;
}