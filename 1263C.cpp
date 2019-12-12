#include <iostream>
#include <set>
#include <cmath>

using namespace std;

void solve(){
    int n;
    cin >> n;
    set<int> rozw;
    for(int i = 0; i * i <= n; i++){
        rozw.insert(i);
    }
    int a;
    for(int i = 1; i * i <= n; i++){
        a = n/i;
        rozw.insert(a);
    }
    cout << rozw.size() << "\n";
    for(auto it = rozw.begin(); it != rozw.end(); ++it){
        cout << *it << " " ; 
    }
    cout<< endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}
