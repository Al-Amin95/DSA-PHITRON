#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node *next;
    Node (int val){
        this->val=val;
        this->next=NULL;
    }
};

void Print( Node *head){
    // Node *tmp=head;
    
    cout<<"Linked List: ";
    while (head!=NULL)    {
        cout<<head->val<<" ";
        head=head->next;
    }cout<<endl;
}

int main() {

    Node *a=new Node(10);
    Node *b=new Node(20);
    Node *c=new Node (30);

    a->next=b;
    b->next=c; 

    Print(a);


    cout<<a->val<<" "<<b->val<<" "<<c->val<<endl;
    cout<<a->next->val<<endl;
    cout<<a->next->next->val<<endl;
    return 0;
}
