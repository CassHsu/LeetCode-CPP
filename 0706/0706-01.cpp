class MyHashMap {
public:
    int buckets[1000001];
    MyHashMap() {
        for (int i = 0; i < 1000001; i++) {
            this->buckets[i] = -1;
        }
    }
    
    void put(int key, int value) {
        this->buckets[key] = value;
    }
    
    int get(int key) {
        return this->buckets[key];
    }
    
    void remove(int key) {
        this->buckets[key] = -1;
    }
};
