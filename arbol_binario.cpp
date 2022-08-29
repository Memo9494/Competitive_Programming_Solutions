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
    void driver_add_id(int new_id,node* new_root){
        if(new_root == nullptr){
            node* n = new node(new_id,nullptr,nullptr);
            cout << n << endl;
            new_root = n;
            cout << new_root << endl;
        }
        else{
            if(new_id < new_root->mostrar_id()){
                driver_add_id(new_id,new_root->mostrar_hijo_izquierdo());
            }
            else{
                driver_add_id(new_id,new_root->mostrar_hijo_derecho());
            }
        }
    }
    public:
    tree(node*);
    void add_id(int);
    int mostrar_id();
    node* mostrar_hijo_izquierdo();
    node* mostrar_hijo_derecho();
    
};
tree::tree(node* _root){
    root = _root;
}
int tree ::mostrar_id(){
    return root->mostrar_id();
}
node* tree:: mostrar_hijo_derecho(){
    return root->mostrar_hijo_derecho();
}
node* tree:: mostrar_hijo_izquierdo(){
    return root->mostrar_hijo_izquierdo();
}
void tree::add_id(int new_id){
    driver_add_id(new_id,root);
}
int main(){
    node raiz(10,nullptr,nullptr);
    node* apuntador = &raiz;
    tree root(apuntador);
    root.add_id(6);
    cout << root.mostrar_id() << endl;
    node* puntero = root.mostrar_hijo_derecho();
    node* puntero2 = root.mostrar_hijo_izquierdo();
    node nodin = *puntero;
   if(puntero == nullptr){
        cout << " mocos" << endl;
    }  
    cout << nodin.mostrar_id() << endl;

}