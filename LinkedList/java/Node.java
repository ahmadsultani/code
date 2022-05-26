public class Node {
    public Object data;
    public Node next;

    public Node() {
        data = null;
        next = null;
    }

    public Node(Object data) {
        this.data = data;
        next = null;
    }

    public Node(Object data, Node next) {
        this.data = data;
        this.next = next;
    }
}