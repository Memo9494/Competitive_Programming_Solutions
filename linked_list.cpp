#include<iostream>
using namespace std;
class node{
    private:
    int id;
    node* next;
    public:
    node(int,node*);
};
node :: node(int _id, node* _next){
    id = _id;
    next = _next;
}
class linked_list{
    private:
    node* head,tail;
    public:
    linked_list(node*);
    void push();
    void insert_node();
    void delete_node();
};

linked_list :: linked_list(node* _head, node* _tail){
    head = _head;
    tail = _tail;
}
void linked_list :: push(int n){
    node *tmp = new node;
    tmp->id = n;
    tmp->next = NULL;
    if(head == NULL){
        head = tmp;
        tail = tmp;
    }
    else{
        tail -> next = tmp;
        tail = tail->next;
    }

}
int main(){
    linked_list list(NULL,NULL);

}