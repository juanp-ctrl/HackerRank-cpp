#include <bits/stdc++.h>
#define fore(x,init,limit) for(int x=init; x<limit; x++)
using namespace std;
typedef long long ll;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string hr = s.substr(0,2);
    string moment = s.substr(8,2);
    string newTime;
    int newHr = stoi(hr);
    if(moment == "PM"){
        if(newHr < 12){
            newHr += 12;
            hr = to_string(newHr);
            newTime += hr;
        }
        else{
            newTime += hr;
        }
    }
    if(moment == "AM"){
        if(newHr == 12){
            newTime += "00";
        }
        else{
            newTime += hr;
        }
    }
    newTime += s.substr(2,6);
    return newTime;
}

int main(){
    string time;
    cin >> time;

    cout << timeConversion(time) << endl;
    
    return 0;
}
