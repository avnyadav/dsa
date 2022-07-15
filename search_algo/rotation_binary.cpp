#include <iostream>
using namespace std;

int searchElement(int arr[], int size)
{
    int start=0;
    int stop=size-1;
    int mid=start+(stop-start)/2;

    while(start < stop)
    {   
        if(arr[start]>arr[mid])
        {
            stop=mid-1;
        }
        else
        {
           return mid;
        }
        mid=start+(stop-start)/2;
        

    }
    return mid;
    
}

int main()
{
    int array[] = {66,  1, 2,3};
    int index_loc=searchElement(array, 4);
    cout<<"Element found at: "<<index_loc;
    cin>>index_loc;
    return 0;
}