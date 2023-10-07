from collections import deque

class MyHashSet:

    def __init__(self):
        self.num_buckets = 1029
        self.buckets = [deque() for _ in range(self.num_buckets)]
    
    def getBucket(self,key) -> int:
        return key%self.num_buckets
          

    def add(self, key: int) -> None:
        if  self.contains(key):
            return
        self.buckets[self.getBucket(key)].append(key)
            
        
    def remove(self, key: int) -> None:
        if self.contains(key):
            self.buckets[self.getBucket(key)].remove(key)
        

    def contains(self, key: int) -> bool:
        for i in self.buckets[self.getBucket(key)]:
            if key == i:
                return True 
            
        return False