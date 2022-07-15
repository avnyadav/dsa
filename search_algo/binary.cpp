#include <iostream>
using namespace std;

int searchElement(int arr[], int size, int required_ele)
{
    int start=0;
    int stop=size-1;
    int mid=start+(stop-start)/2;

    while(start <= stop)
    {   
        
        if(required_ele < arr[mid] )
        {
            stop = mid -1;
        }
        else if (required_ele > arr[mid])
         {
            start = mid + 1;
        }
        else{
            return mid;

        }
        mid=start+(stop-start+1)/2;
    }

    return -1;
    
}

int main()
{
    int array[] = {66, 77, 99, 100, 1, 20, 33, 44, 55};
    int index_loc=searchElement(array, 10, 99);
    cout<<"Element found at: "<<index_loc;
    cin>>index_loc;
    return 0;
}