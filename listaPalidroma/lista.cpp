//aprendi algo novo, esse include é como se tivesse importanto o vector o algorithm e outros negocios somente em so um linha
#include <bits/stdc++.h>
using namespace std;

int main(){
    //aprendi algo para ganhar mais perfomace, e economizar memoria do corretor, OBRIGADORES REPOSITORIOS DO GITHUB OBI
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //n = numero de termos, u = contador
    int n, u = 0;
    cin >> n;
    vector<int> l(n);
    //inserir elementos
    for (size_t i = 0; i < n; i++){
        cin >> l[i];
    }
    //indicies para contrair a sequecia
    int i = 0;
    int j = n - 1;
    //se o j fosse maior, sequecia acabava
    while (i < j){
        //se forem iguais, pula
        if (l[i] == l[j]){
            i++;
            j--;
        } else if (l[i] < l[j]){
            //se o da esqueda for maior, ele contrai, soma com o seguinte(ou melhor com o anterior)
            i++;
            l[j] += l[j - 1];
            u++;
        } else if (l[i] > l[j]){
            // se o da direita fro maior, contrai, soma com o seguite
            j--;
            l[i] += l[i + 1];
            u++;
        }
    }
    
    //foi bem dificil chegar
    //tenho que estudar mais algoritimos
    cout << u;
    return 0;
}