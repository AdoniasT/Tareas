#include <iostream>
#include <cstdlib>

using namespace std;

string unir (string palabra1, string palabra2)
{
    
    cout<<palabra1<<" "+palabra2;
}
int main(){
    string pal1,pal2,res;
    cin>>pal1;
    cin>>pal2;
    res= unir (pal1,pal2);
    cout<<res;
}