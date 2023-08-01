class MyHashMap {
public:
    vector<list<pair<int,int>>> m;
    int siz;
    MyHashMap() {
        siz = 1e6 + 1;
        m.resize(siz);
    }
    
    int hash(int key){
        return key % siz;
    }
    
    list<pair<int,int>> :: iterator search(int key){
        int i = hash(key);
        
        list<pair<int, int>> :: iterator it = m[i].begin();
        while (it != m[i].end()){
            if (it->first == key)
                return it;
            it++;
        }
        return it;
    }
    
    void put(int key, int value) {
        int i = hash(key);
        remove(key);
        m[i].push_back({key, value});
    }
    
    int get(int key) {
        int i = hash(key);
        list<pair<int,int>> :: iterator it = search(key);
        if (it == m[i].end())
            return -1;
        else return it->second;
    }
    
    void remove(int key) {
        int i = hash(key);
        list<pair<int,int>> :: iterator it = search(key);
        if (it != m[i].end())
            m[i].erase(search(key));
    }
};

/*
class MyHashMap {
public:
    vector<int> m;
    int siz;
    
    MyHashMap() {
        siz = 1e6 + 1;
        m.resize(siz);
        fill(m.begin(), m.end(), -1);
    }
    
    void put(int key, int value) {
        m[key] = value;
    }
    
    int get(int key) {
        return m[key];
    }
    
    void remove(int key) {
        m[key] = -1;
    }
};
*/


/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */