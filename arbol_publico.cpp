#include<iostream>
using namespace std;
class node{
    public:
    int id;
    node* left;
    node* right;
    node(int, node*,node*);
    int show_id();
    node* show_left();
    node* show_right();
};
node :: node(int _id, node* _left, node* _right){
    id = _id;
    right = _right;
    left = _left;
}
int node::show_id(){
    return id;
}
node* node::show_left(){
    return left;
}
node* node::show_right(){
    return right;
}
class tree{
    public:
    void driver_add_id(int new_id,node* root){
        if(root == NULL){
            node* n = new node(new_id,NULL,NULL);
            root = n;
        }
        else{
            if(new_id < root->id){
                cout << "izquirda" << endl;
                driver_add_id(new_id,root->left);
            }
            else if(new_id > root->id){
                cout << "derecha ";
                driver_add_id(new_id,root->right);
            }
        }
    }
    node* root;
    tree(node*);
    void add_id(int);
    node* show_root();
};
tree :: tree(node* _root){
    root = _root;
}

void tree::add_id(int new_id){
    driver_add_id(new_id,root);
}
node* tree::show_root(){
    return root;
}
int main(){
    tree arbol(NULL);
    arbol.add_id(10);
    arbol.add_id(5);
    arbol.add_id(15);

}
