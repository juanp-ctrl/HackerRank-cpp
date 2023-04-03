#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q, i;
    cin>>n>>q;

    string temp;
    vector<string> hrml;
    vector<string> quer;
    
    cin.ignore();   //Limpiamos el flujo de entrada
    
    //Almacenamos en un vector de strings cada hrml y cada query
    for(i=0; i<n; i++){
        getline(cin,temp);
        hrml.push_back(temp);
    }

    for(i=0; i<q; i++){
        getline(cin,temp);
        quer.push_back(temp);
    }

    //Creamos el mapa (diccionario) donde almacenaremos como llave una query y el valor sera el valor de la query
    map<string, string> m;
    vector<string> tag;

    for(i=0;i<n;i++)
    {
        temp=hrml[i];
        temp.erase(remove(temp.begin(), temp.end(), '\"' ),temp.end());     //Eliminamos todas las apariciones de " en el string
        temp.erase(remove(temp.begin(), temp.end(), '>' ),temp.end());      //Eliminamos todas las apariciones de > en el string
        
        //Si es un tag de cierre lo eliminamos del vector, no lo necesitamos
        if(temp.substr(0,2)=="</"){
            tag.pop_back();
        }

        else{
            stringstream ss;
            ss.str("");     //Vaciamos la cadena de caracteres usando el metodo str("")
            ss<<temp;       //Almacenamos en el ss el string modificado

            string t1,p1,v1;
            char ch;

            ss>>ch>>t1>>p1>>ch>>v1;

            string temp1="";
            if(tag.size()>0){
                temp1=*tag.rbegin();    //Almacenamos el ultimo string guardado en tags en temp1
                temp1=temp1+"."+t1;     //Concatenamos ese tag con un . y el t1 (tag recien leido)
            }
            else{       //Si no se ha usado el vector de tags se le da el valor del tag recien leido al string temp1
                temp1=t1;
            }
            
            //Almacenmoas en el vector de tags este nuevo tag
            tag.push_back(temp1);
            
            //Al map le damos como clave el ultimo valor del vector de tags, más una tilde, más el nompre del atributo
            //Y le damos como valor el valor asociado a dicho atributo
            m[*tag.rbegin()+"~"+p1]=v1;
            
            //Mientras hayan mas datos por leer seguiremos buscando mas atributos y mas valores
            while(ss)
            {
                //Seguimos almacenando mas atributos
                ss>>p1>>ch>>v1;
                m[*tag.rbegin()+"~"+p1]=v1;
            }
        }
    }
    for(i=0;i<q;i++){
        //Buscamos si en nuestro diccionario existe la query en especifico
        if (m.find(quer[i]) == m.end()){
            cout << "Not Found!\n";
        }
        else{
            cout << m[quer[i]] << endl;
        }
    }
    return 0;
}