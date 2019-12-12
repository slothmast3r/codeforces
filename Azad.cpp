#include<iostream>
#include<cmath>

using namespace std;
bool porow(string a, string b){
    for(int i = 0; i < a.size()-1; i++){
        if(a[i]-'0'>b[i]-'0')return 1;
    }
    if(a[a.size()-1]-'0'>b[a.size()-1]+1-'0') return 1;
    return 0;
}

int main(){
    int n;
    string a, b;
    cin >> n;
    for(int i = 0; i < n; i++){
        a = "";
        b = "";
        cin >> a >> b;
        if(a.size()>b.size()) {
            cout << "YES" << endl;
        }
        else {
            if(porow(a,b))cout << "YES" << endl;
            else cout<< "NO"<< endl;
        }
    }
    return 0;
}
