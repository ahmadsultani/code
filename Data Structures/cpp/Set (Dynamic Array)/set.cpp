#include <iostream>
using namespace std;

class set {
private:
    int size = 0;
    string* arr = new string[1*sizeof(arr)];
    int index(string val) {
        for (int i = 0; i <= size; i++) {
            if (val == arr[i]) return i;
        }
        return -1;
    }
    void resize() {
        if (size >= arr->size()){
            string* temp = new string[(arr->size()+1)*2*sizeof(arr)];
            for (int i = 0; i < arr->size(); i++) {
                temp[i] = arr[i];
            }
            arr = temp;
        }
    }
public:
    bool add(string val) {
        if (index(val) != -1) return false;
        resize();
        arr[size] = val;
        size++;
        return true;
    }
    int getSize() {
        return size;
    }
    bool remove(string val) {
        int idx = index(val);
        if (idx == -1) return false;
        for (int i = idx; i < size; i++) {
            arr[i] = arr[i+1];
        }
        size--;
        return true;
    }
    
};


int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    set testing;
    cout << testing.getSize() << endl;
    cout << testing.add("Sultani") << endl;
    cout << "size: " << testing.getSize() << endl;
    cout << testing.add("XY") << endl;
    cout << "size: " << testing.getSize() << endl;
    cout << testing.add("XY") << endl;
    cout << testing.remove("XY") << endl;
    cout << "size: " << testing.getSize() << endl;
    cout << testing.remove("Ahmad") << endl;
    cout << testing.add("XY") << endl;
    cout << "size: " << testing.getSize() << endl;
    cout << testing.add("XY") << endl;
    for (int i = 0; i < 20; i++) {
        cout << testing.add("hi"+to_string(i)) << " ";
    }   
    cout << "size: " << testing.getSize() << endl;
    cout << testing.add("HALO");
    cout << "\n";
    return 0;
}