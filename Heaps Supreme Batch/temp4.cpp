//here I have do the practice for the code   merge k sorted arrays
#include<iostream>
#include <vector>
#include <queue>
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
   bool operator()(info *a,info*b)
   {
        return a->data > b->data;
   }
};
vector<int> merge_k_sorted_arrays(int arr[][4],int k,int n)
{
    priority_queue<info*,vector<info*>,compare> min_heap;
    //har first element ko push to kr diya
    for (int i = 0; i < k; i++)
    {
        info* temp=new info(arr[i][0],i,0);
        min_heap.push(temp);   

    }

    vector<int> ans;
    //now what we do is to make an heap so take the top elemnt frm the heap and do firstly put it into the answetr array and find the next element of the array and again push it into the min heap
    while (!min_heap.empty())
    {
        info *temp=min_heap.top();
        int topelement=temp->data;
        int rowelement=temp->row;
        int colelement=temp->col;

        min_heap.pop();

        ans.push_back(topelement);

        if (colelement+1<n)
        {
            info *temp1=new info(arr[rowelement][colelement+1],rowelement,colelement+1);
            min_heap.push(temp1);
        }
        

    }
    
   return ans;

    
}

int main()
{
    int arr[][4]={{2,4,6,8}, 
                        {1,3,5,7}, 
                        {0,9,10,11}};
   int k=3;
   int n=4;
   vector<int> ans = merge_k_sorted_arrays(arr,k,n);

   for (auto i : ans)
   {
       cout << i <<" ";
   }


    return 0;
}
