#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    string que[500];
    bool lit[26] = {0};
    
    cin >> n;
    
    char it;
    int ile = 1;
    for(int i = 0; i < n; i++){
        cin >> que[i];
        
        for(int j = 0; j < 26; j++)
            lit [j] = 0;
        ile = 1;
        it = que[i][0];
        for(int j = 1; j < que[i].size(); j++){
            if(que[i][j] != it){
                if(ile % 2 == 1) {
                    lit[(int)(it-'a')] = 1;
                }
                it = que[i][j];
                ile = 0;
            }
            ile++;
        }
        
        if(ile % 2 == 1) {
                    lit[(int)(it-'a')] = 1;
        }
        
        for(int j = 0; j < 26; j++){
            if(lit[j] == 1)cout << (char)(j+'a');
        }
        cout<<endl;
    }
    
    return 0;
}
