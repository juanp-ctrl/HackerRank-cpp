#include <iostream>

using namespace std;

int main() {

    int numero{};
    // cin >> numero;
    cout << "hola mundo! mi numero es " << numero << endl;

    int arrayN[10];
    for (size_t i{}; i<10; i++){
        arrayN[i] = i;
    }

    for (auto values : arrayN){
        cout << values;
    }
    cout << endl;

    int matriz[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    for (auto &fila : matriz) {
        for (auto &elemento : fila) {
            cout << elemento << " ";
        }
        cout << endl;
    }

    return 0;
}