class Stack:
  def __init__(self):
    self.stack = []

  def push(self, x):
    self.stack.append(x)

  def pop(self):
    self.stack.pop()

  def is_empty(self):
    return len(self.stack) == 0

  def peek(self):
    if self.is_empty():
      return None
    else:
      return self.stack[-1]

# test
my_stack = Stack()
print(my_stack.is_empty())
my_stack.push(10)
my_stack.push(3)
my_stack.push(-1)
my_stack.push(17)
print(my_stack.peek())
my_stack.pop()
print(my_stack.peek())
print(my_stack.is_empty())