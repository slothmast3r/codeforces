#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector< pair<string, int> > piny;
    int t;
    cin >> t;
    while(t--){
        string pins[10];
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> pins[i];
        }
        int x = 0;
        bool bylo = false;
        piny.push_back(make_pair(pins[0],0));
        int ans = 0;
        for(int i = 1; i < n; i++){
            bylo = false;
            for(int j = 0; j < piny.size(); j++){
                if(piny[j].first == pins[i]){
                    bylo = true;
                    piny[j].second++;
                    ans++;
                }
            }
            if(!bylo){
                piny.push_back(make_pair(pins[i],0));
            }
        }
        cout << ans << endl;
        int xd;
        int a = 0;
        vector<string> newpins;
        string nowy;
        
        for(int i = 0; i < piny.size(); i++){
            newpins.push_back(piny[i].first);
            cout <<  piny[i].first << endl;
        }
        for(int i = 0; i < piny.size(); i++){
            for(int j = 0; j < piny[i].second; j++){
                xd = j + '0' + a;
                if(xd == piny[i].first[0]) {
                    xd++; 
                    a++;
                }
                    nowy = piny[i].first;
                    nowy[0] = (char)xd;
                    while(find(newpins.begin(), newpins.end(), nowy)!= newpins.end()){
                        xd++; 
                        a++;
                        nowy[0] = (char)xd;
                    }
                    newpins.push_back(nowy);
                    cout << nowy << endl;
            }
            
        }
        while(newpins.size()){
            newpins.pop_back();
        }
        while(piny.size()){
            piny.pop_back();
        }
    }
    return 0;
}
