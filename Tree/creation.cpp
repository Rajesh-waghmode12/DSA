#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

    Node(int data){
        this->data = data;
        this->next = NULL;

    }
};

int main(){

    Node *root = new Node(3);
    cout << root->data << endl;

    return 0;
}