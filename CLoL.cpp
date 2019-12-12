#include <iostream>
#include <vector>

using namespace std;

vector<int> per[100001];
int il[100001] = {0};
bool ju[100001];
int x, y, z;
int n;


int main(){
    cin >> n;
    for(int i = 0; i < n - 2 ;i++){
        cin >> x >> y >> z;
        per[x].push_back(y);
        per[x].push_back(z);
        per[y].push_back(x);
        per[y].push_back(z);
        per[z].push_back(x);
        per[z].push_back(y);
        il[x]++;
        il[y]++;
        il[z]++;
    }
    x = 0;
    y = 0;
    z = 0;
    for(int i = 0; i < n; i++){
        if(il[i] == 1){
            x = i;
            break;
        }
    }
    if(il[per[x][0]]==2)
        y = per[x][0];
    else
        y = per[x][1];
    ju[x] = 1;
    ju[y] = 1;
    cout << x << " " << y;
    for(int i = 0; i < n - 2; i++){
        
        for(int j = 0; j < per[x].size(); j++){
            if(!ju[per[x][j]])
                z = per[x][j];
        }
        ju[z] = 1;
        cout << " " << z;
        x = y;
        y = z;
    }
    return 0;
}
