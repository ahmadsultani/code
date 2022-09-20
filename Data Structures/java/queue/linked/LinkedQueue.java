package queue.linked;

import queue.Queue;
import queue.QueueFullException;
import queue.QueueEmptyException;

public class LinkedQueue implements Queue {
    private Node first;
    private Node last;
    private int count;

    public LinkedQueue() {
        first = null;
        last = null;
        count = 0;
    }

    public LinkedQueue(Object obj) {
        first = new Node(obj);
        last = first;
        count = 1;
    }
    
    public int size() {
        return count;
    }

    public boolean isEmpty() {
        return size() == 0;
    }

    public boolean isFull() {
        return false;
    }

    public Object peek() throws QueueEmptyException {
        if (isEmpty()) {
            throw new QueueEmptyException("Queue is empty");
        }
        return first.data;
    }

    public void enqueue(Object obj) throws QueueFullException {
        if (isFull()) {
            throw new QueueFullException("Queue is full");
        }
        Node curr = new Node(obj); 
        if (isEmpty()) {
            first = curr;
        } else {
            last.next = curr;
        }
        last = curr;
        count++;
    }

    public Object dequeue() throws QueueEmptyException {
        if (isEmpty()) {
            throw new QueueEmptyException("Queue is empty");
        }
        Object obj = first.data;
        first = first.next;
        count--;
        return obj;
    }

    public void Print() {
        if (isEmpty()) {
            System.out.println("Empty.");
            return;
        }
        Node temp = first;
        while (temp != null) {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
    }
}
