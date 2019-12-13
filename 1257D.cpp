#include <iostream>
#include <algorithm>

#define N 200001

using namespace std;

int n;
int a[N];
int m;
int p[N], s[N];
int bst[N];

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i <= n; i++){
            bst[i] = 0;
        }
        
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        cin >> m;
        for(int i = 0; i < m; i++){
            cin >> p[i] >> s[i];
            bst[s[i]]= max(p[i], bst[s[i]]);
        }
        for(int i = n - 1; i >= 0; i--){
            bst[i] = max(bst[i], bst[i+1]);
        } 
        
        int pos = 0;
        int npos = 0;
        int mx = 0;
        bool ok = true;
        bool war = true;
        int ans = 0;
        while(pos < n){
            npos = pos;
            mx = 0;
            war = true;
            while(war){
                mx= max(mx, a[npos]);
                if(mx > bst[npos - pos + 1]){
                    break;
                }
                npos++;
            }
            if(npos == pos){
                ok = false;
                break;
            }
            ans++;
            pos = npos;
        }
        if(ok)cout << ans<< endl;
        else cout << -1 << endl; 
    }
    return 0;
}
