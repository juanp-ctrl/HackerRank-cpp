#include <bits/stdc++.h>

using namespace std;
 
int main()
{
    int n;
    cin >> n;
    string bits;

    while(n){
        if(n&1){
            bits+="1";
        }
        else{
            bits+="0";
        }
        n>>=1;
    }
    
    reverse(bits.begin(), bits.end());
    for(int i=0; i<bits.size(); i++){
        cout << bits[i];    
    }
    cout << endl;
    return 0;
}