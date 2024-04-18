/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
#include <cstdlib>
#include <cmath>
int main()
{
    int i, opc;
    cout<<"bienvenido al menu del segundo parcial escoga que quiere hacer"<<endl<<"1)calcular una hipotenusa"<<endl<<"2)calcular un angulo"<<endl<<"3)facotorial de un numero"<<endl<<"4)dar vuelto"<<endl<<"5)salir"<<endl;
    cin>>opc;
    do{
        switch(opc){
            case 1:
            
            float opuesto, adyacente,raiz,resultado;
    cout<<"Ingrese los lados del triangulo"<<endl<<"opuesto: ";
    cin>>opuesto;
    cout<<endl<<"adyacente";
    cin>>adyacente;
    raiz=sqrt((opuesto*opuesto)+(adyacente*adyacente));
    cout<<"La hipotenusa es: "<<raiz;
            
            break;
            case 2:
            
            int i2=0;
    float resultado2, ang1, ang2;
    cout<<"Ingrese dos angulos de un triangulo";
    do{
        cin>>ang1;
    cin>>ang2;
    
    resultado2=180-ang1-ang2;
    if((ang1+ang2+resultado2)==180){
        cout<<"El angulo faltante es:"<<resultado2;
        i2=2;
    }else{
        cout<<"los angulos que ingreso no cumplen los parametro intente de nuevo";
        i2=0;
    }
    }while(i2<2);
            
            break;
            case 3:
            
            int num, factorial=1;
    cout<<"ingrese un numero";
    cin>>num;
    cout<<"el facotial de "<<num<<" es ";
    for(int i=0;i<=(num+1);i++){
        factorial=factorial*num--;
        cout<<"factorial= "<<factorial<<"*"<<num<<endl;
    }
    cout<<factorial;
            
            break;
            case 4:
            
            float vuelto, dinero, gastado,dinerof;
    cout<<"ingrese lo que se gasto; "<<endl;
    cin>>gastado;
    cout<<"ingrese el dinero que resivio"<<endl;
    cin>>dinero;
    do{
        if(gastado>dinero){
            cout<<"hace falta : Q"<<gastado-dinero<<endl<<"por favor ingrese el dinero que falta";
            cin>>dinerof;
            
        
        
    }else{
        cout<<"el vuelto es: Q"<<dinero-gastado;
    }
    dinero=dinero+dinerof;
    }while(dinero<gastado);
            
            break;
            case 5:
            i=5;
            break;
            default:
            i=0;
            break;
        }
        
    }while(i<5);
}