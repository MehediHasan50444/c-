#include<bits/stdc++.h>
using namespace std;


void printArray(int *a, int n)
{
    for(int i=0;i<n; i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<endl;
}


void bubblesort(int *a, int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<(n-1)-i;j++)
        {
            if(a[i]>a[i+1])
            {
                swap(a[i],a[i+1]);
            }
        }
    }
}

int main()
{
    int arr[20]={33,54,67,32,56,42,4,2,5,9,34,98,76,53,22,66,13,58,61,69};

    printArray(arr,20);
    cout<<endl;
    bubblesort(arr,20);
    printArray(arr,20);


    return 0;
}
