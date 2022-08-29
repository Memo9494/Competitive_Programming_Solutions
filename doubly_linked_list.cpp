#include<iostream>
using namespace std;
struct node {
    int data;
    node* next;
    node* prev;
};

node* head;
node* get_node(int x){
    node* minode = new node();
   minode->data = x;
   minode->prev = NULL;
   minode->next = NULL;
   return minode; 
}
void insert_ahead(int x){
    node* temp = get_node(x);
    if(head == NULL){
        head = temp;
        return;
    }
    head->prev = temp;
    temp->next = head;
    head = temp;

}
void print(){
    node* temp = head;
    while(temp != NULL){
        cout << temp->data << endl;
        temp = temp->next;
    }
}
void recursive_reverse_print(node* current){
    if(current == NULL){
        return;
    }
    recursive_reverse_print(current->next);
    cout << current->data << endl;
}
void rrp(){
    recursive_reverse_print(head);
}
int main(){
    insert_ahead(5);
    insert_ahead(3);   
        insert_ahead(5);
    insert_ahead(2); 
        insert_ahead(100);
    insert_ahead(99); 
        insert_ahead(534);
    insert_ahead(3000); 
    print();
    rrp();
}