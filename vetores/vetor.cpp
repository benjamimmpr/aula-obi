#include <iostream>

using namespace std;

int main(void){
    int n = 3;
    int vec[] = {0, 1, 2};

    vec[0] = 0;
    vec[1] = 1;
    vec[2] = 2;

    for(int i = 0; i < n; i++){
        cout << vec[i] << "\n";
    }

    return 0;
}