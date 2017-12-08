#include <iostream>

using namespace std;

struct node {
  int data;
  node* next;
  
  node(int data, node* next) {
    this->data = data;
    this->next = next;
  }
};

int main() {
  // create linked list
  node* linked_list = new node(2, NULL);
  // add to linked list
  linked_list = new node(-1, linked_list);
  linked_list = new node(7, linked_list);

  // print out linked list
  while(linked_list != NULL) {
    cout << linked_list->data << endl;
    linked_list = linked_list->next;
  }

  return 0;
}