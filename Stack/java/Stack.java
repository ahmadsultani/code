public interface Stack {
    public boolean isEmpty();
    public boolean isFull();
    public int size();
    public Object peek() throws StackEmptyException;
    public void push(Object obj) throws StackFullException;
    public Object pop() throws StackEmptyException;
}
