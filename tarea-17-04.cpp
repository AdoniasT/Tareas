#include <iostream>
#include <cstdlib>
#include <string.h>
#include <windows.h>
using namespace std;
int opcmens, respuesta, opcmen1, opcmen2;

void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void op1men1() {
	int cordx, cordy;

	cout << "Bienvenido 1ro. ingrese dos numero coordenadas para imprimir el mensaje, recuerde primero x despues y" << endl;
	cin >> cordx;
	cin >> cordy;
	gotoxy(cordx, cordy);
	cout << "Hola mundo desde gotoxy" << endl;
}
void op2men1() {
	int cordx, cordy, num;

	cout << "Bienvenido 2do. opcion ingrese un numero para imprimir en el centro de la pantalla" << endl;
	cin >> num;
	cordx = 50;
	cordy = 25;
	gotoxy(cordx, cordy);
	cout << num << endl;
}

void op3men1() {
	int i = 0;

	cout << "Bienvenido 3ra. opcion ingrese un numero para imprimir en cualquier lado de la pantalla" << endl;

	
	string palabra;
	cin >> palabra;

	int cordx2 = 50;
	int cordy2 = 25;
	
	do {
		gotoxy(cordx2, cordy2);
		cout << palabra << endl;
		i++;
	} while (i <= 10);
}

void primermenu()
{
	cout << "escoja la acción" << endl << "1)esoger coordenada pero no mensaje" << endl << "2)encoger mensaje perno no coordenadads" << endl << "3)repetir 10 veces una palabra en cualquier parte de la consola" << endl;
	cin >> opcmen1;
	if (opcmen1 == 1) {
		op1men1();
	}
	else if (opcmen1 == 2) {
		op2men1();
	}
	else if (opcmen1 == 3) {
		op3men1();
	}
	cout << endl << "Que desea hacer?" << endl << "1)ir al menu principal" <<
		endl << "2) ir al menu dos" << endl;
	cin >> respuesta;
	if (respuesta == 1)
	{
		opcmens = 0;
	}
	else if (respuesta == 2)
	{
		opcmens = 2;
	}

}


void op1men2() {
	int cordy = 70, cordx = 90;
	string caracteraro = "¬";
	gotoxy(cordx, cordy);
	cout <<caracteraro;
}
void op2men2() {
	cout << "ingrese el nombre de un compañero";
	string comp;
	cin >> comp;
	cout << "hola comapañero " << comp << endl;
}

void
segundomenu()
{
	cout << "Bienvenido al segundo menu" << endl;
	cout << "Escoge una opción" << endl << "1) ir a las coordenadas 30,30" << endl << "2)saludar a un compañero";
	cin >> opcmen2;
	if (opcmen2 == 1) {
	 op1men2();
	}
	else if (opcmen2 == 2) {
		op2men2();
	}


	cout << endl << "Que desea hacer?" << endl << "1)ir al menu principal" <<
		endl << "2) ir al menu uno" << endl;
	cin >> opcmens;
	if (opcmens == 1)
	{
		opcmens = 0;
	}
	else if (opcmens == 2)
	{
		primermenu();
	}
}



int
main()
{

	do
	{
		cout << endl << "Escoja a que menC: desea ir" << endl << "1)Menu uno" <<
			endl << "2)Menu dos" << endl<<"3)salir";
		cin >> opcmens;
		if (opcmens == 1)
		{
			primermenu();
			if (respuesta == 1)
			{
				opcmens = 0;
			}
			else if (respuesta == 2)
			{
				segundomenu();
			}else if(respuesta==3){
				opcmens = 3;
			}

		}
		else if (opcmens == 2)
		{
			segundomenu();
		}
	} while (opcmens <= 2);
}