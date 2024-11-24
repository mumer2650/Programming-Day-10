#include<iostream>
using namespace std;
int num_of_rotations(string arr[],int size);
main()
{
    int res;
    int size;
    cout <<"Enter the size of array : ";
    cin>>size;
    if (size <=0 )
    {
        cout <<"Invalid Input ";
    }
    else 
    {
        bool isInvalid=false;
        string  arr[size];
        cout <<"Enter "<<size<<" directions(left or right),one per line : "<<endl;
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
            if ((arr[i] != "left") && (arr[i] != "right"))
            {
                isInvalid=true;
                cout <<"Invalid Input ";
                break;
            }
        }
        if (!isInvalid)
        {
            res = num_of_rotations(arr,size);
            cout <<"Rotations : "<<res;
        } 
    }
}
int num_of_rotations(string arr[],int size)
{
    int right=0,left=0;
    for (int i=0;i<size;i++)
    {
        if (arr[i] == "right")
        {
            right++;
        }
        else 
        {
            left++;
        }
    }
    return int(right - left)/4;
}