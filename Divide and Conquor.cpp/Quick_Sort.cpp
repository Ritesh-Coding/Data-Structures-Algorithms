#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int Partition(vector<int> &arr,int i,int start,int end)
{
        //  step 1:choose pivot element
        int pivotIndex=start;
        int pivotElement=arr[start];

        //step2 find right position of the pivot element and place it there
        int count=0;
        for (int  i = start+1; i <=end ; i++)
        {
            if (arr[i]<=pivotElement)
            {
            count++;
            }
        }

        //step3 jab m loop se bahar hua to mere paas pivotIndex ka real position ready h
        int rightIndex=start+count;
        swap(arr[rightIndex],arr[pivotIndex]);
        pivotIndex=rightIndex;
        


        //left m choote and right m bade
        int i1=start;
        int j1=end;
        while (i1<pivotIndex && j1>pivotIndex)
        {
            
            while (arr[i1]<=arr[pivotIndex])
            {
                i1++;
            }
            while(arr[j1]>arr[pivotIndex])
            {
                j1--;
            }

            //2 case ho sakte h
            //you find the element to swap 
            // no swap

            if (i1<pivotIndex && j1>pivotIndex)
            {
                swap(arr[i1],arr[j1]);
            }
            
        }
        return pivotIndex;
        
}
void Solve(vector<int> &arr,int i,int start,int end)
{
    if (start>end)
    {
        return;
    }
    int partition_index=Partition(arr,i,start,end);

    Solve(arr,i,start,partition_index-1);

    Solve(arr,i,partition_index+1,end);
    
}
int main()
{
    vector<int> arr{4,1,3,9,7};
    int n=arr.size();
    int i=0;
    int start=0;
    int end=n-1;
    Solve(arr,i,start,end);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

}