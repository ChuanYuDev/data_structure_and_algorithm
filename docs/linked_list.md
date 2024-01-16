# Linked list

### Node
```c++
struct Node
{
    int key = 0;
    Node *next = nullptr;
    Node *prev = nullptr;
}
```

### Insert `curr_node` before `node`
- Assign `curr_node next and prev`
```
curr_node->next = node
curr_node->prev = node->prev
```
- Change `node_prev next`
```
curr_node->prev->next = curr_node
```
or
```
node->prev->next = curr_node
```
- Change `node prev`
```
node->prev = curr_node
```

### Delete `curr_node`
- Change `node next and node_next prev`
```
curr_node->prev->next = curr_node->next
curr_node->next->prev = curr_node->prev
```
- Assign `curr_node prev next`
```
curr_node->prev = nullptr
curr_node->next = nullptr
```