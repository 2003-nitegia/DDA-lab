#include<iostream>
using namespace std;
void insertionsort(int a[], int n)
{
    int comparisions = 0;
    int swaps = 0;
    for (int i = 1; i < n; i++)
    {
        int temp = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            comparisions++;
            a[j + 1] = a[j];
            j = j - 1;
            swaps++;
        }
        a[j + 1] = temp;
        swaps++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "no. of comparisions " << comparisions << endl;
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
    insertionsort(a, n);
}
