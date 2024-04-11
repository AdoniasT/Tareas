/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
#include <cstdlib>
//lugar para variables
int opcion;


void opcionuno(){
    cout<<"esta es la opcion uno";
    
}
void opciondos(){
    cout<<"esta el la opcion dos";
}
void opciontres(){
    cout<<"esta es la opcion tres";
}
void opcioncuatro(){
    cout<<"esta es la opcion cuatro";
}
void opcioncinco(){
    cout<<"esta es la opcion cinco";
}
int main()
{
    cout<<"Ingrese una de la opciones" <<endl;
    
    
    do{
        cout<<"1)Opcion uno"<<endl<<"2)opcion dos"<<endl<<"3)Opcion tres"<<endl<<"4)Opcion cuatro"<<endl<<"5)Opcion cinco"<<endl;
        cin>>opcion;
        switch (opcion){
            case 1: opcionuno();
            break;
            case 2: opciondos();
            break;
            case 3: opciontres();
            break;
            case 4: opcioncuatro();
            break;
            case 5: opcioncinco();
            break;
            default: cout<<"esta opcion no existe vuelva a intentar"<<endl;
            break;
        }
    }while(opcion>5);
}