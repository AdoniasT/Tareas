#include <iostream>
#include <cstdlib>

using namespace std;

void multiplos (int nume1)
{
    for(int i; i<=nume1;i++){
        int res=1;
        res=res*i;
        
        if(res==nume1){
            cout<<res;
            
        }else{
            cout<<res;
        }
    }
}
void factorial (double nume1)
{
    cout<<nume1+1;
}
void fibonacci (double nume1)
{
    int numero, sumas=1, respuesta=0;
    cin>>numero;
    for (int i=0; i<numero;i++){
        respuesta=i+sumas;
        
        cout<<i<<"+"<<sumas <<"="<<respuesta<<"\n";
        sumas++;
    }
    cout<< respuesta;
}

int main(){
    int num1, num3; float res;
    int num2;
    cout<<"ingrese tres numero";
    cin>>num1;
    cout<<"\n escoga una opcion \n 1)multiplos \n 2) factorial \n 3)fibonacci\n";
    cin>>num2;
    switch (num2){
        case 1: multiplos(num1);
        break;
        case 2: factorial(num1);
        break;
        case 3: fibonacci(num1);
        break;
    }
    
    
    
    
}