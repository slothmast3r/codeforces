#include <iostream>
#include <algorithm>

using namespace std;

int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
        if (arr[mid] == x) 
            return mid; 
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
        return binarySearch(arr, mid + 1, r, x); 
    } 
    return 0; 
}



int main (){
    int m, n, k, t;
    int a[200001];
    int d[200001];
    int l[200001];
    int r[200001];
    cin >> m >> n >> k >> t;
    for(int i = 0; i < m; i++){
        cin>> a[i];
    }
    sort(a,a+m);
    int x = t-n-1;
    x /= 2;
    int maxi = 0;
    for(int i = 0; i < k; i++){
        cin >> d[i] >> l[i] >> r[i];
        if(l[i] > x){
            maxi=max(r[i],maxi);
        }
    }
    int odp;
    odp = binarySearch(a,0,m,maxi);
    cout << m - odp << endl;
    return 0;
}
