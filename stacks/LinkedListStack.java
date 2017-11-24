class LinkedListStack {
  public static void main(String[] args) {
    Stack my_stack = new Stack();
    System.out.println(my_stack.isEmpty());
    my_stack.push(10);
    System.out.println(my_stack.pop());
    System.out.println(my_stack.pop());
    System.out.println(my_stack.peek());
    my_stack.push(22);
    my_stack.push(7);
    System.out.println(my_stack.peek());
  }
}

class Node {
  int data;
  Node next;

  Node(int data, Node next) {
    this.data = data;
    this.next = next;
  }
}

class Stack {
  Node topNode;

  Stack() {
    this.topNode = null;
  }

  void push(int x) {
    this.topNode = new Node(x, this.topNode);
  }

  int pop() {
    if(this.isEmpty()) {
      System.out.println("Stack underflow!");
      return 0;
    } else {
      int data = this.topNode.data;
      topNode = this.topNode.next;
      return data;
    }
  }

  int peek() {
    if(this.isEmpty()) {
      System.out.println("Stack is empty!");
      return 0;
    }
    else return this.topNode.data;
  }

  boolean isEmpty() {
    return this.topNode == null;
  }
}