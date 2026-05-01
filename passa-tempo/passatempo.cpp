#include <bits/stdc++.h>
using namespace std;
//aprendi coisas novas
//ultilizar isso para definir um valor maximo de uma matriz
const int maxn = 110;
//criar um matriz/array bidimensional, pra imitar a grade
string arr[maxn][maxn];
//criar outras maxtrix/array para guarda valores da soma das colunas e linhas
int sl[maxn], sc[maxn];
//usaremos o map para associar uma string a um int
map<string, int> m;
//usaremos um set para amazenar as string descobertos
set<string> s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int l, c;
    cin >> l >> c;
    //uso para inserir coisa na duas dimensões
    for (int i = 0; i <= l; i++){
        for (int j = 0; j <= c; j++){
            cin >> arr[i][j];
            //insiro as letras no set, para saber quais existem
            s.insert(arr[i][j]);
        }
        //salvo os valores da somar da linha
        cin >> sl[i];
    }
    //salvo o da coluna
    for (int i = 0; i <= c; i++) cin >> sc[i];
    while (m.size() < s.size()){
        for (int i = 0; i <= l; i++){
            //para contar a quantidade e soma correta entre eles para dps adicionar
            int qt = 0, som = 0;
            //para salvar a letra do valor achado
            string lele;
            //evitar bugs e terminar o loop corretamente (indicado para competições, para n buga a memoria e bagui ai)
            bool foi = 1;
            //primeiro por linha
            for (int j = 0; i <= c; j++){
                //se o valores não exitir no no map
                if(m.find(arr[i][j]) == m.end()){
                    //ele vai linkar/add
                    if(qt == 0){
                        qt++;
                        lele = arr[i][j];
                    } else if (lele == arr[i][j]){
                        //se somente a letra existir ele so add o valor
                        qt++;
                    }else{
                        //se não ele quebra
                        foi = 0;
                        break;
                    }
                    
                }else if (m.find(arr[i][j]) != m.end()){
                    //mas se ja tiver os valores, ele joga pra dentro da soma para fazer o calculo
                    som += m[arr[i][j]];
                }
                /*aqui ele usa um formula/macete para descobrir um valor da variaveis onde
                valor = (soma[linha][coluna] - soma[ja feita])/quantidade das variaveis
                onde soma[ja feita] representa onde soma das outras variaveis conhecidas da msm linha/coluna
                e quantidade representa quantidade das variveis desconhecidas

                PQ TEM QUE TER MATEMATICA AAAAAAAAAAA
                */
            }
            if(foi and qt) m[lele] = (sl[i] - som)/qt;
        }
        for (int i = 0; i <= c; i++){
            //o processo é basicamente o msm, so que nas linhas
            int qt = 0, som = 0;
            string lele;
            bool foi = 1;
            for (int j = 0; i <= l; j++){
                if(m.find(arr[i][j]) == m.end()){
                    if(qt == 0){
                        qt++;
                        lele = arr[i][j];
                    } else if (lele == arr[i][j]){
                        qt++;
                    }else{
                        foi = 0;
                        break;
                    }
                    
                }else if (m.find(arr[i][j]) != m.end()){
                    som += m[arr[i][j]];
                }
                if(foi and qt) m[lele] = (sc[i] - som)/qt;
            }
        }
    }
    //exbir
    for(auto it : m){
        //exibo primeiro a variavel e dps o numero corespondente
        cout << it.first << " " << it.second << "\n";
    }
    return 0; 
}

/*Esse foi um estudo do codigo de solução, eu tentei fazer mas quebrei muitos a cabeça ent fiz
atraves do codigo de resolução, mas tive que quebrar mais a cabeça para entender, mas é isso né, acontece*/