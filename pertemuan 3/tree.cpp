#include <iostream>
using namespace std;

struct node {
    int data;
    node *kiri;
    node *kanan;
};

void addnode(node** akar, int value){
    if(*akar == NULL){
        node* baru = new node;
        baru -> data = value;
        baru -> kiri = NULL;
        baru -> kanan = NULL;
        *akar = baru;
    }
}

void intOrder(node* akar){
    if(akar != NULL){
        inOrder(akar -> kiri);
        cout << akar -> data << " ";
        inOrder(akar -> kanan);
    }
}
void preOrder(node* akar){
    if(akar != NULL){
        cout << akar -> data << " ";
        preOrder(akar -> kiri);
        preOrder(akar -> kanan);
    }
}
void postOrder(node* akar){
    if(akar != NULL){
        postOrder(akar -> kiri);
        inOrder(akar -> kanan);
        cout << akar -> data << " ";
    }
}

int main(){
    system("cls");

    //membentuk sebuah tree
    addNode(&akar, 15);
    addNode(&akar -> kiri, 27);
    addNode(&akar -> kanan, 30);
    addNode(&akar -> kiri -> kiri, 25);
    addNode(&akar -> kiri -> kanan, 29);

    //tranversal tree
    //in order
    cout << "tampilan inOrder : ";
    inOrder(akar);
    
    //pre Order
    cout << "tampilan preOrder : ";
    preOrder(akar);

    //post order
    cout << "tampilan postOrder : ";
    postOrder(akar);
}