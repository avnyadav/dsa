#include <iostream>
using namespace std;

int searchElement(int arr[], int size, int required_ele)
{
    int start=0;
    int stop=size-1;
    int mid=start+(stop-start)/2;

    while(start < stop)
    {   
        cout<<arr[mid];
        if (arr[mid-1]<arr[mid] and arr[mid]>arr[mid+1])
        {
//reverse logic
            if(arr[start]<=required_ele && required_ele<=arr[mid-1] )
            {
               
                stop = mid-1;
            }
            else if (arr[mid+1]<=required_ele && required_ele<=arr[stop])
            {
              start=mid+1;
            }
            else if (arr[mid]==required_ele)
            {
                return mid;
            }
            
            else{
                return -1;
            }

        }
        else
        {
            if(arr[mid]<required_ele)
            {
                start=mid+1;
            }
            else if(required_ele<arr[mid])
            {
                stop = mid-1;
            }
//old code
        }
        mid=start+(stop-start+1)/2;
    }
    if (arr[mid]==required_ele){
        return mid;
    }
    else{

    return -1;
    }
}

int main()
{
    int array[] = {66, 77, 99, 100, 1, 2,3};
    int index_loc=searchElement(array, 7, 66);
    cout<<"Element found at: "<<index_loc;
    cin>>index_loc;
    return 0;
}