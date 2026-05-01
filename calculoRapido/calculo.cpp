#include <iostream>
using namespace std;

int main(){
    //variveis iniciais
    int s, a, b, u = 0 /*sempre inicializar se não da numero bizaario*/;
    cin >> s;
    cin >> a;
    cin >> b;
    //i vai ser igual a A para estar dentro do intevalo, enquanto tiver dentro do intervalo ele vai contando
    for (int i = a; i <= b; i++){
        //copia para não baguçar, nunca usar o i direto em coisas
        int n = i;
        int st = 0;
        //enqunato n > 0 ele vai testando os digitos
        while (n > 0){
            //pegar o ultimo digito e joga para dentro
            st += n%10;
            //ele remove o ultimo e faz o teste, se continuar maior q zero ele vai testando
            n /= 10;
            /*Exemplo: n=123 ele vai pegar o 3 e somar como oq ja esta dentro do st
            dps eu removo o ultimo numero do n (n ia ser 12) dps disso na soma ele vai jogar pra dentro somente o
            2 que da 5, ele vai fazendo isso ate o n da 0, pq siginifica que ele terminou, não existe mais NADA, 
            
            NÃO SOBROU NADA PRO PROGRAMADOR DE C++
            */
        }

        if (st == s){
            //ver se a somar dar certo e add no contador
            u++;
        }
        
        
    }
    cout << u;
    
    return 0;
}