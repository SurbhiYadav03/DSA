#include<iostream>
using namespace std;

class queue{
    public:
    int data;
    int size;
    int *arr;
    int front;
    int rear;

    queue(int size){
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }

    void insert(int data)
    {
        if(front==-1){
            front=0;
        }
        if(rear<size){
            rear++;
            arr[rear]=data;
        }
        else{
            cout<<"Overflow"<<endl;
        }

        display();

    }

    void del()
    {
         if(front==-1 || front>rear){
            cout<<"Underflow"<<endl;
         }
         else{
            int ele = arr[front];
            front++;
         }
        display();
    }

    void display()
    {
        if(front==-1){
            cout<<"Queue is empty"<<endl;
        }
        else{
            for(int i=front;i<=rear;i++){
                cout<<arr[i]<<" ";
            }
        }
        cout<<endl;
    }
};
int main()
{
    queue q(5);
    q.insert(100);
    q.insert(200);
    q.insert(400);
    q.del();
    q.del();
    q.del();
    q.del();
    return 0;
}