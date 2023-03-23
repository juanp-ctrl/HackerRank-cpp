#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int Q{}, type{}, Y{};
    string name{};
    vector<int> resp;
    map<string, int> m;
    cin >> Q;
    while(Q--){
        cin >> type >> name;
        if(type == 1){
            cin >> Y;
            auto result =  m.insert(make_pair(name, Y));
            if(result.second == false){
                Y += result.first->second;
                m[name] = Y;
            }
        }
        else if(type == 2){
            m.erase(name);
        }
        else if(type == 3){
            map<string,int>::iterator itr;
            itr = m.find(name);
            if(itr != m.end()){
                resp.push_back(itr->second);
            }
            else{
                resp.push_back(0);
            }
        }
    }
    for(auto i : resp){
        cout << i << endl;
    }
    return 0;
}



