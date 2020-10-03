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

 vector<int>v;
  // print out linked list
  while(linked_list != NULL) {
    cout << linked_list->data << endl;
    v.push_back(linked_list->data); // storing elements in an vector for printing in reverse manner since we cannot traverse in reverse direction in singly linked list. 
    linked_list = linked_list->next;
  }
  
  //Printing output in reverse order
  for (auto ir = v.rbegin(); ir != v.rend(); ++ir) 
        cout << *ir << " "; 
  return 0;
  
}
