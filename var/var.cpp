#include <iostream>

using namespace std;

int main(void){
    int X, Y;

    cin >> X >> Y;

    if((X < -8) || (X > 8) || (Y < 0) || (Y > 8)){
        cout << "N";
    }else{
        cout << "S";
    }

    return 0;
}