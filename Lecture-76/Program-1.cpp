#include<iostream>
#include<unordered_map>
using namespace std;

class LRUCache {
public:
    class Node{
        public:
            int key, val;
            Node* prev;
            Node* next;

            Node(int k, int v){
                key = k;
                val = v;
                prev = next = NULL;
            }
    };

    Node* head = new Node(-1, -1);
    Node* tail = new Node(-1, -1);

    unordered_map<int, Node*> m;
    int limit;

    void addNode(Node* newNode){
        Node* oldNext = head->next;

        head->next = newNode;
        oldNext->prev = newNode;

        newNode->next = oldNext;
        newNode->prev = head;
    }

    void delNode(Node* oldNode){
        Node* oldPrev = oldNode->prev;
        Node* oldNext = oldNode->next;

        oldPrev->next = oldNext;
        oldNext->prev = oldPrev;
    }

    LRUCache(int capacity) {
        limit = capacity;
        head->next = tail;
        tail->next = head;
    }
    
    int get(int key) { // O(1)
        if(m.find(key) == m.end()){
            return -1;
        }

        Node* ansNode = m[key];
        int ans = ansNode->val;

        m.erase(key);
        delNode(ansNode);

        addNode(ansNode);
        m[key] = ansNode;

        return ans;
    }
    
    void put(int key, int value) { // O(1)
        if(m.find(key) != m.end()){
            Node* oldNode = m[key];
            delNode(oldNode);
            m.erase(key);
        }

        if(m.size() == limit){
            // delete LRU data
            m.erase(tail->prev->key);
            delNode(tail->prev);
        }

        Node* newNode = new Node(key, value);
        addNode(newNode);
        m[key] = newNode;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

int main() {
    // leetcode - 146

    // Create an LRU Cache with capacity 2
    LRUCache* cache = new LRUCache(2);

    // Perform some operations
    cache->put(1, 1); // cache is {1=1}
    cache->put(2, 2); // cache is {1=1, 2=2}
    cout << cache->get(1) << endl; // returns 1, cache becomes {2=2, 1=1}
    cache->put(3, 3); // evicts key 2, cache becomes {1=1, 3=3}
    cout << cache->get(2) << endl; // returns -1 (not found)
    cache->put(4, 4); // evicts key 1, cache becomes {3=3, 4=4}
    cout << cache->get(1) << endl; // returns -1 (not found)
    cout << cache->get(3) << endl; // returns 3
    cout << cache->get(4) << endl; // returns 4

    delete cache; // cleanup
    return 0;
}
