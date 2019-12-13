#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        int m;
        int x = 0;
        cin >> n >> m;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            x+=a[i];
        }
        if(n == 2 || m < n){
            cout << -1 << endl;
        }
        else {
            x*=2;
            cout << x << endl;
            for(int i = 0; i < n - 1; i++){
                cout << i + 1 << " "<< i + 2 << endl;
            }
            cout << n << " " << 1 << endl;
        }
    }
    return 0;
}
