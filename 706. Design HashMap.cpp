class MyHashMap {
public:
    int map[1000001]; //initialize an array 
    MyHashMap() {
        fill(map, map+1000001, -1); // fill the array with the -1
    }
    
    void put(int key, int value) {
        map[key] = value; // for each key fill the value in the array
    }
    
    int get(int key) {
        return map[key]; // return the array value at key position 
    }
    
    void remove(int key) {
        map[key] = -1; //to remove, just rewrite it to -1
    }
};
