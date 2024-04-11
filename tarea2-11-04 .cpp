#include <iostream>
using namespace std;
#include <cstdlib>
//lugar para variables
int opcion,numero;
string msm;
char letra;

void opcionuno(){
    cout<<"su numero es:"<<numero<<endl;
    
}
void opciondos(){
    cout<<"su palabra es: " <<msm<<endl;
}
void opciontres(){
    cout<<"la letra es: "<<letra<<endl;
}

int main()
{
    
    
    do{
       
        switch (opcion){
            case 2: opciondos();
            cout<<"ingrese una palabra"<<endl;
            cin>>msm;
            opciondos();
            cout<<endl<<"Que desea hacer?"<<endl<<"1)continuar"<<endl<<"2)cerrar"<<endl;
            cin>>opcion;
            if(opcion==1){
                opcion=3;
            }else if(opcion==2){
                opcion=6;
            }
            break;
            case 3: opciontres();
            cout<<"ingrese una letra"<<endl;
            cin>>letra;
            opciontres();
            cout<<endl<<"el programa se acabo Que desea hacer?"<<endl<<"1)volver a intentar"<<endl<<"2)cerrar"<<endl;
            cin>>opcion;
            if(opcion==1){
                opcion=0;
            }else if(opcion==2){
                opcion=6;
            }
            break;


            default: cout<<"ingrese un numero"<<endl;
            cin>>numero;
            opcionuno();
            cout<<endl<<"Que desea hacer?"<<endl<<"1)continuar"<<endl<<"2)cerrar"<<endl;
            cin>>opcion;
            if(opcion==1){
                opcion=2;
            }else if(opcion==2){
                opcion=6;
            }
            break;
        }
    }while(opcion<=3);
}