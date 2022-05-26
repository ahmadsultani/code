public class Node {
    public Object obj;
    public Node next;

    public Node() {
        obj = null;
        next = null;
    }

    public Node(Object obj) {
        this.obj = obj;
        next = null;
    }

    public Node(Object obj, Node next) {
        this.obj = obj;
        this.next = next;
    }
}
