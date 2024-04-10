#include <iostream>
#include <cstdlib>

using namespace std;

double sumar (double nume1, double nume2, double nume3)
{
    double suma;
    suma=nume1+nume2+nume3;
    cout<<suma;
}
int main(){
    double num1, num2, num3; float res;
    cout<<"ingrese tres numero";
    cin>>num1;
    cin>>num2;
    cin>>num3;
    res= sumar(num1, num2, num3);
    cout<<res;
}