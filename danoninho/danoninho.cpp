#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //criando o vetor onde vai ficar amazenado os valores para somar dps
    vector<int> nn;
    //valores de numero de copos e quando ml ele pode beber
    int n, d;
    cin >> n >> d;
    //preenchendo o array
    for (int i = 0; i < n; i++){
        int nv;
        cin >> nv;
        nn.push_back(nv);
    }
    //numero de copos q ele pode bebe, e a variavel para teste
    int nmc = 0, nms = 0;
    for (int i = 0; i < nn.size(); i++){
        //aq ele vai somar para
        nms += nn[i];
        //ver se a somar ja passou do quanto ele pode tomar
        if(nms > d){
            //se ele tiver passado, ele vai encerrar e mostrar resultado
            cout << nmc;
            return 0;
        } else{
            // senão ele vai contar a vez do copo
            nmc++;
        }
    }  
    
    return 0;
}