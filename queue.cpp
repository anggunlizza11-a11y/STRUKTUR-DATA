#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node* front = NULL;
Node* rear = NULL;

void enqueue(int data){
    Node* baru = new Node;
    baru->data = data;
    baru->next = NULL;

    if(rear == NULL){
        front = rear = baru;
    }else{
        rear->next = baru;
        rear = baru;
    }
}
void dequeue(){
    if(front == NULL){
        cout << "Queue kosong" << endl;
    }else{
        Node* hapus = front;
        front = front->next;

        if(front == NULL){
            rear = NULL;
        }

        delete hapus;
    }
}
void tampil(){
    Node* bantu = front;

    cout << "Queue: ";
    while(bantu != NULL){
        cout << bantu->data << " ";
        bantu = bantu->next;
    }
    cout << endl;
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);

    tampil();
    dequeue();
    tampil();
    return 0;
}