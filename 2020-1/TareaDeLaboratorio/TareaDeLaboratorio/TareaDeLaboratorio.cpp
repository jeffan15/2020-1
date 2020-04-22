// TareaDeLaboratorio.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "ejercicio 2.6\n";
    int c;
    cin >> c;
    if (c < 7) 
        cout << "c es menor que 7\n";
    if (c != 7)
        cout << "c es igual o mayor que 7\n";
    cout << "ejercicio 2.17\n";
    cout << "VX " <<"YZ\n";
    cout << "V" << "X "<<"Y"<<"Z\n";
    cout << "VX YZ\n";
    cout << "ejercicio 2.18\n";
    int a;
    int b;
    cout << "Porfavor escribe dos numeros enteros:\n";
    cin >> a;
    cin >> b;
    if (a == b)
    {
        cout <<"Los numeros son iguales\n";
    }
    else
    {
        if (a > b) {
            cout << a << " " << "es el mayor\n";
        }
        else {
            cout << b << " " << "es el mayor\n";
        }
    }
    cout << "ejercicio 2.19\n";
    int first;
    int second;
    int third;
    cout << "Escriba tres numeros enteros porfavor\n";
    cin >> first;
    cin >> second;
    cin >> third;
    int suma;
    int promedio;
    int producto;
    suma = first + second + third;
    promedio = (first + second + third)/3;
    producto = first * second * third;
    cout << "la suma es: " << suma << endl;
    cout << "el promedio es: " << promedio << endl;
    cout << "el producto es: " << producto << endl;
    if (first > second && first > third) {
        cout << first << " " << "es el mayor" << endl;
        if (second > third)
            cout << third << " " << "es el menor" << endl;
        else
            cout << second << " " << "es el menor" << endl;
    }
    else {
        if (second > third) {
            cout << second << " " << "es el mayor" << endl;
            if (first > third)
                cout << third << " " << "es el menor" << endl;
            else
                cout << first << " " << "es el menor" << endl;
        }
        else {
            cout << third << " " << "es el mayor" << endl;
            if (second > third)
                cout << third << " " << "es el menor" << endl;
            else
                cout << second << " " << "es el menor" << endl;
        }
    }
    cout << "ejercicio 2.27\n";
    char le;
    cout << "Escriba un caracter ubicado en su teclado:\n";
    cin >> le;
    cout << "su numero en la tabla ASCII es: ";
    cout << static_cast<int>(le) << endl;
    cout << "ejercicio 2.28\n";
    int num;
    cout << "escribe un numero de 4 digitos:\n";
    cin >> num;
    int mill = num / 1000;
    int cent = (num - (mill * 1000)) / 100;
    int dec = (num - (mill * 1000 + cent * 100)) / 10;
    int uni = (num - (mill * 1000 + cent * 100 + dec * 10));
    cout << uni << "  " << dec << "  " << cent << "  " << mill << endl;
    cout << "ejercicio 2.29\n";
    int x = 0;
    int y = 1;
    int z = 2;
    int w = 3;
    int u = 4;
    int a1 = 6 * (x * x);
    int a2 = 6 * (y * y);
    int a3 = 6 * (z * z);
    int a4 = 6 * (w * w);
    int a5 = 6 * (u * u);
    int v1 = x * x * x;
    int v2 = y * y * y;
    int v3 = z * z * z;
    int v4 = w * w * w;
    int v5 = u * u * u;
    cout << "medidas del cubo (cm)" << "  " << "area del cubo(cm^2)" << "  " << "volumen del cubo(cm^3)" <<endl;
    cout << x << "                      " << a1 << "                    " << v1 << endl;
    cout << y << "                      " << a2 << "                    " << v2 << endl;
    cout << z << "                      " << a3 << "                   " << v3 << endl;
    cout << w << "                      " << a4 << "                   " << v4 << endl;
    cout << u << "                      " << a5 << "                   " << v5 << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
