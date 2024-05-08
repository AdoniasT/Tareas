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
cout << "Hola hagamos diferentes arreglos"<<endl;
    int longi[5];
    int arreglo1[longi[0]];
    int arreglo2[longi[1]];
    int arreglo3[longi[2]];
    int arreglo4[longi[3]];
    int arreglo5[longi[4]];

    for(int j=0; j<5;j++){
        cout<<"ingrese la longitud del arreglo "<<j<<endl<<endl;
        cin>>longi[j];
        if(j==0){
            for(int i=0;i<longi[j];i++){
            cout<<"primer arreglo "<<endl;
            cout << "ingrese un numero "<< i << endl;
            cin>>arreglo1[i];
            }
        }else if(j==1){
        for(int i=0;i<longi[j];i++){
            cout<<"segundo arreglo "<<endl;
            cout << "ingrese un numero "<< i << endl;
            cin>>arreglo2[i];
            }
        }else if(j==2){
        for(int i=0;i<longi[j];i++){
            cout<<"tercer arreglo "<<endl;
            cout << "ingrese un numero "<< i << endl;
            cin>>arreglo3[i];
            }
        }else if(j==3){
        for(int i=0;i<longi[j];i++){
            cout<<"cuarto arreglo "<<endl;
            cout << "ingrese un numero "<< i << endl;
            cin>>arreglo4[i];
            }
        }else if(j==4){
        for(int i=0;i<longi[j];i++){
            cout<<"quinto arreglo "<<endl;
            cout << "ingrese un numero "<< i << endl;
            cin>>arreglo5[i];
            }
        }else{
            cout<<"Error";
        }
    }
    
}
    
    
    
    
    
    
    
