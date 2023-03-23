#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n{}, num{}, num2{};
    cin >> n;
    vector<int> numeros;
    while (n--){
        cin >> num;
        numeros.push_back(num);
    }
    cin >> num;
    numeros.erase(numeros.begin()+(num-1));
    
    cin >> num >> num2;
    numeros.erase(numeros.begin()+(num-1), numeros.begin()+(num2-1));

    cout << numeros.size() << endl;
    for (auto i : numeros){
        cout << i << " ";
    }

    return 0;
}
