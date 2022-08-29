#include<iostream>
#include<utility>
#include<queue>
using namespace std;

class node{
    public:
    int key;
    node* l;
    node* r;
    node(int, node*,node*);
};
class tree{
    private:
    void add_node_driver(int, node *);
    int height_driver(node*);
    void lot_print_driver(node* );
    void in_order_print_driver(node *);
    void preorder_print_driver(node *);
    void postorder_print_driver(node *);
    bool is_bst_driver(node* );
    bool is_bst_lesser(node* root,int value);
    bool is_bst_greater(node* root, int value);
    node* Delete_driver(node* root, int data);
    node* find_min_driver(node *);
    public:
    node* head;
    tree();
    void add_node(int);
    int height();
    void lot_print();
    void in_order_print();
    void preorder_print();
    void postorder_print();
    bool is_bst();
    void Delete(int data);
    node* find_min();
};
node::node(int _key, node* _l , node* _r){
    key = _key;

}
tree::tree(){
    
    head = NULL;
}
void tree::in_order_print(){
    in_order_print_driver(head);
}
void tree::in_order_print_driver(node * root) {
    if(root == NULL){
        return;
    }
    in_order_print_driver(root->l);
    cout << root->key << endl;
    in_order_print_driver(root->r);
}
void tree::preorder_print(){
    preorder_print_driver(head);
}
void tree::preorder_print_driver(node * root) {
    if(root == NULL){
        return;
    }
    cout << root->key << endl;
    preorder_print_driver(root->l);
    preorder_print_driver(root->r);
}
void tree::add_node_driver(int n_id,node* root ){
    node* n = new node(n_id,NULL,NULL);
    if(root == NULL){
        head = n;
        return;
    }
    else{
        while(root != NULL){
            if(root->key== n_id){
                return;
            }
            else if(n_id < root->key){
                if(root->l == NULL){
                    root->l = n;
                    return;
                }
                root = root->l;

            }
            else{
                if(root->r == NULL){
                    root->r = n;
                    return;
                }
                root = root->r;
            }
        }
    }
}
void tree::lot_print(){
    lot_print_driver(head);
}
void tree::lot_print_driver(node* root){
    queue<node*> fila;
    fila.push(root);
    while(fila.empty() != true){
        node* c_node = fila.front();
        fila.pop();
        if(c_node->l != NULL ){
            fila.push(c_node->l); 
        }
        if(c_node->r != NULL){
            fila.push(c_node->r);
        }
        cout << c_node->key << endl;
    }
}
int tree::height_driver(node* root){
    if(root == NULL){
        return -1;
    }
    return max(height_driver(root->l),height_driver(root->r)) + 1;
}
int tree::height(){
    return height_driver(head);
}
void tree::add_node(int new_id){
    add_node_driver(new_id,head);
}
void tree::postorder_print(){
    postorder_print_driver(head);
}
void tree::postorder_print_driver(node* root){
    if(root == NULL){
        return;
    }
    postorder_print_driver(root->l);
    postorder_print_driver(root->r);
    cout << root->key << endl;
}
bool tree::is_bst(){
    return is_bst_driver(head);
}
bool tree::is_bst_driver(node* root){
    if(root == NULL){
        return true;
    }
    if(is_bst_lesser(root->l,root->key) && is_bst_greater(root->r,root->key) && is_bst_driver(root->l) && is_bst_driver(root->r)){
        return true;
    }
    else{
        return false;
    }
}
bool tree::is_bst_lesser(node * root, int value){
    if(root == NULL){
        return true;
    }
    if(root->key <= value && is_bst_lesser(root->l,value) && is_bst_lesser(root->r,value)){
        return true;
    }
    else{
        return false;
    }
}
bool tree::is_bst_greater(node * root, int value){
    if(root == NULL){
        return true;
    }
    if(root->key >= value && is_bst_greater(root->l,value) && is_bst_greater(root->r,value)){
        return true;
    }
    else{
        return false;
    }
}
node* tree::find_min(){
    return find_min_driver(head);
}
node* tree::find_min_driver(node* root){
    
    if(root == NULL){
        return root;
    }
    while(root->l != NULL){
        root = root->l;
    }
    return root;
}
void tree::Delete(int value){
    Delete_driver(head,value);
}
node* tree::Delete_driver(node* root, int value){
    if(root == NULL){
        return NULL;
    }
    else if (value < root->key){
        root->l = Delete_driver(root->l,value);
    }
    else if (value > root->key){
        root->r = Delete_driver(root->r,value);
    }
    //if it is not greater or lesser, then it is it
    else{
        //case 1, there is no child
        if(root->l == NULL && root->r == NULL){
            delete root;
            root = NULL;
        }
        //case 2, there is just one child
        //Just the Right node
        else if(root->l == NULL){
            node* temp = root;
            root = root->r;
            delete temp;
        }
        else if(root->r == NULL){
            node* temp = root;
            root = root->l;
            delete temp;
        }
        // case 3, 2 children
        else{
            node* temp = find_min_driver(root->r);
            root->key = temp->key;
            root->r = Delete_driver(root->r,temp->key);
        }
    }
    return root;
}
int main(){
    tree t1;

    t1.add_node(100);
    t1.add_node(50);
    t1.add_node(150);
    t1.add_node(25);
    t1.add_node(75);
    cout << endl;
    
    t1.in_order_print();
    cout << endl;
    cout << endl;
    cout << endl;
    t1.Delete(50);
    t1.in_order_print();

}