#include<iostream>
#include<string>
using namespace std;

struct Node {
    int key;
    Node *parent, *left, *right;
};

Node *NIL, *root;

void insert(int key) {
    Node *x, *y, *z;

    z = new Node;
    z->key = key;
    z->left = NIL;
    z->right = NIL;
    y = NIL;
    x = root;

    while(x != NIL) {
        y = x;
        if(z->key < x->key) x = x->left;
        else x = x->right;
    }

    z->parent = y;
    if(y == NIL) root = z;
    else if(z->key < y->key) y->left = z;
    else y->right = z;
}

void print() {

}

