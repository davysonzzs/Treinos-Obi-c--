#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
//pegar as letras tudo ai
vector<char> a = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
vector<char> c = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};
vector<char> v = {'a', 'e', 'i', 'o', 'u'};

int main(){
    //vetor dinamico para ir colocando as coias
    vector<char> r;
    string p;
    cin >> p;
    //quantas vezes tiver um consoante
    int vz = 0;
    for (size_t i = 0; i < p.size(); i++){
        //vai pergar qual letra é
        char la = p.at(i);
        //vai ver se é consoante
        if (find(c.begin(), c.end(), la) != c.end()){
            //passo 1
            //vai jogar a consante orignal no vetor 
            r.push_back(la);
            //passo 2: vogal
            //vai pegar o index da letra
            int in1;
            for (size_t i = 0; i < a.size(); i++){
                if (a[i] == la){
                    in1 = i;
                    break;
                } 
            }
            //vai pegar da primeira vogal proxima
            auto it1 = find_first_of(a.begin() + in1, a.end(), v.begin(), v.end());
            // e a ultima proxima
            auto it2 = find_first_of(make_reverse_iterator((a.begin() + in1) - 1), a.rend(), v.begin(), v.end());
            int ind1, ind2, din1, din2;
            //vai pegar o indice de cada uma
            for (size_t i = 0; i < a.size(); i++){
                if (a[i] == *it1){
                    ind1 = i; 
                    break;
                }
            }
            for (size_t i = 0; i < a.size(); i++){
                if (a[i] == *it2){
                    ind2 = i; 
                    break;  
                }
            } 
            //se a distancia dessas vogais forem a mesma, ele vai usar a mais proxima do começo do alfabeto
            din1 = ind1 - in1;
            din2 = in1 - ind2;
            if (din2 == din1){
                r.push_back(*it2);
            } else{
                // se não a primeira mais proxima
                r.push_back(*it1);
            }
            
            
            //passo 3: ultima consoante
            int in2;
            for (size_t i = 0; i < c.size(); i++){
                if (c[i] == la){
                    in2 = i; 
                    break;
                }
            }
            //pegar a consante mais proxima da original
            r.push_back(c[in2 + 1]);
            
        } else{
            //se não for uma consoante, vai so colocar no vetor
            r.push_back(la);
        }
        
    }
    //exibe tudo
    for(char ex : r){
        cout << ex;
        //esse demorou
    }
    

    return 0;
}