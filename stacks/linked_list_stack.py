class Node:
  def __init__(self, d, n):
    self.data = d
    self.next = n

class Stack:
  def __init__(self):
    self.top_node = None

  def push(self, x):
    self.top_node = Node(x, self.top_node)

  def pop(self):
    if self.is_empty():
      print("Stack is empty")
    else:
      data = self.top_node.data
      self.top_node = self.top_node.next
      return data

  def peek(self):
    return self.top_node.data
  
  def is_empty(self):
    return self.top_node == None


# test
my_stack = Stack()
my_stack.push(4)
my_stack.push(-5)
print(my_stack.pop())
my_stack.push(99)
print(my_stack.peek())
print(my_stack.is_empty())