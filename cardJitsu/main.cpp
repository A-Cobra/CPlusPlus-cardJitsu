#include <iostream>
#include "rlutil.h"
#include <ctime>
#include <string>
#include <vector>

using namespace std;

//Structs
struct ElementCard{
    //Variables o Atributos
    string elemento;
    string color;
    int numero;
    
    //Constructor
    ElementCard() {}
    ElementCard(string elemento, string color, int numero) {
        this->elemento = elemento;
        this->color = color;
        this->numero = numero;
    }
};

struct Jugador{

};


//Funcionalidades del programa
vector<ElementCard> crearCartasElemento(vector<ElementCard> mazoCartasDesafio) {
//void crearCartasElemento(vector<ElementCard> mazoCartasDesafio) {
    ElementCard aux;
    for (int i = 0; i < 3; i++){ // Para tipos de elemento
        for (int j = 0; j < 4; j++) { // Para colores
            for (int k = 0; k < 5; k++) { // Para numeros
                //Condiciones
                //Elemento
                if (i == 0) {
                    aux.elemento = "Fuego";
                }
                else if (i == 1) {
                    aux.elemento = "Nieve";
                }
                else if (i == 2) {
                    aux.elemento = "Agua";
                }
                //Color
                if (j == 0) {
                    aux.color = "Rojo";
                }
                else if (j == 1) {
                    aux.color = "Amarillo";
                }
                else if (j == 2) {
                    aux.color = "Verde";
                }
                else if (j == 3) {
                    aux.color = "Azul";
                }
                //Número
                aux.numero = k + 1;

                //Agregamos la carta auxiliar a la baraja
                mazoCartasDesafio.push_back(aux);
            }
        }
    }
    return mazoCartasDesafio;
}

//bool revisarCombinacionCartas() {
//
//}
//
//bool revisarObjetivo() {
//
//}


int main() {

    srand(time(0));

    //Variables
    string mazoCartasDesafio[10] = { //Colección de 10 cartas desafio
    };
    vector<ElementCard> mazoCartasElemento; //Colección de 60 cartas Elemento
    cout << "Bienvenido" << endl;
    /*ElementCard newElement = ElementCard("Fuego", "Rojo", 5);
    mazoCartasElemento.push_back(newElement);*/

    mazoCartasElemento = crearCartasElemento(mazoCartasElemento);
    //Revisar las cartas
    for (int i = 0; i < mazoCartasElemento.size(); i++){
        cout << "Elemento: " << mazoCartasElemento[i].elemento << ", ";
        cout << "Color: " << mazoCartasElemento[i].color << ", ";
        cout << "Numero: " << mazoCartasElemento[i].numero << endl;

    }





    /*char nombre[30];
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
    } while (N != 0);*/
    rlutil::getkey();
    return 0;
}