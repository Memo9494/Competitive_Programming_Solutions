#include<iostream>
using namespace std;
class node{
    private:
    int id;
    node* left_son;
    node* right_son;
    public:
    node(int,node*,node*);
    int mostrar_id();
    node* mostrar_hijo_izquierdo();
    node* mostrar_hijo_derecho();
};
node :: node(int _id, node* _left_son, node* _right_son){
    id = _id;
    left_son = _left_son;
    right_son = _right_son;
}
int node ::mostrar_id(){
    return id;
}
node* node:: mostrar_hijo_derecho(){
    return right_son;
}
node* node:: mostrar_hijo_izquierdo(){
    return left_son;
}
class tree{
    private:
    node* root;
    public:
    tree(node*);
    void add_node(int);
    void mostrar_arbol();
};
tree::tree( node* _root){
    root = _root;
}
// tree tree::add_node(int new_id){
//     if(root ==  nullptr){
//         node* n = new node(new_id,nullptr,nullptr);
//         root = n;
//         return root;
//     }
//     if(new_id == root->mostrar_id()){
//         return root;
//     }
//     else{
//         if(new_id > root->mostrar_id()){
//             root = root->mostrar_hijo_derecho();
//             return add_node(new_id);
//         }
//         else{
//             root = root->mostrar_hijo_izquierdo();
//             return add_node(new_id);
//         }
//     }
// }
void tree::add_node(int new_id){
       node* n = new node(new_id,nullptr,nullptr);
          if(root == nullptr){
   root = n;
    }
}
int main(){
    node root(5,nullptr,nullptr);
    tree arbolini(&root);
    // cout << root.mostrar_hijo_derecho()->mostrar_id() << endl;
}