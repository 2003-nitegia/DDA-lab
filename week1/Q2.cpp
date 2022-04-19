#include<iostream>
using namespace std;
int Binarysearch(int a[] ,int n,int key)
{
    int low =0, high =n-1;
    int mid;
    while(low<high)
    {
        mid=(low+high)/2;
        if(a[mid]== key)
        {
            return mid;
        }
        else if(a[mid]>key)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
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
    int answer = Binarysearch(a,n,key);
    if(answer==-1)
    {
        cout<<"not present";
    }
    else 
    {
        cout<<"present "<<answer;
    }
    return 0;
}
