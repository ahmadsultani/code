package queue;

public interface Queue {
    public void enqueue(Object o) throws QueueFullException;
    public Object dequeue() throws QueueEmptyException;
    public boolean isEmpty();
    public boolean isFull();
    public int size();
    public Object peek() throws QueueEmptyException;
}