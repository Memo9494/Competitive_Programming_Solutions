#include<iostream>
#include<queue>
using namespace std;
struct node{
    int key;
    node* left;
    node* right;

};
void call_insert(node** root, int key){
    if(*root == NULL){
        node* root_2 = new node();
        root_2 ->key = key;
        root_2 ->left = NULL;
        root_2 ->right = NULL;
        *root = root_2;
        return; 
    }
    node* new_node = new node();
        new_node ->key = key;
        new_node ->left = NULL;
        new_node ->right = NULL;
    *root = new_node;
    queue<node*> q;
    q.push(*root);
    while(!q.empty()){
        node* current_node = q.front();
        q.pop();
        if(current_node->left == NULL){
            current_node->left = new_node;
            return;
        }
        else{
            q.push(current_node->left);
        }
        if(current_node -> right == NULL){
            current_node -> right = new_node;
            return;
        }
        else{
            q.push(current_node ->right);
        }
    }
}
node* createNode(int key){
    node* Node = new node();
    Node ->key = key;
    Node ->left = NULL;
    Node ->right = NULL;
    return Node;
}
//Level order traversal or (Breadth First Traversal)
node* search(node* root, int id){
    if(root == NULL){
        return NULL;
    }
    queue<node*> q;
    q.push(root);
    node* out = NULL;
    while(!q.empty()){
        node* current_node = q.front();
        q.pop();
        if(current_node->key == id){
            out = current_node;
            cout << "hit" << endl;
        }
        if(current_node->left != NULL){
            q.push(current_node->left);
        }
        if(current_node->right!= NULL){
            q.push(current_node->right);
        }
    }
    return out;

}
void deleteNode(node *root,int key){
    node *node_to_felete = search(root,key);
    queue<node*> q;
    q.push(root);
    node* current;
    while(!q.empty()){
        current = q.front();
        q.pop();
        if(current -> left != NULL){
            q.push(current->left);
        }
        if(current -> right != NULL){
            q.push(current->right);
        }
    }
    int key_at_deepest_node = current->key;
    //Look for the pointer that points to the deepest node
    q.push(root);
    node* current2;
    while(!q.empty()){
        current2 = q.front();
        q.pop();
        if(current2-> left != NULL){
            if(current2 ->left == current){
                current2 -> left =NULL;
            }
        }
        if(current2-> right != NULL){
            if(current2 ->right == current){
                current2 -> right =NULL;
            }
        }
    }

}
int main(){
    node *root = NULL;
    call_insert(&root,1);
    cout << root->key << endl;
    //Delete current node

}