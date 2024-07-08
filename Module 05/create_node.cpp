#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next; //create a  pointer of Node
};

int main()
{
    Node a,b; // create node
    a.val = 100,b.val = 200;

    a.next = &b,b.next = NULL;

    cout << a.val <<" "<< b.val << endl;

    // cout<<(*a.next).val<<endl; 
    cout << a.next->val <<" "<< b.next->val << endl;

    return 0;
}
