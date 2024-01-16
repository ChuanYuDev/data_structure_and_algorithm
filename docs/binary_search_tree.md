# Binary search tree
- No duplicate, each key is unique

### 
```c++
class Node
{
public:
    int key = 0;
    Node *left_child = nullptr;
    Node *right_child = nullptr;
};
```

### Search for key K in tree T
- Start at the root
- Traverse left (if `K < key` at current node) / right (if `K > key` at current node) child pointers' as need
- Return node with key `K` or `NULL` as appropriate

### Insert a new key K into tree T
- If insert successfully, `K` must not be in tree `T`
- search for `K` unsuccessfully
- Rewire final `NULL` pointer to point to new node with key `K`

### Traverse tree T
- Traverse left subtree
- Access key at the current node
- Traverse right subtree

### Destruct tree T
- Destruct left subtree
- Destruct right subtree
- Destruct current node