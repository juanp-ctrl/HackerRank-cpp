#include <bits/stdc++.h>
#include <cmath>

const double e = 2.71828182845904523536;
const double pi = 3.14159265358979323846;

using namespace std;

/*
 * Complete the 'handshake' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */
 
int factorial(int n){
    int fact{1};
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int handshake(int n) {
    int res = 1;
    for (int i = 1; i <= 2; i++) {
        res *= n - 2 + i;
        res /= i;
    }
    return res;
}


int main()
{
    int t;
    cin >> t;
    for (int t_itr = 0; t_itr < t; t_itr++) {

        int n;
        cin >> n;

        int result = handshake(n);

        cout << result << "\n";
    }

    return 0;
}

