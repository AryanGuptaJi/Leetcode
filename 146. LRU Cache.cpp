class LRUCache {
public:
    queue<int> LRU;
    vector<int> v = vector<int>(10001, 0);
    vector<int> vec = vector<int>(10001, -1);
    int size = 0;
    int cap = 0;
    LRUCache(int capacity) {
        cap = capacity;
    }
    
    int get(int key) {
        if(vec[key] != -1){
            LRU.push(key);
            v[key]++;
        }
        return vec[key];
    }
    
    void put(int key, int value) {
        if(size < cap || vec[key] != -1){
            if(vec[key] == -1) size++;
            LRU.push(key);
            v[key]++;
            vec[key] = value;
            return;
        }
        while(v[LRU.front()] != 1){
            v[LRU.front()]--;
            LRU.pop();
        }
        vec[LRU.front()] = -1;
        v[LRU.front()]--;
        LRU.pop();
        LRU.push(key);
        v[key]++;
        vec[key] = value;
    }
};