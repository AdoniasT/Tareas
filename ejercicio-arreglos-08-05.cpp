/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
cout << "Hola ingrese los numeros para el arreglo"<<endl;
    int arreglo[15];
    for(int i=0;i<15;i++){
        cout << "ingrese un numero"<< i << endl;
        cin>>arreglo[i];
    }
    cout<< "Estos son los numeros del arreglo"<<endl;
    for(int i=0; i<15;i++){
        cout<< arreglo[i]<< endl;
        
    }
}