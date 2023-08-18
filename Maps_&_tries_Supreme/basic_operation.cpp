#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    //creation 
    unordered_map<string,int> m;

    //insertion
    pair<string,int> p1=make_pair("Tata",98);
    m.insert(p1);

    pair<string,int> p2("testing",1);
    m.insert(p2);

    m["fortuner"]=85;

    //Access 
    cout<<m["fortuner"]<<" ";

    cout<<m.at("Tata");

    //iterate with the help of loop
    cout<<"Iterating with the help of for each loop"<<endl;
    for (auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;;
    }   

    //printing the size
    cout <<"printing the size :--> "<<m.size()<<endl;


    //searching in a map 
    cout<<"searching gives answer as 1 if present and 0 if not possible :--> ";
    cout<<m.count("fortuner")<<endl;

    if (m.find("fortuner")!=m.end())
    {
        cout<<"Fortuner is present"<<endl;
    }
    else
    {
        cout<<"Fortuner is not present"<<endl;
    }
    



    return 0;
}