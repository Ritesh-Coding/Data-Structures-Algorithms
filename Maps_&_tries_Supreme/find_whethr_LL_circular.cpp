#include<iostream>
using namespace std;
int main()
{
void check(Node* head)
{
    // If head is NULL return ;
    if (head == NULL) {
        flag = 0;
        return;
    }
 
    // Mark the incoming Node as
    // visited if it is not visited yet
    if (!vis[head]) {
        vis[head] = true;
        check(head->next);
    }
 
    // If a visited Node is found
    // Update the flag value to 1
    // and return ;
    else {
        flag = 1;
        return;
    }
}
 
    return 0;    
}