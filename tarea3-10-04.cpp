#include <iostream>
#include <cstdlib>

using namespace std;

void multiplos (int nume1)
{
    for(int i = 1; i<=nume1;i++){
        if(nume1%i==0){
            cout<< i<<" ,";
            
        }
    } 
    
}
void factorial (double nume1)
{
    int total;
    cout << "";
    for (int i = 1; i <= nume1; ++i) {
        total=total*i;
    }
    cout << "el factoria !"<<nume1<<" es "<<total;
}
void fibonacci (double nume1)
{
    int t1, siguienteTermino, t2=1;
    for (int i = 1; i <= nume1; ++i) {
        cout << t1 << " ";

        siguienteTermino = t1 + t2;
        t1 = t2;
        t2 = siguienteTermino;
    }
}

int main(){
    int num1, num3; float res;
    int num2;
    cout<<"ingrese un numero";
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