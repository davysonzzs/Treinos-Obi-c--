#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> l(n);
    for (size_t i = 0; i < n; i++){
        cin >> l[i];
    }

    sort(l.begin(), l.end());
    vector<int> lp;
    for (size_t i = 0; i < n - 1; i++){
        if(l[i] == lp[i+1]){
            lp.push_back(l[i]);
            i++;
        }
    }

    if(lp.size() >= 2){
        cout << "S";
    } else{
        cout << "N";
    }
    
    return 0;
}