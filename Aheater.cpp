#include <iostream>

using namespace std;

int main(){
    int q;
    cin >> q;
    while(q--){
        int a, h;
        cin >> a >> h;
        int x;
        x = h/a;
        cout << x*h+(h%a)*(h%a) << endl;
    }
    return 0;
}
