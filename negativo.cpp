#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3, n4, n5;
    int qtd = 0;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;
    cin >> n5;
    
    if (n1 < 0) {
        qtd = qtd + 1;
    } 

    if (n2 < 0) {
        qtd = qtd + 1;
    }
    
    if (n3 < 0) { 
        qtd = qtd + 1;
    } 

    if (n4 < 0) {
        qtd = qtd + 1;
    } 

    if (n5 < 0) {
        qtd = qtd + 1;
    }
    cout << qtd << endl;
}
