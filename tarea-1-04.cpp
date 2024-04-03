/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    cout <<"Bienvenido ingrese un numero\n";
    int numero, sumas=1, respuesta=0;
    cin>>numero;
    for (int i=0; i<numero;i++){
        respuesta=i+sumas;
        
        cout<<i<<"+"<<sumas <<"="<<respuesta<<"\n";
        sumas++;
    }
    cout<< respuesta;
}

