/*
 * @lc app=leetcode id=146 lang=cpp
 *
 * [146] LRU Cache
 */

// @lc code=start

class Node
{
public:
    int key;
    int value;
    Node *next;
    Node *prev;

    Node(int k, int v)
        : key(k), value(v), next(nullptr), prev(nullptr)
    {
    }
};

class LRUCache
{
public:
    int capactity;
    Node *head;
    Node *tail;
    unordered_map<int, Node *> cache;

    LRUCache(int capacity)
    {
        head = new Node(-1, -1);
        tail = new Node(-1, -1);
        head->next = tail;
        tail->prev = head;
        this->capactity = capacity;
    }

    void remove(Node *gone)
    {
        gone->prev->next = gone->next;
        gone->next->prev = gone->prev;
    }

    void add(Node *newNode)
    {
        head->next->prev = newNode;
        newNode->next = head->next;
        newNode->prev = head;
        head->next = newNode;
    }

    int get(int key)
    {
        if (cache.find(key) != cache.end())
        {
            Node *curr = cache[key];
            remove(curr);
            add(curr);
            return curr->value;
        }
        return -1;
    }

    void put(int key, int value)
    {
        if (cache.find(key) != cache.end())
        {
            Node *curr = cache[key];
            remove(curr);
            delete curr;
        }

        Node *putNode = new Node(key, value);
        cache[key] = putNode;
        add(putNode);

        if (cache.size() > capactity)
        {
            Node *toDelete = tail->prev;
            remove(toDelete);
            cache.erase(toDelete->key);
            delete toDelete;
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
// @lc code=end
