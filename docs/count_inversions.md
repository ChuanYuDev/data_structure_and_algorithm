# Count inversions
- Input: array A containing the numbers 1, 2, 3, ..., n in some arbitrary order
- Output: number of inversions 
    - Number of pairs `(i, j)` of array indicies with `i < j` and `A[i] > A [j]`

### Divide and conquer

The algorithm not only count the inversions but sort the array.

return (sorted array, number of inversions)

```
sortCount(array A, length n):
    if n = 1, return (A, 0)

    (B, X) = sortCount(1st half of A, n / 2)
    (C, Y) = sortCount(2nd half of A, n / 2)
    (D, Z) = mergeCountSplitInv(B, C, n)

    return (D, X + Y + Z)
```

#### MergeCountSplitInv
- D = output [length = n]
- B = 1st sorted array [n / 2]
- C = 2nd sorted array [n / 2]
- i = 0, j = 0
- inversions = 0
```
for k = 0 to n - 1
    if B(i) <= C(j) 
        D(k) = B(i)
        i++
    else [C(j) < B(i)]
        D(k) = C(j)
        j++
        inversions += all the elements remaining in B

end
    when i or j comes to end, copy the remaining elements in other array to D
```