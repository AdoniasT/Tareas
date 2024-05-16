/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <iostream>
using namespace std;


int main()
{
    int arreglo[10];
    cout<<"ingrese los datos de array\n";
    for (int i=9; i>-1;i--){
        cin>>arreglo[i];
    }
    
    cout<<"\nEl orden del arreglo es\n";
    for(int j=0; j<10;j++){
        cout<< "el num: " <<arreglo[j] <<" esta en la poecicion: "<< j<<"\n";
    }
    
    
    cout<<"Clonar un array \n";
    int arregloclonado[10];
    for(int i=0;i<10;i++){
        arregloclonado[i]=arreglo[i];
        cout<<"El arreglo clonado es: "<<arregloclonado[i]<<"\n";
    }
    
    cout<<"convertir nums neg a pos\n";
    for(int i=0 ; i<10;i++){
        
        if(arreglo[i]<0){
            arreglo[i]=arreglo[i]+(arreglo[i]*-2);
        }else{
            arreglo[i];
        }
        cout<<"el arrglo es pos: "<<arreglo[i]<<"\n";
    }
    
    double arreglodec[5];
    int arregloent[5];
    
    cout<<"ingrese numeros con decimales\n";
    for(int i=0; i<5;i++){
        cin>>arreglodec[i];
    }
    
    for(int i=0;i<5;i++){
        arregloent[i]=arreglodec[i];
        cout<<"\nel arreglo entero es"<<arregloent[i]<<"\n";
    }
    
    for(int i=0;i<5;i++){
        arreglodec[i]=arreglodec[i]-arregloent[i];
        cout<<"\nel arreglo con decimales es"<<arreglodec[i]<<"\n";
    }
    return 0;
}