#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

void quickSort(vector<int>&a, int l, int r) //1 і останній елемент(тільки індекси)
{
    if (l>=r) // вони порівнюються, якщо лівий більше праввого то стоп
    {
    	return;
    }
    int i=l-1; //щоб почати и з 0
    int j=r+1; //щоб почати и з 0
    int indexpiv = rand() % (r-l+1) + l; //рандомне число
    int pivot = a[indexpiv];
    while (true)
    {
    	do{
    		i++; //переходимо на анступний елемент вправо
		}
		while(a[i]<pivot);
		do{
			j--; //переходимо на попередный елемент вліво
		}
		while(a[j]>pivot);
        
		if(i>=j) //якщо ліва частина за правою (правильно)
		{
			break;
		}
		swap(a[i], a[j]); //поміняти 2 елемента зліва і справа які не підходять під умову
		}
		quickSort(a, l, j); //перевіряємо окремо ліву частину
		quickSort(a, j+1, r); //перевіряємо окремо праву частину
	}

int main() {   
int n; 
    cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    quickSort(a, 0, n-1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
