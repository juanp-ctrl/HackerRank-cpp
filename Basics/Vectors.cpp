#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;


int main() {

    int n1, n2, k, i, j;

    scanf("%d %d", &n1, &n2);

    vector<vector<int>> arr2d(n1);

    for(int i{}; i<n1; i++){
        //El numero de elementos a almacenar en cada vector
        scanf("%d", &k);
        arr2d.push_back(vector<int>(k));

        //Almacenamos cada valor ingresado en dicho vector recientemente creado
        for(size_t j{}; j<k; j++){
            int temp{};
            scanf("%d", &temp);
            arr2d[i].push_back(temp);
        }
    }

    vector<vector<int>> queries;

    //Guardamos todas las consultas hechas en el formato i j
    for(int q{}; q<n2; q++){
        scanf("%d %d", &i, &j);
        queries.push_back(vector<int>());
        queries[q].push_back(i);
        queries[q].push_back(j);
    }

    //Respondemos cada consulta (el elemento en la posición especifica de la matriz)
    for(int i{}; i<n2; i++){
        cout << arr2d[queries[i][0]][queries[i][1]] << endl;
    }

    return 0;
}