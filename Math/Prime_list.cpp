#include <bits/stdc++.h>

using namespace std;

//Haciendo uso del algoritmo de la criba de Eratóstenes
bool esPrimo(int n) {
    // Paso 1
    if (n <= 1) {
        return false;
    }
    
    // Paso 2
    if (n == 2) {
        return true;
    }
    
    // Paso 3
    if (n % 2 == 0) {
        return false;
    }
    
    // Paso 4
    int limite = sqrt(n);
    for (int i = 3; i <= limite; i += 2) {
        if (n % i == 0) {   //Si es divisible por mas que 1 y por si mismo eso quiere decir que no es primo
            return false;
        }
    }
    
    return true;    //Si luego de verificar todos los casos hasta la raiz del numero no fue divisible quiere decir que si es primo
}

int primeFactors(int n){
    if(n > 1){
        vector<int> primes;
        for(long i=0; i<=n; i++){
            if(esPrimo(i)){
                primes.push_back(i);
            }
        }
        set<int> factors;
        int ind{};
        while(primes[ind] <= n){
            if(n%primes[ind] == 0){
                factors.insert(primes[ind]);
                n /= primes[ind];
            }
            else{
                ind++;
            }
        }
        return factors.size();
    }
    else{
        return 0;
    }
}

int main(){
    int n;
    cout << "Ingrese un número: ";
    cin >> n;
    for(int i=0; i<=n; i++){
        if(esPrimo(i)){
            cout << i << " ";
        }
    }
    return 0;
}