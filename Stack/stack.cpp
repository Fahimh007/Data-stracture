#include<iostream>
#define capasity 5
using namespace std;
int stack[capasity];
int top = -1;

void push(int x){
    if(top<capasity-1)
    {
        top++;
        stack[top] = x;
    }
    else
    {
        cout<<"Stack is full"<<endl;
    }
}
int pop(){
    if(top>=0)
    {
        int val = stack[top];
        top--;
        return val;
    }
    else
    {
        cout<<"Empty stack"<<endl;
        return -1;
    }
}
int peek(){
    if(top>=0)
    {
        return stack[top];
    }
    else
    {
        cout<<"empty stack"<<endl;
        return -1;
    }
}

int main()
{
    cout<<"IMPLIMENTING STACK"<<endl;
    push(1);
    push(2);
    push(3);
    push(4);
    cout<<pop()<<endl;

    cout<<stack[top]<<endl;

    cout<<endl;
}
