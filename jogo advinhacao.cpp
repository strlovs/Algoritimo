#include <iostream>
#include <cstdlib>  
#include <ctime>  

using namespace std;

int main() {

    srand(time(0)); 
    int numero_secreto = rand() % 100 + 1; 
    int tentativa;
    int tentativas = 0;

    cout << "Bem-vindo ao jogo de adivinhacao!" << endl;
    cout << "Tente adivinhar o numero entre 1 e 100." << endl;

    do {
        cout << "Digite sua tentativa: ";
        cin >> tentativa; 
        tentativas++;

        if (tentativa == numero_secreto) {
            cout << "Voc� acertou, parabens!" << endl;
            cout << "Numero de tentativas: " << tentativas << endl;
        } else {
            cout << "Voc� errou, tente novamente." << endl;
        }
    } while (tentativa != numero_secreto); 

    return 0;
}


