#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next; // pointer of Node

    // constructor
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    Node a(100),b(200); // create node or boject

    a.next = &b; // assign next group address
    cout << a.val <<" "<< a.next->val;

    return 0;
}
