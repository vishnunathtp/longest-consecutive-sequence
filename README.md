# Longest Consecutive Sequence

C++ implementation to find the length of the longest consecutive elements sequence in $O(N)$ time.

## Problem Description
Given an unsorted array of integers `nums`, return the length of the longest consecutive elements sequence.

### Example
- Input: `nums = [100, 4, 200, 1, 3, 2]`
- Output: `4` (Sequence: `[1, 2, 3, 4]`)

## Approach & Complexity
Store all elements in an `std::unordered_set`. For each number, determine if it represents the start of a streak (`num - 1` is not in the set). If so, incrementally count all contiguous followers.

- **Time Complexity:** $O(N)$ average time.
- **Space Complexity:** $O(N)$ to populate the hash set.

## How to Run & Test
```bash
g++ -std=c++17 main.cpp -o main
./main
```
