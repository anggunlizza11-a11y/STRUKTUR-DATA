#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node* top = NULL;

void push(int data){
    Node* baru = new Node;
    baru->data = data;
    baru->next = top;
    top = baru;
}
void pop(){
    if(top == NULL){
        cout << "Stack kosong" << endl;
    }else{
        Node* hapus = top;
        top = top->next;

        delete hapus;
    }
}
void tampil(){
    Node* bantu = top;

    cout << "Stack: ";
    while(bantu != NULL){
        cout << bantu->data << " ";
        bantu = bantu->next;
    }
    cout << endl;
}
int main(){
    push(10);
    push(20);
    push(30);

    tampil();
    pop();
    tampil();
    return 0;
}