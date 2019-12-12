#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    
    
    
    while(t--){
        int n,x,a,b;
        cin >> n >> x >> a >> b;
        int c = 0;
        if(a > b) {
            c = a;
            a = b;
            b = c;
        }
        if(a > x){
            a = a - x; 
            x = 0;
            }
            else{
                x = x - a + 1;
                a = 1;
                if(n - b > x){
                    b = x + b;
                    x = 0;
                }
                else b = n;
            }
       
        
        cout << b - a << endl;
    }
    
    return 0;
}
