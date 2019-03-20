#include <iostream>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    
    int a[n];
    int b[k];
    
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    
    for (int i = 0; i < k; ++i){
        cin >> b[i];
        bool answ = false;
        int left = 0;
        int right = n-1;
        
        while(left <= right){
            int mid = (left + right)/2;
            if(b[i] > a[mid]){
                left = mid + 1;
            }
            else if(b[i] < a[mid]){
                right = mid - 1;
            }
            else{
                answ = true;
                break;
            }
        }
        if(answ){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}

