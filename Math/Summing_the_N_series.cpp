#include <bits/stdc++.h>
#define fore(x,init,limit) for(int x=init; x<limit; x++);
using namespace std;
typedef long long ll;

/*
 * Complete the 'summingSeries' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts LONG_INTEGER n as parameter.
 */

ll summingSeries(ll n) {
    ll res{}, mod{1000000007};
    res = ((n%mod) * (n%mod))%mod;
    return res;
}

int main(){
    int t{};
    ll n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << summingSeries(n) << endl;
    }
    return 0;
}
