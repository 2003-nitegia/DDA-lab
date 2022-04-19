#include<iostream>
#include<math.h>
using namespace std;
int jumpsearch(int a[],int n,int key)
{
    int low=0;
    int high=sqrt(n);
    while(a[high]<key && low<n)
    {
        low = high;
        high+=high;
        if(high>(n-1))
        {
            high=n;
        } 
    }
    for(int i=low;i<high;i++)
    {
        if(a[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cin>>key;
    int ans=jumpsearch ( a, n, key);
    if(ans==-1)
    {
        cout<<"not present";
    }
    else 
    {
        cout<<"present "<<ans;
    }
    return 0;
}
