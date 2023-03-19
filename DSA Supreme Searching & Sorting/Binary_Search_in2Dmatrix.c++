#include<iostream>
using namespace std;

bool Binary_search(int arr[5][5],int size,int target,int col)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while (start<=end)  
    {
        int rowIndex=mid/col;
        int colIndex=mid%col;
        if (arr[rowIndex][colIndex]==target)
        {
            cout<<"Found at  rowindex "<<rowIndex <<" and colindex "<<colIndex;
            return true;

        }
        else if (arr[rowIndex][colIndex]>target)
        {

            end=mid-1;
        }
        else{
            start=mid+1;
        }
        
        
        mid=start+(end-start)/2;
    }
    return false;
    
}
int main()
{
    int arr[5][5]= {{1,2,3,4,5},
                    {6,7,8,9,10},
                    {11,12,13,14,15},
                    {16,17,18,19,20},
                    {21,22,23,24,25}};
    int target=211;
    int size=25;
    int col=5;
    if(!Binary_search(arr,size,target,col))
    {
            cout<<"Not Found";
    }

    

    return 0;
}