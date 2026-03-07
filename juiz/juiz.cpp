#include <iostream>

using namespace std;

int main(void){
    int idade, nota;

    cout << "Qual a sua idade? ";
    cin >> idade;

    cout << "Qual a sua nota? ";
    cin >> nota;

    if((idade < 6 || idade > 18)){
        cout << "Você não pode participar da modalidade PJ/P1! \n";

        return 0;
    }

    if(nota < 0 || nota > 100){
        cout << "Nota fora do padrão(0-100)! \n";

        return 0;
    }

    if(nota >= 80){
        cout << "Parabéns! Você ganhou uma medalha na OBI! \n";

        return 0;
    }

    cout << "Você não ganhou uma medalha. Tente novamente próximo ano. \n";

    return 0;
}