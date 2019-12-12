#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int q,h,n;
    int a[200010];
    cin >> q;   
    while(q--){
        cin >> h >> n;
        
        int odp = 0;
        
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        a[n] = 0;
        for(int i = 1; i < n; i++){
            if(a[i]-a[i]!=1)
                odp++;
            else 
                i++;
        }
        cout << odp << endl;
        
    }
    
    
    return 0;
}
