#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv)
{ 
    float num = 0;
    float raiz = 0;
    
    cout<<"Ingrese el numero para sacar la raiz cuadrada: ";
    cin>>num;
    cout<<endl;
    
    raiz = sqrt(num);
    
    cout<<"La raiz cuadrada de " << num <<" es: " << raiz <<endl;
	
	return 0;
}
