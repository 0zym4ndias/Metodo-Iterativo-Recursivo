//
//
//  
//  Actividad 2 de la Semana Uno Fibonacci
//  Estudiante: Roberto Abraham Pérez Iga
//  Fecha 17 Aug 2021
// 
// 
// 
/*  
    -----------------------------------------------------------------------------------------------------
    Realizar una aplicación que calcule el número fibonacci de una variable n que será leida de teclado,
    en donde n será un entero que el usuario dará, el fibonacci se calcula sumando los dos números 
    fibonacci anteriores, por lo tanto los primeros dos no son calculados.
    F(1) = 1
    F(2) = 1
    F(3) = 2
    F(4) = 3
    F(5) = 5
    F(6) = 8
    -----------------------------------------------------------------------------------------------------
*/  

#include <iostream>

using namespace std;

//  Complejidad: 0(n)
//  Esta funcion es como un acumulador 
int fibIterativo(int n){ 
    int ant = 0, act = 1, suma = n; //  Integer anterior = 0, actual = 1, suma = n
    for (int i=2; i<=n; i++){ //  Desde el numero i = 2 mientras sea menor o igual a n i++
        suma = ant + act; //  Suma del numero anterior + actual
        ant = act; //  El numero actual pasa a ser el anterior 
        act = suma; //  La suma pasa a ser el numero actual 
    }
    return suma;
}

//  Complejidad: 0(2^)
int fibRecursivo(int n){
    if (n <= 1){
        return n;
    }
    /* Esto es lo mismo que lo de arriba
    if (n == 0){
        
        return 0;
    }
    if (n == 1){
        return 1;
    }
    */
    return fibRecursivo(n-1) + fibRecursivo(n-2); 
}

int main(){
    int n;
    cin >> n;
    cout << "Fibonacci Iterativo: " << fibIterativo(n) << endl;
    cout << "Fibonacci Recursivo: " << fibRecursivo(n) << endl;
}