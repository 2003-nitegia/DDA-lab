#include<iostream>
using namespace std;
void selectionsort(int a[], int n)
{
    int comp = 0;
    int swaps = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int k = i;
        for (int j = i + 1; j < n; j++)
        {
            comp++;
            if (a[j] < a[k])
            {
                k = j;
            }
        }
        if (k != i)
        {
            swaps++;
            int temp = a[k];
            a[k] = a[i];
            a[i] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "no. of comparisions " << comp << endl;
    cout << "no. of swaps " << swaps;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
     selectionsort(a,n);
}
