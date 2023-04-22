#include <bits/stdc++.h>
#define fore(x,init,limit) for(int x=init; x<limit; x++)
using namespace std;
typedef long long ll;

int posZigZag(int n, int k){
    if(k >= (n-1)/2){
        return 2*(n-1-k);
    }
    else{
        return (2*k)+1;
    }
}

int main(){
    int t{}, n{}, k{};
    cin >> t;
    while(t--){
        cin >> n >> k;
        cout << posZigZag(n,k) << endl;
    }
    return 0;
}
