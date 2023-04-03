#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int Q{}, y{}, x{};
    cin >> Q;
    vector<vector<int>> queries;
    set<int> s;
    for(int i=0; i<Q; i++){
        cin >> y >> x;
        queries.push_back(vector<int>());
        queries[i].push_back(y);
        queries[i].push_back(x);
    }
    for(auto i : queries){
        y = i[0];
        x = i[1];
        if(y == 1){
            s.insert(x);
        }
        else if(y == 2){
            s.erase(x);
        }
        else if(y == 3){
            set<int>::iterator itr;
            itr = s.find(x);
            if(itr != s.end()){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
    }
    return 0;
}

