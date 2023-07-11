/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
# define SIZE 2
using namespace std;
class stack
{
    int data[SIZE];
    int top;
    public:
    stack()
    {
        top=-1;
    }
    void push(int element)
    {
        if(isFull()==1)
        cout<<"stack is full......";
        else
        
        data[++top]=element;
}
int pop() 
{
    if(isEmpty()==1)
     return -1;
     else
     return data[top--];
}

int isEmpty()
{
    if (top==-1)

    return 1;
    else 
    return 0;
}
int isFull()
{
    if(top==SIZE-1)
    
    return 1;
     else
     return 0;
}
 int peek()
 {
    if(isEmpty()==1)
     return -1;
     else
      return data[top];
     
 }
};
int main()
{
    cout<<"static implementation of stack";
    stack st;
    st.push(10);
    st.push(20);
       st.push(30);
     cout<<"\nstack is empty:"<<st.isEmpty();
     cout<<"\nstack is full:"<<st.isFull();
    cout<<"\nelement is an top position:"<<st.peek();
     cout<<"\nelement removed from stack:"<<st.pop();
 cout<<"\nelement removed from stack:"<<st.pop();
 cout<<"\nelement removed from stack:"<<st.pop();

return 0 ;
}





