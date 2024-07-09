#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int val;
    Node *next;
};

int main() {

    Node a,b,c,d;

    a.val=10;
    b.val=20;
    c.val=30;
    d.val=40;


    a.next=&b;
    b.next=&c;
    c.next=&d;

    cout<<"Linked list: "<<a.val<<" "<<b.val<<" "<<c.val<<" "<<d.val<<endl;
    cout<<"Linked List: "<<a.next->val<<endl;
    cout<<"Linked List: "<<a.next->next->val<<endl;
    cout<<"Linked List: "<<a.next->next->next->val<<endl;
  

    return 0;
}
