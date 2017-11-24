class Stack {
  public static void main(String[] args) {
    JStack myStack = new JStack();
    System.out.println(myStack.isEmpty());
    myStack.push(6);
    myStack.push(17);
    System.out.println(myStack.peek());
    myStack.push(99);
    System.out.println(myStack.pop());
    System.out.println(myStack.pop());
    System.out.println(myStack.isEmpty());
    System.out.println(myStack.peek());
  }
}

class JStack {
  int top;
  static final int MAX = 1000;
  int[] a;

  JStack() {
    this.a = new int[this.MAX];
    this.top = -1;
  }

  void push(int x) {
    if(this.top >= this.MAX) System.out.println("Stack overflow!");
    else this.a[++this.top] = x;
  }

  int pop() {
    if(this.isEmpty()) {
      System.out.println("Stack underflow!");
      return 0;
    } else {
      int x = this.a[this.top--];
      return x;
    }
  }

  boolean isEmpty() {
    return this.top < 0;
  }

  int peek() {
    if(this.isEmpty()) {
      System.out.println("Stack is empty!");
      return 0;
    } else {
      return this.a[top];
    }
  }
}