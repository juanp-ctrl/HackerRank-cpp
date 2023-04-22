#include <bits/stdc++.h>
#define fore(x,init,limit) for(int x=init; x<limit; x++)
using namespace std;
typedef long long ll;

/*
 * Complete the 'restaurant' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER l
 *  2. INTEGER b
 */

int MCD(int a, int b){
    if(b == 0) return a;
    return MCD(b, a%b);
}

int restaurant(int l, int b) {
    if(l == b){
        return 1;
    }
    else{
        int mcd = MCD(l,b);
        int res = (l*b)/(mcd*mcd);
        return res;
    }
}


int main(){
    int t{}, l{}, b{};
    cin >> t;
    while(t--){
        cin >> l >> b;
        cout << restaurant(l,b) << endl;
    }
    return 0;
}
