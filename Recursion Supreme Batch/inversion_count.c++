#include<iostream>
using namespace std;
void Merge(int arr[],int start,int end,int &inversion)
{
    int mid=start+(end-start)/2;
    int n1=mid-start+1;
    int n2=end-mid;

    int left[n1];
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
    while (leftindex<n1 && rightIndex<n2)
    {
        if (left[leftindex]<=right[rightIndex])
        {
            arr[k++]=left[leftindex++];
        }
        else{
            arr[k++]=right[rightIndex++];
            inversion +=n1-leftindex;
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
    
}
void Merge_sort(int arr[],int start,int end,int &inversion)
{
    if(start>=end)
        return;
    int mid=start+(end-start)/2;
    Merge_sort(arr,start,mid,inversion);

    Merge_sort(arr,mid+1,end,inversion);

    Merge(arr,start,end,inversion);  //merge the sorted array
    
}
int main()
{
    int arr[]={1,20,6,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int start=0;
    int end=n-1;
    int inversion=0;
    Merge_sort(arr,start,end,inversion);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<inversion;
    
    return 0;
}