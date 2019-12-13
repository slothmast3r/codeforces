#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    int a[200001];
    while(t--){
        int n;
        cin >> n;
        
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        vector<int> pozy(n+1, -1);
        int ans = 200001;
        
        for(int i = 0; i < n; i++){
            if(pozy[a[i]]!=-1){
                ans = min(i - pozy[a[ i ]], ans);
            }
            pozy[a[i]] = i;
        }
        if(ans != 200001)cout << ans + 1<< endl;
        else cout<< -1 << endl;
    }
    return 0;
}
