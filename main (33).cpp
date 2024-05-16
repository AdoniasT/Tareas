#include <iostream>
#include <string>

using namespace std;

string cifrar(const string& cadena) {
	string resultado = cadena;
	int longitud = resultado.length(); //tamanio de la frase en numero
	
	for (int i = 0; i < longitud; i++){
		char caracter = resultado[i];
		if(caracter == 'i'){
			resultado[i] = '1';
		}
		if(caracter == 'e') {
			resultado[i] = '3';
		}
		if(caracter=='a'){
		    resultado[i]='4';
		}
		if(caracter=='o'){
		    resultado[i]='0';
		}
		if(caracter=='u'){
		    resultado[i]='*';
		    
		}
	}
	
	return resultado;
}

int main(int argc, char *argv[]) {
    string frase, fraseCifrada;
    int pass,num, passcif;
    int opc,j;
    
    
    
    do{
        cout << "Ingrese una frase para cifrarla: ";
	    getline(cin, frase);
	    cout << "Ingrese una contraseña numerica: "<<endl;
    	cin>>pass;
    	cout<<"ingrese un numero para ayudar a cifrar"<<endl;
    	cin>>num;
        cout<<"escoja una opcion, 1)ejercicio 1   29 ejercicio 2"<<endl<<">";
        cin>>opc;
          switch(opc){
        case 1:
	        fraseCifrada = cifrar(frase);
	        cout << endl << "Frase cifrada: " << fraseCifrada<<endl;
	        
        break;
        case 2:
        	pass=pass+num;
        	passcif=pass*num;
        	cout<<"tu contraseña cifrada es: "<<passcif<<endl;
        break;
    }
    }while( j<3 );
    
}