#include<iostream>
using namespace std;
bool can_arranged(int arr[],int size);
main()
{
    int size;
    cout <<"Enter the size of array : ";
    cin>>size;
    if (size <=0 )
    {
        cout <<"Invalid Input ";
    }
    else 
    {
        int arr[size];
        cout <<"Enter "<<size<<" Integers,one per line : "<<endl;
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
        bool res = can_arranged(arr,size);
        cout <<res;
    }
}
bool can_arranged(int arr[],int size)
{
    int sort[size];
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-1;j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int x=0;x<size;x++)
    {
        cout<<arr[x];
    }
    cout <<endl;
    if (size == 1)
    {
        return true;
    }
    int difference = arr[1] - arr[0];
    for(int k=0;k<size-1;k++)
    {
        int diff = arr[k+1] - arr[k]; 
        if (diff != difference)
        {
            return false;
        }
    }
    return true;
}