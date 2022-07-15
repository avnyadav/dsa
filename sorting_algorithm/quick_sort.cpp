#include <iostream>
using namespace std;

void swap(int *number1, int *number2)
{
    int temp = *number1;
    *number1 = *number2;
    *number2 = temp;
}

int getPartitionIndex(int arr[], int low, int high)
{
    int pivot_value = arr[high];
    int i = low-1;
    int j;
    for (j = low; j < high; j++)
    {

        if (arr[j] < pivot_value)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
        
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int partitionIndex = getPartitionIndex(arr,low,high);
        quickSort(arr, low, partitionIndex-1);
        quickSort(arr, partitionIndex + 1, high);
    }
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int x = 3, y = 4;
    int num[]={8,5,4,1};
    cout<<"Array before sorting"<<endl;
    printArray(num,4);
    quickSort(num,0,3);
    cout<<"Array after sorting"<<endl;
    printArray(num,4);
    return 0;
} // namespace std
