#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'primeCount' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts LONG_INTEGER n as parameter.
 */

typedef long long ll;

bool esPrimo(ll n) {
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
    ll limite = sqrt(n);
    for (int i = 3; i <= limite; i += 2) {
        if (n % i == 0) {   //Si es divisible por mas que 1 y por si mismo eso quiere decir que no es primo
            return false;
        }
    }
    
    return true;    //Si luego de verificar todos los casos hasta la raiz del numero no fue divisible quiere decir que si es primo
}

vector<ll> primeNumbers(int n){
    vector<ll> primes;
    for(int i=0; i<=n; i++){
        if(esPrimo(i)){
            primes.push_back(i);
        }
    }
    return primes;
}

vector<ll> primes = primeNumbers(47);

int primeCount(ll n) {
    ll res{1};
    int count{};
    for(ll j : primes){
        res *= j;
        if(res <= n){
            count++;
        }    
    }
    return count;   
}


int main(){
    ll t{}, n{};
    cin >> t;
    while(t--){
        cin >> n;
        cout << primeCount(n) << endl;
    }
    return 0;
}