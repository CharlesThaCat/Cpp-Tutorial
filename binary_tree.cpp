#include <iostream>

using namespace std;

// struct handling each tree node
struct node{
    int key_value;
    node *left;
    node *right;
};

// class handling tree related manipulations
class btree{
    public:
        btree();    // initiator
        ~btree();   // destructor
        
        void insert(int key);   // insert a value into a tree
        node *search(int key);  // search a value of a tree
        void destroy_tree();    // destroy a whole tree
    private:
        void insert(int key, node *leaf);
        node *search(int key, node *leaf);
        void destroy_tree(node *leaf);

        node *root;
};

// initiator
btree::btree(){
    root = NULL;
}
// destructor
btree::~btree(){
    destroy_tree();
}
// destroy the whole tree (private ver)
void btree::destroy_tree(node *leaf){
    if (leaf != NULL){
        destroy_tree(leaf->left);
        destroy_tree(leaf->right);
        delete leaf;
    }
}
// insert a value into a tree (private ver)
void btree::insert(int key, node *leaf){
    if (key < leaf->key_value){
        if (leaf->left != NULL){
            insert(key, leaf->left);
        }
        else{
            // create a new left child node and insert the new value
            leaf->left = new node;
            leaf->left->key_value = key;
            leaf->left->left = NULL;
            leaf->left->right = NULL;
        }
    }
    else if (key > leaf->key_value){
        if (leaf->right != NULL){
            insert(key, leaf->right);
        }
        else{
            // create a new right child node and insert the new value
            leaf->right = new node;
            leaf->right->key_value = key;
            leaf->right->left = NULL;
            leaf->right->right = NULL;
        }
    }
}
// search a value (private ver)
node *btree::search(int key, node *leaf){
    if (leaf != NULL){
        if (key == leaf->key_value)
            return leaf;
        else if (key < leaf->key_value)
            return search(key, leaf->left);
        else
            return search(key, leaf->right);
    }
    else
        return NULL;
}
// insert a value into a tree (public ver)
void btree::insert(int key){
    if (root != NULL)
        insert(key, root);
    else{
        root = new node;
        root->key_value = key;
        root->left = NULL;
        root->right = NULL;
    }
}
// search a value (public ver)
node *btree::search(int key){
    return search(key, root);
}
// destroy the whole tree (public ver)
void *btree::destroy_tree(){
    return destroy_tree(root);
}