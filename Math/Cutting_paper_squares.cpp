#include <bits/stdc++.h>
#define fore(x,init,limit) for(int x=init; x<limit; x++);
using namespace std;
typedef long long ll;

ll solve(int n, int m) {
    ll res = (static_cast<ll>(n)*static_cast<ll>(m))-1;
    return res;
}


int main(){
    int n{}, m{};
    cin >> n >> m;
    ll res = solve(n,m);
    cout << res << endl;
    return 0;
}
