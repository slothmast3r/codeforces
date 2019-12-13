#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int r, g, b;
        cin >> r >> g >> b;
        int najw = max(r, max(g, b));
        int x = r + g + b;
        x-= najw;
        if(najw > x){
            cout << x;
        }
        else{
            cout<< (najw + x)/2;
        }
        cout << endl;
    }
    return 0;
}
