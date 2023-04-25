#include<iostream>
using namespace std;
int Merge(int arr[],int start,int end)
{
    int mid=start+(end-start)/2;
    int n1=mid-start+1;
    int n2=end-mid;
    int c=0;

    int left[n1];  //creating the left subarray to store the elements of left side in sorted order 
    int right[n2];

    
    for (int i = 0; i < n1; i++)
    {
        left[i]=arr[start+i];
    }
    for (int i = 0; i < n2; i++)
    {
        right[i]=arr[mid+i+1];
    }
    int leftindex=0;
    int rightIndex=0;
    int k=start;
    while (leftindex<n1 && rightIndex<n2)  //remember to always put less than n condition not less than =
    {
        if (left[leftindex]<=right[rightIndex])
        {
            arr[k++]=left[leftindex++];
        }
        else{
            arr[k++]=right[rightIndex++];
            // inversion +=n1-leftindex;
            c+=n1-leftindex;

        }
        
    }
    
    while (leftindex < n1) {
    arr[k] = left[leftindex];
    leftindex++;
    k++;
  }

  while (rightIndex < n2) {
    arr[k] = right[rightIndex];
    rightIndex++;
    k++;
  }
  return c;
    
}
int  Merge_sort(int arr[],int start,int end)
{
    int c=0;
    if(start>=end)
        return 0;
    int mid=start+(end-start)/2;
    c+=Merge_sort(arr,start,mid);

    c+=Merge_sort(arr,mid+1,end);

    c+=Merge(arr,start,end);  //merge the sorted array
    return c;
}
int main()
{
    int arr[]={8,4,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int start=0;
    int end=n-1;
    int c=Merge_sort(arr,start,end);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"Total inversion "<<c;
    return 0;
}