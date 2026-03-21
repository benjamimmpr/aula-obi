#include <iostream>

using namespace std;

int main(void) {
    int A, B, C, D;

    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;

    if(!(C >= 100) && !(C <= 500)){
        return 0;
    }else if(!(A >= 0) && !(B >= A) && !(C > B)){
        return 0;
    }else if(!(D >= 10) && !(D <= 100)){
        return 0;
    }else if(((C - D) >= A) && ((C - D) <= B)){
        cout << "S" << endl;

        return 0;
    }else{
        cout << "N" << endl;

        return 0;
    }
   
    return 0;
}