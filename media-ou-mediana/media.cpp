#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //essa q tem que saber de matematica, eu n sabia dessa
    int a, b;
    cin >> a >> b;
    //para descobrir um termo onde a media é (a + b + c)/3, é so usar a formula de mediana 2a - b,
    //realmente eu não sabia disso, ainda to tentando entender isso
    int r = (2 * a) - b;
    cout << r;
    return 0;
}