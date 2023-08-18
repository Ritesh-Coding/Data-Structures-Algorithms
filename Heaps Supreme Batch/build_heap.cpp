#include <iostream>
using namespace std;
class Heap
{
    int *arr;
    int size;
    Heap()
    {
        arr=new int[101];
        this->size=0;
    }
};
void heapify(int arr[],int size,int i)
{
     int index=i;
     int left = 2*i;
     int right=2*i+1;
     int largest=index;

     if (left<=size && arr[left]>arr[largest])
     {
        largest=left;
     }
     if(right<=size && arr[right]>arr[largest])
     {
        largest=right;
     }

     if (index!=largest)
     {
        swap(arr[index],arr[largest]);
        heapify(arr,size,largest);
     }


}
void build_heap(int arr[],int size)
{
    for (int i = size/2 ;i > 0; i--)
    {
        heapify(arr,size,i);
    }
    
}
void heap_sort(int array[],int size)
{
      while(size != 1) {
                swap(array[1], array[size--]);
                heapify(array,size,1);
        }
}

int main()
{
    int arr1[]={ -1, 56 ,44 ,23 ,43, 6 ,12, 4, 32, 5 ,3 ,3 };
    int n=11;
    build_heap(arr1,n);
    for (int i = 0; i <= 11; i++)
    {
        cout<<arr1[i]<<" ";
    }
    heap_sort(arr1,n);
    cout<<endl;
     for (int i = 0; i <= 11; i++)
    {
        cout<<arr1[i]<<" ";
    }
    

    return 0;
}