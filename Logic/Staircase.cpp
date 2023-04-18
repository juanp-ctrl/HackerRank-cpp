#include <bits/stdc++.h>
#define fore(x,init,limit) for(int x=init; x<limit; x++);
using namespace std;
typedef long long ll;

int main(){
    int n{};
    cin >> n;
    for(int i=1; i<=n; i++){
        cout << setw(n-i+1);
        for(int j=1; j<=i; j++){
            cout << "#";
        }
        cout << "\n";
    }
    return 0;
}
