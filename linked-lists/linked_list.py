class Node:
  def __init__(self, d, n):
    self.data = d
    self.next = n

if __name__=='__main__':
  linked_list = Node(6, None)
  linked_list = Node(0, linked_list)
  linked_list = Node(-5, linked_list)

  while linked_list != None:
    print(linked_list.data)
    linked_list = linked_list.next