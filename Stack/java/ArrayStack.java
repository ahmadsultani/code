public class ArrayStack implements Stack {
    public static final int maxCapacity = 100;
    private int capacity;
    private int top = -1;
    private Object Data[];
    
    public ArrayStack() {
        this(maxCapacity);
    }

    public ArrayStack(int capacity) {
        this.capacity = capacity;
    }

    public boolean isEmpty() {
        return top < 0;
    }

    public boolean isFull() {
        return size() == capacity;
    }

    public int size() {
        return top + 1;
    }
    
    public Object peek() throws StackEmptyException {
        if (isEmpty()) {
            throw new StackEmptyException("Stack is empty");
        }
        return Data[top];
    }

    public void push(Object obj) throws StackfullException {
        if (isFull()) {
            throw new StackFullException("Stack is full");
        }
        Data[++top] = obj;
    }
}
