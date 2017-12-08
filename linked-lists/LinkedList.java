class LinkedList {
  public static void main(String[] args) {
    // create linked list
    Node linkedList = new Node(5, null);
    // add to linked list
    linkedList = new Node(-2, linkedList);
    linkedList = new Node(3, linkedList);

    // print out linked list
    while(linkedList != null) {
      System.out.println(linkedList.data);
      linkedList = linkedList.next;
    }
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