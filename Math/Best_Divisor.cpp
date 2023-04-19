#include <bits/stdc++.h>
#define fore(x,init,limit) for(int x=init; x<limit; x++)
using namespace std;
typedef long long ll;

int main(){
    int n{}, res{}, sumRes{}, greater{}, lenDig{};
    cin >> n;

    for(int i=n; i>0; i--){
        if(n%i == 0){
            sumRes = 0;
            string str = to_string(i);
            for(char c : str){
                sumRes += c - '0';
            }

            if(sumRes > greater){
                greater = sumRes;
                lenDig = str.length();
                res = i;
            }
            else if(sumRes == greater){
                if(str.length() < lenDig){
                    res = i;
                }
            }
        }
    }
    cout << res << endl;   

    return 0;
}
