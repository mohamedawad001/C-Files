#include <iostream>
#define MAXSIZE 6
using namespace std;
int stack[MAXSIZE];
int top = -1;
int peek(){
    return stack[top];
};
int isFull(){
    return(top == MAXSIZE - 1);
};
int isEmpty(){
    return(top == -1);
};
void push(int data){
    if (! isFull()){
        top++;
        stack[top] = data;
        cout<<data<<" Is Pushed Onto In Stack\n";
    }
    else{
        cout<<data<<" Cant Pushed\n";
    }
};
int pop(){
    if (! isEmpty()){
        int data = stack[top];
        top--;
        cout<<data<<" Is Popped From Stack\n";
    }
    else{
        cout<<"Cant Popped\n";
    }
};
int main(){
    push(10);
    push(20);
    push(50);
    pop();
    pop();
    return 0;
}