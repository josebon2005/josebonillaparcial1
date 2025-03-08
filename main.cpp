#include <iostream>
using namespace std;
int main(){
    int n, suma = 0;
    cout << "\nIngrese 10 numeros enteros positivos: ";
    cin >> n;
    cin >> n;
    cin >> n;
    cin >> n;
    cin >> n;
    cin >> n;
    cin >> n;
    cin >> n;
    cin >> n;
    cin >> n;
    for (int i = 2; i <= n; i += 2) {
        suma += i;
    }
    cout << "La suma de todos los numeros pares  es: " << suma << endl;



    return 0;
}