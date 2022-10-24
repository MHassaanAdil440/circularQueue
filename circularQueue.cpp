#include <iostream>
using namespace std;
#define size 3
int arr[size];
int front = -1;
int rear = -1;

bool isempty(){
    if(front==-1 && rear==-1){
        return true;
    }else{
        return false;
    }
}

void enqueue(int value){
    if((rear+1)%size == front){
        cout<<"Queue is full\n";
    }else{
        if(front == -1){
             front = 0;
        }
        rear = (rear+1)%size;
        arr[rear] = value;  
    }    
}
void dequeue(){
    if(isempty()){
        cout<<"Queue is empty\n";
    }
    else{
        if(front == rear){
            front = rear=-1;
        }else{
            front = (front + 1)%size;
        }  
    }
}
void displayQueue(){
    if(isempty()){
        cout<<"Queue is empty\n";
    }else{
        int i;
        if(front <= rear){
            for(i=front;i<=rear;i++){
                cout<<arr[i]<<" ";
            }
        }else{
            i=front;
            while(i<size){
                cout<<arr[i]<<" ";
                i++;
            }i=0;
            while(i<=rear){
                cout<<arr[i]<<" ";
                i++;
            }
        }
    }
}
int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    dequeue();
    // displayQueue();
    enqueue(4);
    displayQueue();
    return 0;
}
