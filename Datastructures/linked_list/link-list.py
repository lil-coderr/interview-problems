

class node:
    def __init__(self, key):
        self.val = key 
        self.next_ptr = None 
        self.prev_ptr  = None 



class Linklist: 
    def __init__(self):
        self.head = None
        self.tail = None
    

    def add(self,val):

        if self.head == None:
            self.head = node(val)
            self.tail = self.head

        if self.tail == self.head:
            self.tail = node(val)
            self.head.next_ptr = self.tail
            self.tail.prev_ptr = self.head

        else:
            temp = self.tail
            self.tail = node(val)

            temp.next_ptr = self.tail
            self.tail.prev_ptr = temp
            
    