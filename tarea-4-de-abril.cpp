/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int control=1,control2=1,control3,num1,num2;
    do{
        cout<<"Bienvenido al menu principal de la culculadora \nDeseas qudarte en el menú? \n 1)Quedame en el Menú \n 2)No quiero quedarme \n 3)Quiero ir a la calculadora\n";
        cin>>control;
        if(control==1 ){
            cout<< "Exelente!!! Sigamos en el menú\n";
            control=1;
        }else if(control==3){
         cout <<"ingrese dos numeros para calcular\n";
         cin>>num1;
         cout<<"\n";
         cin>>num2;
         do{
         cout<<"\nQue acción desea realizar : \n 1)Suma \n 2)resta \n 3)multiplicación \n 4)division\n 5)volver atras\n" ;
         cin>>control2;
         if(control2==1){
             cout<<"La suma es: \n"<<num1+num2<<"\n";
              cout<<"1)volver atras \n 2)Cerrar el programa\n";
             cin>>control3;
             switch(control3){
                 case 1: control2=1;
                 break;
                 case 2: cout<<"Hasta pronto";
                 control2=6;
                 control=5;
                 break;
                 default: cout<<"La opcion no es valida, intente con otra operacion";
                 control=3;
                 control2=1;
                 break;
             }
         }else if(control2==2){
             cout<<"La resta es: \n"<<num1-num2<<"\n";
              cout<<"1)volver atras \n 2)Cerrar el programa\n";
             cin>>control3;
             switch(control3){
                 case 1: control2=1;
                 break;
                 case 2: cout<<"Hasta pronto";
                 control2=6;
                 control=5;
                 break;
                 default: cout<<"La opcion no es valida, intente con otra operacion";
                 control=3;
                 control2=1;
                 break;
             }
         }else if(control2==3){
             cout<<"La multiplicacion es: \n"<<num1*num2<<"\n";
              cout<<"1)volver atras \n 2)Cerrar el programa\n";
             cin>>control3;
             switch(control3){
                 case 1: control2=1;
                 break;
                 case 2: cout<<"Hasta pronto";
                 control2=6;
                 control=5;
                 break;
                 default: cout<<"La opcion no es valida, intente con otra operacion";
                 control=3;
                 control2=1;
                 break;
             }
         }else if(control2==4){
             cout<<"La division es: \n"<<num1/num2<<"\n";
              cout<<"1)volver atras \n 2)Cerrar el programa\n";
             cin>>control3;
             switch(control3){
                 case 1: control2=1;
                 break;
                 case 2: cout<<"Hasta pronto";
                 control2=6;
                 control=5;
                 break;
                 default: cout<<"La opcion no es valida, intente con otra operacion";
                 control=3;
                 control2=1;
                 break;
             }
         }else if(control2=5){
             control=1;
         }else{
             cout<<"ni una de las opciones es correcta vuelta a intentarlo ";
             control=2;
         }
             
         }while(control2==1);
        }else if(control==2){
            cout<<"hasta pronto";
            control=5;
        }else{
            cout<<"la opcion no esta disponible, escoga una opcion que aparece en pantalla\n";
            control=1;
        }
        
    }while(control==1);
}

