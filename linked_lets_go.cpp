#include<iostream>
using namespace std;
class node{
    
    public:
    int id;
    node* next;
    node(int,node*);
};
class linked_list{
    private:
    node* head;
    node* tail;
    public:
    linked_list(node*, node*);
    void push(int);
    void show_list();
};
linked_list::linked_list(node* _head, node* _tail){
    head = _head;
    tail = _tail;
}
node ::node(int _id,node* _next){
    id = _id;
    next = _next;
}
void linked_list::push(int id ){
    node* n = new node(id,NULL);
    if(head == NULL){
        head = n;
        tail = n;
        head->next = tail;
    }
    else{
        tail->next = n;
        tail = tail->next;
         
    }
}
void linked_list::show_list(){
    int current_int;
    node* current_node;
    current_node = head;
    while(current_node != NULL){
        current_int = current_node->id;
        cout << current_int << endl;
        current_node = current_node->next;
    }
}
int main(){
    linked_list lista(NULL,NULL);
    lista.push(1);
    lista.push(2);
    lista.push(3);
    lista.show_list();
}