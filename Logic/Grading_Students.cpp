#include <bits/stdc++.h>
#define fore(x,init,limit) for(int x=init; x<limit; x++)
using namespace std;
typedef long long ll;

/*
 * Complete the 'gradingStudents' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY grades as parameter.
 */

vector<int> gradingStudents(vector<int> grades) {
    for(int i=0; i<grades.size(); i++){
        if(grades[i] >= 38){
            string strGrade = to_string(grades[i]);
            int numGrade = strGrade[1] - '0';
            if(numGrade > 5){
                if((10 - numGrade) < 3){
                    grades[i] += (10-numGrade);
                }
            }
            else if(numGrade > 0 && numGrade < 5){
                if((5 - numGrade) < 3){
                    grades[i] += (5-numGrade);
                }
            }
        }
    }
    return grades;
}

vector<int> gradingStudentsV2(vector<int> grades) {
    for(int i=0; i<grades.size(); i++){
        if(grades[i] >= 38){
            if(grades[i]%5 >= 3){
                grades[i] += (5-(grades[i]%5));
            }
        }
    }
    return grades;
}

int main(){
    int n{};
    cin >> n;
    vector<int> grades(n);
    fore(i,0,n){
        cin >> grades[i];
    }
    vector<int> newGrades = gradingStudentsV2(grades);
    for(int i : newGrades){
        cout << i << endl;
    }
    return 0;
}
