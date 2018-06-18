#include <iostream>

using namespace std;

int fibonacci(int n){
    if(n == 0 || n == 1){
        return n;
    }else{
        return fibonacci(n-2) + fibonacci(n-1);
    }
}


int main(){
    int n;
    cout << "Sucesion Fibonnaci" << endl;
    cout << "Introduce un numero mayor a 0 (0 si es que quieres terminar): ";
    cin >> n;
    while(n>1){
        cout << "El resultado de la sucesion fibonnaci es " << fibonacci(n) <<endl;
        cout << "Introduce un numero mayor a 0 (0 si es que quieres terminar): ";
        cin >> n;
    }
    return 0;
}