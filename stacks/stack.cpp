#include <iostream>

using namespace std;

#define MAX 1000

class stack {
  private:
    int top;
    int a[MAX];

  public:
    stack();
    void push(int);
    int pop();
    bool is_empty();
    int peek();
};

stack::stack() {
  top = -1;
}

void stack::push(int x) {
  a[++top] = x;
}

int stack::pop() {
  if(this->is_empty()) {
    cout << "Stack underflow!" << endl;
    return 0;
  } else {
    int x = a[top--];
    return x;
  }
}

bool stack::is_empty() {
  return top < 0;
}

int stack::peek() {
  if(this->is_empty()) {
    cout << "Stack is empty!" << endl;
    return 0;
  } else {
    return a[top];
  }
}


// test
int main() {
  stack my_stack;
  cout << my_stack.is_empty() << endl;
  my_stack.push(12);
  my_stack.push(-1);
  cout << my_stack.peek() << endl;
  my_stack.push(0);
  cout << my_stack.pop() <<  endl;
  cout << my_stack.pop() <<  endl;
  cout << my_stack.peek() << endl;
  cout << my_stack.is_empty() << endl;

  return 0;
}