#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* link;  
};
struct node* head;

void insert(int x, int n){
    node* temp1 =new node();
    temp1->data = x;
    temp1->link = NULL;
    if(n == 1 ){
        temp1->link = head; // si apenas se quiere crear la lista, el head debería ser NULL tons no hay pedo
        head = temp1;
        return;
    }
    node* temp2 = head; //El primer nodo
    for(int i = 0; i < n-2; i++){
        temp2 = temp2->link;
    }
    temp1 -> link = temp2 -> link; //aqui linkeas la cola del nuevo nodo a lo que apuntaba el nodo anterior
    temp2 -> link = temp1; //aquí apuntas el nodo anterior al nodo nuevo :D

}
void Delete (int n){
    node* temp = head;
    if(n == 1){
        head = temp->link; //te skipeas el primer nodo
        free(temp);
        return; // or aply an else
    }
    for(int i = 0; i < n-2;i++){
        temp = temp -> link;
    }
    node* temp2 = temp ->link; //creas un nodo que es el que quieres borrar
    temp->link  = temp2-> link; //llamas a el nodo que le sigue al que quieres borrar y ese es el que le sigue al temporal
    free(temp2); //delete from memory since its no longer useful
}
void print(){
    struct node* temp = head;
    while(temp != NULL){
        cout << temp->data << endl;
        temp = temp->link;
    }
 
}
void reverse(){
    if(head == NULL || head->link == NULL){
        return;
    }
    node* next,* prev,* current;
    current = head;
    prev = NULL;
    while(current != NULL){
        next = current->link;
        current->link = prev;
        prev = current;
        current = next;
        
    }
    head = prev;

    //go to the last node

}
void recursive_print(node* p){
    if(p != NULL){
        cout << p->data << endl;
        recursive_print(p->link);
    }
    else{
        return;
    }

}
void recursive_reverse_print(node* p){
    if(p == NULL){
        return;
    }
    recursive_reverse_print(p->link);
    cout << p->data << endl;

}
//entendiendo recursion xd
void recursion_reversion(node* current){
    if(current->link == NULL){
        head = current;
        return;
    }
    recursion_reversion(current->link);
    node* new_past = current->link;
    new_past->link = current;
    current->link = NULL;

    
}

int main(){
    head = NULL;
    insert(2,1);
    insert(3,2);
    insert(4,3);
    insert(5,4);
    print();
    reverse();
    print();
    cout << endl;
    recursion_reversion(head);
    recursive_print(head);
}


