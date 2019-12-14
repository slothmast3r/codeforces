#include <iostream>

using namespace std;

void solve(){
    string s;
    cin >> s;
    for(int i = 0; i < s.size() - 1; i++){
        if(s[i] == '?') continue;
        if(s[i] == s[i + 1]) {
            cout << "-1" << endl;
            return;
        }
    }
    if(s[0] == '?')
        for(char c = 'a'; c <= 'c'; c++){
            if(c != s[0 + 1])
                s[0] = c;
        }
    for(int i = 1; i < s.size() - 1; i++){
        if(s[i] == '?')
        for(char c = 'a'; c <= 'c'; c++){
            if(c != s[i + 1] && c!= s[i - 1])
                s[i] = c;
        }
    }
    if(s[s.size() - 1] == '?')
        for(char c = 'a'; c <= 'c'; c++){
            if(c != s[s.size() - 2])
                s[s.size() - 1] = c;
        }
    cout << s <<endl; 
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
