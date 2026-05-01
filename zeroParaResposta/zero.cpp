#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    //quantidade de comandos q vai ter
    int nq;
    cin >> nq;
    //vetor dinamico para ir add e tirando os comandos
    vector<int> xs;
    //quando nq - 1 for maior ou igual a i e vai fazendo os bagui
    for (int i = 0; i <= nq - 1; i++){
        int n;
        cin >> n;
        //se o numero inserido em tempo real for zero, o ultimo inserido vai ser descartado e ignorado
        if (n == 0) {
            xs.pop_back();
            continue;
        }
        //senão vai so add normalmente
        xs.push_back(n);
    }
    //soma tudo e mostra o resultado
    int resultado = accumulate(xs.begin(), xs.end(), 0);

    cout << resultado << endl;
    return 0;
    //dessa vez sobrou algo
}