class mySet {
    private int size = 0;
    private String[] arr = new String[1];
    public int getIndex(String val) {
        for (int i = 0; i < arr.length; i++) {
            if (val.equals(arr[i])) return i; 
        }
        return -1;
    }
    public int getSize() {
        return size;
    }
    public void resize() {
        if (size >= arr.length){
            String[] temp = new String[arr.length*2];
            for (int i = 0; i < arr.length; i++){
                temp[i] = arr[i];
            }
            arr = temp;
        }
    }
    public boolean add(String val){
        if(contains(val)) return false;
        resize();
        arr[size++] = val;
        return true;
    }
    public boolean contains(String val) {
        if (getIndex(val) == -1) return false;
        return true;
    }
    public boolean remove(String val) {
        int index = getIndex(val);
        if(index == -1) return false;
        for (int i = index; i < size; i++) {
            arr[i] = arr[i+1];
        }
        return true;
    }
    public void print() {
        System.out.print("[");
        for (int i = 0; i < size; i++) {
            System.out.print(arr[i]);
            if (i != size - 1) System.out.print(", ");
        }
        System.out.println("]");
    }
}

public class Set {
    public static void main(String[] args) {
        mySet set = new mySet();
        set.add("Ahmad");
        set.add("Sultani");
        set.add("Dayanullah");
        set.print();
    }
}


