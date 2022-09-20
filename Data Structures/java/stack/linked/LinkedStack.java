package stack.linked;

import stack.Stack;
import stack.StackEmptyException;

public class LinkedStack implements Stack {
    private Node top;
    private int count;

    public LinkedStack() {
        top = null;
        count = 0;
    }

    public LinkedStack(Object obj) {
        top = new Node(obj);
        count = 1;
    }

    public int size() {
        return count;
    }

    public boolean isFull() {
        return false;
    }

    public boolean isEmpty() {
        return count == 0;
    }

    public void push(Object obj) throws StackEmptyException {
        Node temp = new Node(obj);
        temp.next = top;
        top = temp;
        count++;
    }

    public Object pop() throws StackEmptyException {
        if (isEmpty()) {
            throw new StackEmptyException("Stack is empty");
        }
        Object obj = top.data;
        top = top.next;
        count--;
        return obj;
    }

    public Object peek() throws StackEmptyException {
        if (isEmpty()) {
            throw new StackEmptyException("Stack is empty");
        }
        return top.data;
    }
}
