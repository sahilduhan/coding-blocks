#include <bits/stdc++.h>
using namespace std;
template <typename V>
class Map_node
{
public:
    string key;
    V value;
    Map_node *next;
    Map_node(string key, V value)
    {
        this->key = key;
        this->value = value;
        next = NULL;
    }
    ~Map_node()
    {
        delete next;
    }
};
template <typename V>
class Our_map
{

    Map_node<int> **buckets;
    int size;
    int numbuckets;

public:
    Our_map()
    {
        size = 0;
        numbuckets = 0;
        buckets = new Map_node<int> *[numbuckets];
        for (int i = 0; i < numbuckets; i++)
        {
            buckets[i] = NULL;
        }
    }
    ~our_map()
    {
        for (int i = 0; i < numbuckets; i++)
        {
            delete buckets[i];
        }
        delete[] buckets;
    }
    int size()
    {
        return count;
    }
    V get_value(string key)
    {

    }
    void insert(string key,V value)
    {

    }
    V remove(string key)
    {
        
    }
};
int main()
{

    return 0;
}