#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a, b;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    int as = 0, bs = 0;
    for (size_t i = 0; i < a.size(); i++){
        int ab = a[i] - b[i];
        if(ab >= 0){
            as += ab;
        }else{
            bs += ab;
        }
    }
    
    cout << as << " " << (bs * -1);
    
    
    return 0;
}