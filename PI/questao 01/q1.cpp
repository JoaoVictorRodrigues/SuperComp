#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Cidade
{
    int id = 0;
    int distancia  = 0; // Distancia pra outra cidade
};


int main(){

    int n = 0; // Distancia entre centros
    int k = 0; //Numero de centros

    cin >> n >> k;
    
    vector<Cidade> cidades;
    vector<Cidade> cluster;

    // Lendo input
    int** pesos = new int*[n];

    for(int i = 0;i<n; i++){
        pesos[i] = new int[n];
    }

    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n; j++){
            cin >> pesos[i][j];
            cidades.push_back({i,pesos[i][j]});
        }
    }

    // 
    // int inx = 2;
    
    for (auto& element: cidades){
        cluster.push_back(element);
        cout << element.distancia << " "; 
    }


    // for (auto& element: cidades){
    //     if(element.distancia<)
    // }
    // int m = 0;
//     //Heuristica Gulosa
//    for(int j = 0; j < n; j++){
//        if(pesos[0][j]>pesos[0][0]){
//           m = pesos[0][0];
//           pesos[0][0] = pesos[0][j];
//           pesos[0][j] = m;
//           cluster.push_back({i,pesos[0][j]})
//           cout << "PRINT/";
//        }
//    }
    
    
    
    for (auto& element: cidades){
        cout << element.distancia << " "; 
    }
}