#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
    int num1, num2, num3, mayor;
    cout << "Escriba 3 numeros enteros" << endl;
    cin>>num1>>num2>>num3;

    mayor = mayorDe3(num1, num2, num3);

    mensaje(mayor);
    return 0;
}
