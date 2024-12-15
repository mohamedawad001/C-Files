#include <iostream>
#define MAXSIZE 10
using namespace std;
int queue[MAXSIZE];
int front = -1;
int rear = -1;

void Enqueue(int value){
    if (rear != MAXSIZE - 1)
    {
        if (rear == -1 && front == -1)
        {
            front++;
            rear++;
            queue[rear] = value;
        }
        else{
            rear++;
            queue[rear] = value;
        }
    }
    else{
        cout<<"Queue Is Full\n";
    }
};
void Dequeue(){
    if (front != -1 && rear != -1 && front <=  rear)
    {
        int value = queue[front];
        front++;
    }
    else{
        cout<<"Queue Is Empty\n";
    }
};
int Peek(){
    if (front != -1 && rear != -1 && front <= rear)
    {
        return queue[front];
    }
    else{
        cout<<"Queue Is Empty\n";
    }
};
void Display(){
    if (front != -1 && rear != -1 && front <= rear)
    {
        for(int i = front; i <= rear; i++)
        {
            cout<<queue[i]<<"\t";
        }
        cout<<endl;
    }

};

int main()
{
    Enqueue(10);
    Enqueue(34);
    Enqueue(90);
    Dequeue();
    Display();
    return 0;
}