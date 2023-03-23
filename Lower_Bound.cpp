#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N{}, Q{}, num{};
    cin >> N;
    vector<int> numeros;
    while(N--){
        cin >> num;
        numeros.push_back(num); //El arreglo ya esta ordenado desde la entrada
    }

    cin >> Q;
    vector<int> queries;
    vector<int>::iterator low;
    while(Q--){
        cin >> num;
        queries.push_back(num);
    }
    for(auto i : queries){
        low = lower_bound(numeros.begin(), numeros.end(), i);
        if(i == *low){
            cout << "Yes " << (low-numeros.begin())+1 << endl;
        }
        else{
            cout << "No " << (low-numeros.begin())+1 << endl;
        }
    }
    
    return 0;
}
