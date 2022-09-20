package queue.array;

import queue.Queue;
import queue.QueueEmptyException;
import queue.QueueFullException;

public class ArrayQueue implements Queue {
    public static final int DEFAULT_CAPACITY = 100;
    private Object Data[];
    private int tail = -1; 
    private int capacity;

    //default constructor
    public ArrayQueue() {
        this(DEFAULT_CAPACITY);
    }

    public ArrayQueue(int capacity) {
        this.capacity = capacity;
        Data = new Object[capacity];
    }

    public int size() {
        return tail + 1;
    }

    public boolean isFull() {
        return (size() == capacity);
    }

    public boolean isEmpty() {
        return (size() == 0);
    }

    public void enqueue(Object elem) throws QueueFullException {
        if (isFull()) {
            throw new QueueFullException("Queue is full");
        }
        Data[++tail] = elem;
    }

    public Object dequeue() throws QueueEmptyException {
        if (isEmpty()) {
            throw new QueueEmptyException("Queue is empty");
        }
        Object elem = Data[0];
        for (int i = 0; i < tail; i++) {
            Data[i] = Data[i + 1];
        }
        tail--;
        return elem;
    }

    public Object peek() throws QueueEmptyException {
        if (isEmpty()) {
            throw new QueueEmptyException("Queue is empty");
        }
        return Data[0];
    }
}
