#include <iostream>
#include "rlutil.h"
#include <ctime>
#include <string>

using namespace std;

//Structs
struct ElementCard{

};


//Funcionalidades del programa
bool revisarCombinacionCartas() {

}

bool revisarObjetivo() {

}


int main() {

    srand(time(0));

    //Variables
    string cartasDesafio[10] = {
    };






    char nombre[30];
    int cartaselemento[60];
    int N, N2, N3, N4, X, Ronda = 0;
    string cartadesafio[10];
    cartadesafio[0] = "Ganar una carta Nieve";
    cartadesafio[1] = "Ganar una carta Fuego";
    cartadesafio[2] = "Ganar una carta Agua";
    string Jugador1;

    N3 = rand() % 3;


    do {

        rlutil::cls();
        cout << "Card Jitsu++" << endl;
        cout << "--------------------------------------------" << endl;
        cout << "1 - Jugar" << endl;
        cout << "2 - Estadisticas" << endl;
        cout << "3 - Creditos" << endl;
        cout << "4 - Reglas del juego" << endl;
        cout << "--------------------------------------------" << endl;
        cout << "0 - Salir" << endl;

        switch (N) {
        case 1:
            rlutil::cls();
            cout << "Nombre:";
            cin.ignore();
            getline(cin, Jugador1);
            rlutil::cls();
            cout << "-----------------------" << endl;
            Ronda++;

            do {
                rlutil::cls();
                cout << "Ronda " << Ronda << endl;
                cout << Jugador1;
                cout << " vs CPU" << endl;
                cout << "1 - Ver carta desafio" << endl;
                cout << "2 - Ver cartas elemento" << endl;
                cout << "3 - Robar carta elemento del mazo" << endl;
                cout << "-----------------------" << endl;
                cin >> N2;

                switch (N2) {
                case 1:
                    rlutil::cls();
                    cout << "Carta desafio:" << endl;
                    cout << cartadesafio[N3] << endl;
                    cin >> N4;
                    break;
                case 2:
                    cout << "Cartas en la mano:" << endl;
                }
            } while (N2 != 0);

            break;
        }

        cin >> N;
    } while (N != 0);

    return 0;
}