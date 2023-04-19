#include <bits/stdc++.h>
#define fore(x,init,limit) for(int x=init; x<limit; x++)
using namespace std;
typedef long long ll;

vector<long double> movingTiles(int l, int s1, int s2, vector<ll> queries) {
    vector<long double> times;
    long double t{};
    for(ll i : queries){
        t = ((l - sqrt(i))/(abs(s2-s1)))*sqrt(2);
        times.push_back(t);
    }
    return times;
}

int main(){
    int L{}, s1{}, s2{};
    int q{};
    cin >> L >> s1 >> s2 >> q;
    vector<ll> queries(q);
    fore(i,0,q){
        cin >> queries[i];
    }

    vector<long double> res = movingTiles(L,s1,s2,queries);

    for(long double i : res){
        cout << fixed << setprecision(20) << i << endl;
    }

    return 0;
}
