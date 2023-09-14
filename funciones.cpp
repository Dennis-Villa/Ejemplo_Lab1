#include "funciones.h"
#include <iostream>

using namespace std;

int mayorDe3 (int num1, int num2, int num3){
    if( num1 >= num2 && num1 >= num3 )
        return num1;
    else if( num2 >= num3 )
        return num2;
    else
        return num3;
}

void mensaje(int num){
    cout<<"El mayor de los numeros es "<<num<<endl;
}
