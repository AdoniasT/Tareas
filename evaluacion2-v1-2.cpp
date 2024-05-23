
#include <iostream>
using namespace std;
#include <string>
#include <random>
int numerorandom;
int dado() {
    cout << "Hora de tira el dado...";
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 6);
    numerorandom = dis(gen);
    cout << endl << numerorandom << endl;
    return 0;
}
int main()
{
    int opcion;
    int filas, columnas;
    string turno1, turno2, ganador;
    string jugadores[2];
    
    do {
        system("cls");
        cout << "ingrese los Nombres de los jugadores \n Jugador 1 X >";
        cin >> jugadores[0];
        cout << "\n Jugador 2 O >";
        cin >> jugadores[1];
        dado();
        cout << "\n el numero del dado es: " << numerorandom << endl;
        string matriz[5][3] = {
        {{" |"},{"  "},{"| "}},
        {{"--"},{"--"},{"--"}},
        {{" |"},{"  "},{"| "}},
        {{"--"},{"--"},{"--"}},
        {{" |"},{"  "},{"| "}}
        };
        string mensaje;
        for (int i = 0; i < 3;i++) {
            for (int j = 0; j < 3;j++) {
                if (numerorandom % 2 == 0) {
                    cout << "\nEs el turno de X : " << jugadores[0] << endl;
                    do
                    {
                        cout << "Escoga la fila y la columna";
                        cin >> filas >> columnas;
                        if (filas == 1) { filas = 0; }
                        else if (filas == 2) { filas = 2; }
                        else if (filas == 3) { filas = 4; }
                        if (columnas == 1) { columnas = 0; }
                        else if (columnas == 2) { columnas = 1; }
                        else if (columnas == 3) { columnas = 2; }
                        if (matriz[filas][columnas] != " |" && matriz[filas][columnas] != "  " && matriz[filas][columnas] != "| ") {
                            filas = 6;
                            cout << "\nCasilla invalida\n";
                        }
                    } while (filas > 5 || columnas > 3);
                    system("cls");
                    if (filas == 0 && columnas == 0) {
                        matriz[filas][columnas] = "x|";
                        filas = 1;
                    }
                    else if (filas == 0 && columnas == 1) {
                        matriz[filas][columnas] = " x ";
                        filas = 1;
                    }
                    else if (filas == 0 && columnas == 2) {
                        matriz[filas][columnas] = "|x";
                        filas = 1;
                    }
                    else if (filas == 2 && columnas == 0) {
                        matriz[filas][columnas] = "x|";
                    }
                    else if (filas == 2 && columnas == 1) {
                        matriz[filas][columnas] = " x ";
                    }
                    else if (filas == 2 && columnas == 2) {
                        matriz[filas][columnas] = "|x";
                    }
                    else if (filas == 4 && columnas == 0) {
                        matriz[filas][columnas] = "x|";
                        filas = 3;
                    }
                    else if (filas == 4 && columnas == 1) {
                        matriz[filas][columnas] = " x ";
                        filas = 3;
                    }
                    else if (filas == 4 && columnas == 2) {
                        matriz[filas][columnas] = "|x";
                        filas = 3;
                    }
                    for (int m = 0; m < 5; m++) {
                        for (int n = 0; n < 3; n++) {
                            cout << matriz[m][n];
                        }
                        cout << endl;
                    }
                    cout << "\nEl jugador " << jugadores[0] << " escogio la fila " << filas << " y la columna " << columnas + 1 << endl;
                    if ((matriz[0][0] == "x|" && matriz[0][1] == " x " && matriz[0][2] == "|x") ||
                        (matriz[2][0] == "x|" && matriz[2][1] == " x " && matriz[2][2] == "|x") ||
                        (matriz[4][0] == "x|" && matriz[4][1] == " x " && matriz[4][2] == "|x") ||
                        (matriz[0][0] == "x|" && matriz[2][0] == "x|" && matriz[4][0] == "x|") ||
                        (matriz[0][1] == " x " && matriz[2][1] == " x " && matriz[4][1] == " x ") ||
                        (matriz[0][2] == "|x" && matriz[2][2] == "|x" && matriz[4][2] == "|x") ||
                        (matriz[0][0] == "x|" && matriz[2][1] == " x " && matriz[4][2] == "|x") ||
                        (matriz[4][0] == "x|" && matriz[2][1] == " x " && matriz[0][2] == "|x")
                        ) {
                        mensaje = "ganador1";
                        ganador = jugadores[0];
                        break;
                    }
                }
                else {

                    cout << "\nEs el turno de O: " << jugadores[1] << endl;
                    do
                    {
                        cout << "Escoga la fila y la columna";
                        cin >> filas >> columnas;
                        if (filas == 1) { filas = 0; }else if (filas == 2) { filas = 2; }else if (filas == 3) { filas = 4; }
                        if (columnas == 1) { columnas = 0; }else if (columnas == 2) { columnas = 1; }else if (columnas == 3) { columnas = 2; }
                        if (matriz[filas][columnas] != " |" && matriz[filas][columnas] != "  " && matriz[filas][columnas] != "| ") {
                            filas = 6;
                            cout << "\nCasilla invalida\n";
                        }
                    } while (filas > 5 || columnas > 3);
                    system("cls");
                    if (filas == 0 && columnas == 0) {
                        matriz[filas][columnas] = "o|";
                        filas = 1;
                    }
                    else if (filas == 0 && columnas == 1) {
                        matriz[filas][columnas] = " o ";
                        filas = 1;
                    }
                    else if (filas == 0 && columnas == 2) {
                        matriz[filas][columnas] = "|o";
                        filas = 1;
                    }
                    else if (filas == 2 && columnas == 0) {
                        matriz[filas][columnas] = "o|";
                    }
                    else if (filas == 2 && columnas == 1) {
                        matriz[filas][columnas] = " o ";
                    }
                    else if (filas == 2 && columnas == 2) {
                        matriz[filas][columnas] = "|o";
                    }
                    else if (filas == 4 && columnas == 0) {
                        matriz[filas][columnas] = "o|";
                        filas = 3;
                    }
                    else if (filas == 4 && columnas == 1) {
                        matriz[filas][columnas] = " o ";
                        filas = 3;
                    }
                    else if (filas == 4 && columnas == 2) {
                        matriz[filas][columnas] = "|o";
                        filas = 3;
                    }
                    for (int m = 0; m < 5; m++) {
                        for (int n = 0; n < 3; n++) {
                            cout << matriz[m][n];
                        }
                        cout << endl;
                    }
                    cout << "\nEl jugador " << jugadores[1] << " escogio la fila " << filas << " y la columna " << columnas + 1 << endl;
                    if ((matriz[0][0] == "o|" && matriz[0][1] == " o " && matriz[0][2] == "|o") ||
                        (matriz[2][0] == "o|" && matriz[2][1] == " o " && matriz[2][2] == "|o") ||
                        (matriz[4][0] == "o|" && matriz[4][1] == " o " && matriz[4][2] == "|o") ||
                        (matriz[0][0] == "o|" && matriz[2][0] == "o|" && matriz[4][0] == "o|") ||
                        (matriz[0][1] == " o " && matriz[2][1] == " o " && matriz[4][1] == " o ") ||
                        (matriz[0][2] == "|o" && matriz[2][2] == "|o" && matriz[4][2] == "|o") ||
                        (matriz[0][0] == "o|" && matriz[2][1] == " o " && matriz[4][2] == "|o") ||
                        (matriz[4][0] == "o|" && matriz[2][1] == " o " && matriz[0][2] == "|o")
                        ) {
                        mensaje = "ganador2";
                        ganador = jugadores[1];
                        break;
                    }
                    
                }numerorandom++;
                
            }
            if (mensaje == "ganador1" || mensaje == "ganador2") {
                break;
            }
         
        }
        if (ganador==jugadores[0]) {
            cout << "Jugador "<< ganador<<" a ganda. \n";
        }
        else if (ganador == jugadores[1]) {
            cout << "Jugador " << ganador << " a ganda. \n";
        }
        else {
            cout << "\nEmpate\n";
        }
    
        
        cout << "\nEscoge: 1) Volver a jugar \n 2) Salir\n >";
        cin>>opcion;
    } while (opcion == 1);
}


