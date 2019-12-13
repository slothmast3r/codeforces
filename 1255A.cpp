#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
    int a, b;
    cin >> a >> b;
    int x;
    x = abs(a-b)/5;
    if(abs(a-b)%5!=0){
        if(abs(a-b)%5==1||abs(a-b)%5==2)
            x++;
        else
            x+=2;
    }
    cout << x << endl;
    }
    return 0;
}
