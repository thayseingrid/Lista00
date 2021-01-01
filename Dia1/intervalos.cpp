#include <iostream>

using namespace std;

int main() {
    int n;
    int intervalo1 = 0;
    int intervalo3 = 0;
    int intervalo2 = 0;
    int intervalo4 = 0;
    
    cout << "Entre com valores inteiros (Ctrl+d para encerrar): " << endl;
    while (cin >> n) {
        if (n >= 0 || n < 25) {
            intervalo1 = intervalo1 + 1;
        }
        if (n >=25 || n < 50) {
            intervalo2 = intervalo2 + 1;
        }
        if (n >= 50 || n < 75) {
            intervalo3 = intervalo3 + 1;

        }
        if (n >= 75 || n <= 100) {
            intervalo4 = intervalo4 + 1;
        }
    }
        cout << intervalo1 << " " 
             << intervalo2 << " " 
             << intervalo3 << " "
             << intervalo4 << " ";
} 
