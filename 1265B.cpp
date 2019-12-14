#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
    int n; 
    int a[200001];
    cin >> n;
    vector< pair <int,int > > licz;
    
    string odp = "";
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
        licz.push_back(make_pair(a[i],i));
    }
    sort(licz.begin(),licz.end());
    
    int pmax, pmin = 0;
    pmin = licz[0].second;
    pmax = pmin;
    for(int i = 0; i < n; i++){
        pmax = max(pmax, licz[i].second);
        pmin = min(pmin, licz[i].second);
        if(pmax - pmin == i)
            odp += '1';
        else
            odp += '0';
    }
    
    cout << odp<< endl;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
