public class duplicateZero {
    public static void solve(int[] arr) {
        int zeros = 0, last = arr.length-1;
        for (int i = 0; i <= last-zeros; i++) {
            if (arr[i] == 0) {
                if (i == last-zeros) {
                    arr[last] = 0;
                    last -= 1;
                } else zeros++;
            }
        } 
        for (int i = last-zeros; i >= 0; i--) {
            if (arr[i] == 0) {
                arr[i+zeros] = 0;
                zeros--;
                arr[i+zeros] = 0;
            } else arr[i+zeros] = arr[i];
        }
    }

    public static void main(String[] args) {
        int[] arr = {8,4,5,0,0,0,0,7};
        solve(arr);
        for (int i : arr) System.out.print(i + " ");
    }
}