#include <iostream>

using namespace std;

int add(int n) {
    if(n == 1) {
        return n;
    }
    return n + add(n - 1);
}

int fac(int n) {
    if(n == 1) {
        return n;
    }
    return n * fac(n - 1);
}

int fibo(int n) {
    if(n <= 1) { // n == 1 || n == 0
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}

int main() {
    int value = 5;
    cout << "Funciones Recursivas" << endl << endl;
    cout << "La suma de [" << value << "]: " << add(value) << endl;
    cout << "El factorial de [" << value << "]: " << fac(value) << endl;
    cout << "El fibonnacci de [" << value << "]: " << fibo(value) << endl;
    return 0;
}