#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    //array para amazenar o numerinhos
    int n[3];
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    n[0] = n1;
    n[1] = n2; 
    n[2] = n3;
    // vai organizar em ordem crescente e pegar o do meio, a irmã que nasceu dps da primeiro e antes da terceira
    sort(n, n + 3);
    cout << n[1];
    return 0;
}