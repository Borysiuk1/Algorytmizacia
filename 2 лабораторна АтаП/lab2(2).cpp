#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    int a[n];
    
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    
    for(int i = 0; i < n; ++i){
        int k = n-i-1;
        for(int j = n-i-1; j > 0; --j){
            if(a[j-1] > a[k]){
                k = j-1;
            }
        }
        swap (a[n-i-1], a[k]);
    }
    
    for (int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }
    return 0;
}

