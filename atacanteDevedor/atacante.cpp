#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //numero de termos
    int n;
    cin >> n;
    //os amigos devedores e quanto ele deve
    vector<int> a, b;
    //preencher os vetores
    for (int i = 0; i < n; i++){
        int av;
        cin >> av;
        a.push_back(av);
    } 
    for (int i = 0; i < n; i++){
        int bv;
        cin >> bv;
        b.push_back(bv);
    }
    //aqui ele vai encontrar a diferença entre eles
    int as = 0, bs = 0;
    for (size_t i = 0; i < a.size(); i++){
        // se a diferença for negativa ele vai estar devendo, logo somando ao o bs, senão ele vai ser somado a o as, simples
        int ab = a[i] - b[i];
        if(ab >= 0){
            as += ab;
        }else{
            bs += ab;
        }
    }
    //aq so converter numero negativos para positivos
    cout << as << " " << (bs * -1);
    
    
    return 0;
}