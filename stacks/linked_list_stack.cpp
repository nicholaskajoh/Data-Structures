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

class stack {
  private:
    node* top_node;

  public:
    stack();
    void push(int);
    int pop();
    int peek();
    bool is_empty();
};

stack::stack() {
  top_node = NULL;
}

void stack::push(int x) {
  top_node = new node(x, top_node);
}

int stack::pop() {
  if(is_empty()) cout << "Stack underflow!" << endl;
  else {
    int data = top_node->data;
    top_node = top_node->next;
    return data;
  }
}

int stack::peek() {
  if(is_empty()) {
    cout << "Stack is empty!" << endl;
    return 0;
  }
  else return top_node->data;
}

bool stack::is_empty() {
  if(top_node == NULL) return true;
  else return false;
}

// test
int main() {
  stack my_stack;
  my_stack.push(5);
  my_stack.push(-7);
  cout << my_stack.pop() << endl;
  cout << my_stack.peek() << endl;
  cout << my_stack.is_empty() << endl;
  cout << my_stack.pop() << endl;
  cout << my_stack.is_empty() << endl;
  my_stack.pop();

  return 0;
}