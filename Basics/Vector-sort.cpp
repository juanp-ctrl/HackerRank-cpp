#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comparar(int a, int b){
    return a > b;
}

int main(){
    int n{}, num{};
    cin >> n;
    vector<int> numeros;
    while(n--){
        cin >> num;
        numeros.push_back(num);
    }

    //De la libreria algorithm
    sort(numeros.begin(), numeros.end(), comparar);

    for(auto i : numeros){
        cout << i << " ";
    }
    return 0;
}