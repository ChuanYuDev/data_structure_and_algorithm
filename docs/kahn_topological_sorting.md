# Kahn's algorithm for topological sorting

### Finding the topological ordering of a DAG: 
- Compute in-degree (number of incoming edges) for each of the vertex present in the DAG and initialize the count of visited nodes as 0.
- Pick all the vertices with in-degree as 0 and add them into a queue (Enqueue operation)
- Remove a vertex from the queue (Dequeue operation) and then.
    - Increment the count of visited nodes by 1.
    - Decrease in-degree by 1 for all its neighbouring nodes.
    - If the in-degree of neighbouring nodes is reduced to zero, then add it to the queue.
- Repeat until the queue is empty.
- If the count of visited nodes is not equal to the number of nodes in the graph then the topological sort is not possible for the given graph.

### Complexity

`O(V + E)`
- `V`: number of vertices
- `E`: number of edges