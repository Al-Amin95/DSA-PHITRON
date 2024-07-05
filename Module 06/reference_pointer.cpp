#include <bits/stdc++.h>
using namespace std;

void fun(int *&a, int *b)
{

   *a = 100;
   b = NULL;
   cout << endl<< endl;
   cout<<"a  value: "<<*a<<endl;  
   cout<<"b  value: "<<b<<endl;  
   
   cout<<"a  address: "<<&a<<endl;  
   cout<<"b address: "<<&b<<endl;  

}

int main()
{

    int num1 = 10, num2 = 20;
    int *ptr1 = &num1, *ptr2 = &num2;

    // num1,num2 value  and address
    cout << "Number 1 value: " << num1 << endl;
    cout << "Number 2 value: " << num2 << endl;
    cout << "Number 1 address: " << &num1 << endl;
    cout << "Number 2 address: " << &num2 << endl;
    cout << endl<< endl;

    // ptr1,ptr2 value  and address
    cout << "ptr 1 value: " << *ptr1 << endl;
    cout << "ptr 2 value: " << *ptr2 << endl;
    cout << "ptr 1 address: " << &ptr1 << endl;
    cout << "ptr 2 address: " << &ptr2 << endl;
    cout << endl<< endl;

    fun(ptr1, ptr2);
    cout << endl<< endl;
    // ptr1,ptr2 value  and address, after function call
    cout << "ptr 1 value: " << *ptr1 << endl;
    cout << "ptr 2 value: " << *ptr2 << endl;
    cout << "ptr 1(a) address: " << &ptr1 << endl;
    cout << "ptr 2(b) address: " << &ptr2 << endl;

    return 0;
}
