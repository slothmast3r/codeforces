    #include <iostream>
    #include <set>
    #include <vector>
     
    using namespace std;
     
    void solve(){
        int n;
        cin >> n;
        
        vector<string> a(n);
        set<string> have;
        int res = 0;
        vector<char> calced(n);
        
        for(string &pin : a){
            cin >> pin;
            have.insert(pin);
        }
        
        for(int i = 0; i < n; i++){
            if(calced[i]){
                continue;
            }
            for(int j = i + 1; j < n; j++){
                if(a[i] == a[j]){
                    calced[j] = 1;
                    res++;
                    for(int k = 0; k < 4 && a[i] == a[j]; k++){
                        for(char c = '0'; c <= '9'; c++){
                            string t = a[j];
                            t[k] = c;
                            if(!have.count(t)){
                                have.insert(t);
                                a[j] = t;
                                break;
                            }
                        }
                    }  
                }
            }
        }
        cout << res << endl; 
        for(string &s : a){
            cout << s << endl;
        }
    }
     
    int main(){
        int test;
        cin >> test;
        while(test--){
            solve();
        }
        
        return 0;
    }