#include <iostream>

using namespace std;

int main(){
    int q;
    cin >> q;
    while(q--){
        long int a, b, n, S;
        cin >> a >> b >> n >> S;
        if(S % n <= b){
        if(S <= 1ll* a*n + b){
                cout << "YES" << endl;
            }
            else cout<< "NO" << endl; 
        }
        else cout << "NO" << endl;
    }
    return 0;
}
