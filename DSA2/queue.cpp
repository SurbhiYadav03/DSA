#include<iostream>
using namespace std;

class queue
{
    public:
    int front;
    int rear;
    int size;
    int *arr;

    queue(int size)
    {
        this->front=-1;
        this->rear=-1;
        this->size=size;
        this->arr=new int[size];
    }

    void insert(int data)
    {
        if(!isfull()){
            rear++;
            arr[rear] = data;
            front=0;
        }else{
            cout<<"cannot insert";
        }
    }

    void frontele()
    {
        if(front==-1){
            cout<<"underflow";
        }
        if(front<=rear){
            cout<<arr[front]<<endl;
        }
        else{
            cout<<"queue khali hogai";
        }
    }
    void dequeue()
    {
        if(front<=rear && front!=-1){
            int ele = arr[front];
            arr[front]=0;
            front++;
        }
    }

    void isEmpty()
    {
        if(front>=rear){
            cout<<"queue is empty"<<endl;
        }else{
            cout<<"not empty"<<endl;
        }
    }
    bool isfull()
    {
        if(rear==size && front<=rear){
            return true;
        }
    }
};
int main()
{

    queue q(5);
    q.insert(10);
    q.insert(20);
    q.insert(30);
    q.insert(40);
    q.insert(50);
    for(int i=0;i<q.size;i++){
        cout<<q.arr[i]<<" ";
    }
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.isEmpty();

    q.dequeue();
    q.frontele();
    q.dequeue();
    q.isEmpty();
    

    return 0;
}