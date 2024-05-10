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
   cout<<"Ingrese 5 número para sacar el promedio";
   int nums[10],promedio;
   string msm="mala suerte";
   for(int i=0; i<5;i++){
       cin>>nums[i];
       promedio=promedio+nums[i];
   }
   cout<<"el promedio es: "<<promedio/5;
}  