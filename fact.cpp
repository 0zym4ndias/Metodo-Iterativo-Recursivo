//
//
//  
//  Actividad 2 de la Semana Uno
//  Estudiante: Roberto Abraham Pérez Iga
//  Vamos a hacer una funcion que me calcule tanto la iterativa como la recursiva
//  
//
//

#include <iostream>

using namespace std;

//  Funcion del factor iterativo 
//  Complejidad: es de orden lineal 0(n)
long long factIterativo(int n){
    //  Se calcula el factorial iterativo 
    long long acum = 1;
    for (int i=1; i<=n; i++){ 
        acum *= i; //  acum = acum * i --> mientras que sea menor a n 
    }
    return acum;
}

//  Complejidad: es de orden lineal 0(n)
//  Funcion del factor recursivo 
long long factRecursivo(int n){
    //  Caso base: es en que no se vuelve a llamar la misma funcion, aqui es donde se termina la recursión.
    //  Importante!!! Una función recursiva debe tener al menos un caso base. 
    if (n == 0){ //  Caso base
        return 1;
    }
    return n*factRecursivo(n-1); //  Se calcula el factorial recursivo 
}

int main(){
    int n;
    cin >> n;
    cout << "Factorial Iterativo: " << factIterativo(n) << endl; 
    cout << "Factorial Recursivo: " << factRecursivo(n) << endl;
}