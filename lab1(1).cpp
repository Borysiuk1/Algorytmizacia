#include <iostream>

using namespace std;

int main()
{
    int k=0;
    int n;
    int a[1000];
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    for (int i = 0; i < n; ++i)
    {
        if (x == a[i])
        {
            k++;
        }
    }
    cout <<k<< endl;
    return 0;
}
