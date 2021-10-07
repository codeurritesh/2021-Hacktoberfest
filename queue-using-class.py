class Queue(object):
    def __init__(self, size):
        self.queue = []
        self.size = size

    def __str__(self):
        myString = ' '.join(str(i) for i in self.queue)
        return myString

    def enqueue(self, item):
        if(self.isFull() != True):
            self.queue.insert(0, item)
        else:
            print('Queue is Full!')

    def dequeue(self):
        if(self.isEmpty() != True):
            return self.queue.pop()
        else:
            print('Queue is Empty!')

    def isEmpty(self):
        return self.queue == []

    def isFull(self):
        return len(self.queue) == self.size

    def peek(self):
        if(self.isEmpty() != True):
            return self.queue[-1]
        else:
            print('Queue is Empty!')


if __name__ == '__main__':
    myQueue = Queue(20)
    myQueue.enqueue(41)
    myQueue.enqueue(35)
    myQueue.enqueue(62)

    print(myQueue)

    myQueue.enqueue(1)
    myQueue.enqueue(2)
    myQueue.enqueue(3)

    print(myQueue)

    myQueue.dequeue()

    print(myQueue)
