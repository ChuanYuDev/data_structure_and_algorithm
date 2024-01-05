# Sort

### Selection sort
- `i` is from `0` to `n - 1`.
- Find the minimum value between index `i` and `n - 1`.
- Swap minimum value with `i`.

### Insertion sort
- `i` is from `1` to `n - 1`.
- Insert `v[i]` into index `0` to `i - 1` such that `0` to `i` is sorted.

### Bubble sort
- `i` is from `0` to `n - 1`.
- For value between index `0` to `n - 1 - i`, swap two adjacent elements if first one is larger than second one.
- Early end: if there is no swap in one pass, then sort is finished.

### Merge sort
- Base case: array contains 0 or 1 number, just return them.
- Recursively sort 1st half of the input array.
- Recursively sort 2nd half of the input array.
- Merge two sorted sublists into one.

#### Merge
- C = output [length = n]
- A = 1st sorted array [n / 2]
- B = 2nd sorted array [n / 2]
- i = 0, j = 0
```
for k = 0 to n - 1
    if A(i) < B(j) 
        C(k) = A(i)
        i++
    else [B(j) <= A(i)]
        C(k) = B(j)
        j++

end
    when i or j comes to end, copy the remaining elements in other array to C
```

### Quick sort