#include <bits/stdc++.h>
#define fore(x,init,limit) for(int x=init; x<limit; x++)
using namespace std;
typedef long long ll;

int romanToInt(string s){
    int res{};
    map<char, int> romansNumbers = {{'I',1}, {'V',5}, {'X',10}, {'L',50}, {'C',100}, {'D',500}, {'M',1000}};
    for(int i=0; i<s.length(); i++){
        if(i<s.length()-1){
            if(s[i] == 'I'){
                if(s[i+1] == 'V'){
                    res += 4;
                    i++;
                    continue;
                }
                else if(s[i+1] == 'X'){
                    res += 9;
                    i++;
                    continue;
                }
                if(i+1 == s.length()) break;
            }
            else if(s[i] == 'X'){
                if(s[i+1] == 'L'){
                    res += 40;
                    i++;
                    continue;
                }
                else if(s[i+1] == 'C'){
                    res += 90;
                    i++;
                    continue;
                }
                if(i+1 == s.length()) break;
            }
            else if(s[i] == 'C'){
                if(s[i+1] == 'D'){
                    res += 400;
                    i++;
                    continue;
                }
                else if(s[i+1] == 'M'){
                    res += 900;
                    i++;
                    continue;
                }
                if(i+1 == s.length()) break;
            }
        }
        auto it = romansNumbers.find(s[i]);
        if(it != romansNumbers.end()){
            res += it->second;
        }
    }
    return res;
}

int main(){
    string RomanNumber{};
    cin >> RomanNumber;
    cout << romanToInt(RomanNumber) << endl;
    return 0;
}
