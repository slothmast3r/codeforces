#include <iostream>
#include <algorithm>

using namespace std;

int main (){
    int q;
    cin >> q;
    while(q--){
        long long a, b, g, k;
        cin >> a >> b >> k;
        g = __gcd(a, b);
        a /= g;
        b /= g;
        if(a > b) swap(a, b);
        if((k - 1) * a + 1 < b) cout << "REBEL";
        else cout << "OBEY";
        cout << endl;
    }
    return 0;
}
