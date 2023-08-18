#include <iostream>
using namespace std;
class Heap
{
    public:
    int size;
    int *arr;
    Heap()
    {        
        this->size=0;
        arr=new int[101];
    }

    ~Heap()
    {
        delete[] arr;
    }


   
        void insert(int value) {
                ///value insert karo end me 
                size = size + 1;
                int index = size;
                arr[index] = value;

                //iss value ko place at right{correct position} position
                while(index > 1) {
                        int parentIndex = index/2;
                        if(arr[index] > arr[parentIndex]) {
                                swap(arr[index] , arr[parentIndex]);
                                index = parentIndex;
                        }
                        else {
                                break;
                        }
                }
        }
  int delete_heap() {

                int ans  = arr[1];
                //replace root node value with last node data
                arr[1] = arr[size];
                size--;

                //place root node ka data on its correct position
                int index = 1;
                while(index < size) {
                        int left = 2*index;
                        int right = 2*index+1;
                        
                        int largest = index;

                        if(left < size && arr[largest] < arr[left] ) {
                                largest = left;
                        }
                        if(right < size && arr[largest] < arr[right] ) {
                                largest = right;
                        }

                        if(largest == index) {
                                //value is atr correct position
                                break; 
                        }
                        else {
                                swap(arr[index], arr[largest]);
                                index = largest;
                        } 
                }
                return ans;
        }

 
};


int main()
{
    Heap* h=new Heap();
    h->arr[0]=0;
    h->insert(100);
    h->insert(96);
    h->insert(60);
    h->insert(30);
    h->insert(57);
    h->insert(45);
    h->insert(55);
    h->insert(10);
    h->insert(20);
    h->insert(40);
    h->delete_heap();

    for (int i = 0; i <= h->size; i++)
    {
        cout<<h->arr[i]<<" ";
    }  
    cout<<endl;

   

    




    return 0;
}