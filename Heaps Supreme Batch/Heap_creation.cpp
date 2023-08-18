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

    for (int i = 0; i <= h->size; i++)
    {
        cout<<h->arr[i]<<" ";
    }
    cout<<endl;
    




    return 0;
}