#include<iostream>  
#include<vector>
#include<queue>
using namespace std;
class info
{ 
    public:
    int data;
    int row;
    int col;
    info(int value,int r,int c)
    {
        this->data=value;
        this->row=r;
        this->col=c;
    }


};
class compare
{
    public:
    bool operator()(info *a,info *b)
    {
        return a->data > b->data;
    }
};
vector<int> mergeKarrays(int arr[][4],int k,int n)
{   
    priority_queue<info*,vector<info*>,compare> minheap;
    //here we push the first element of the array into the heap  along with it we push array and its col 
    for (int i = 0; i < k; i++)
    {        
       info *temp=new info(arr[i][0],i,0);   
       minheap.push(temp);
    }
     
    vector<int> ans;

    while (!minheap.empty())
    {
        info *temp=minheap.top();
        int  topElement=temp->data;
        int toprow=temp->row;
        int topcol=temp->col;
        minheap.pop();

        ans.push_back(topElement);   //here in the answer we push back the element and again repeat the process
         
        if (topcol+1<n)
        {
              info* newtemp=new info(arr[toprow][topcol+1],toprow,topcol+1);
              minheap.push(newtemp);

        }
        
    }
    
    return ans;


}



int main()   //let suppose here we have 100 arrays in which we want to merge them in a sorted array
{

    int arr[][4]={
                      {2,4,6,8}, 
                        {1,3,5,7}, 
                        {0,9,10,11}
                 };
    int row=3;   //here row represents array
    int col=4;   //here column represents index position

    vector<int> ans=mergeKarrays(arr,row,col);

    for(auto i : ans)
    {
        cout<<i <<" ";
    }




    return 0;
}