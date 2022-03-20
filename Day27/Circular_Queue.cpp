#define SIZE 5
#include<iostream>
using namespace std;


class CQueue{
	int front, rear;
	int items[SIZE];
	public:
		CQueue(){
			front = -1;
			rear = -1;
		}
	bool isFull(){
		if(front == 0 && rear == SIZE-1){
			return true;
		}
		if(front == rear+1){
			return true;
		}
		return false;
	}
	bool isEmpty(){
		if(front == -1){
			return true;
		}
		return false;
	}
	void enQueue(int value){
		if(isFull()){
			cout<<"Full"<<endl;
			return;
		}
		if(front == -1){
			front = 0;
		}
		rear = (rear+1)%SIZE;
		items[rear] = value;
		cout<<"Inserted ->"<<items[rear]<<endl;
	}
	int deQueue(){
		if(isEmpty()){
			return (-1);
		}
		int element = items[front];
		if(front == rear){
			front = -1;
			rear = -1;
		}
		else{
			front = (front+1)%SIZE;
		}
		return element;
	}
	void display(){
		int i;
		if(isEmpty()){
			cout<<"Empty"<<endl;
			return;
		}
		for(i = front;i!=rear;i=(i+1)%SIZE){
			cout<<items[i]<<" ";
		}
		cout<<items[i]<<endl;
	}
};

int main(){
	CQueue q;
	q.enQueue(1);
	q.enQueue(2);
	q.enQueue(3);
	q.enQueue(4);
	q.enQueue(5);
	cout<<"deleted "<<q.deQueue()<<endl;
	cout<<"deleted "<<q.deQueue()<<endl;
	q.display();
	q.enQueue(10);
	q.enQueue(0);
	q.display();
}
