#include <iostream>
#include <cstdlib>
using namespace std;
int opcmens, respuesta;
void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void primermenu()
{
	int x, y;

	cout << "Bienvenido al primer menu" << endl <<
		"1ro. ingrese dos numero coordenadas para imprimir el mensaje, recuerde primero x despues y";
	cin >> x;
	cin >> y;
	gotoxy(x, y);
	cout << "Ya estoy donde me indicaron";
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


void
segundomenu()
{
	cout << "Bienvenido al segundo menu" << endl;
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
			endl << "2)Menu dos" << endl;
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
			}

		}
		else if (opcmens == 2)
		{
			segundomenu();
		}
	} while (opcmens <= 2);
}