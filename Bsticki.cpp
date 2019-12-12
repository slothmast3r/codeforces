#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
    long int x, y;
    bool lol = true;
    cin >> x >> y;
    if(x == 1){
        if(y != 1)lol = false;
    }
    if(x == 2 || x == 3){
        if(y != 1)
            if(y != 2)
                if(y != 3)
                    lol = false;
    }
    if(lol)cout << "YES" << endl;
    else cout<< "NO" << endl;
    }
    return 0;
}
