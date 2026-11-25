# PAWNRUSH

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Pawn Rush

Chef is practising chess endgames. A white pawn stands on row $R$ of an otherwise empty $8 \times 8$ chessboard. The rows are numbered $1$ to $8$ from White's side, so the pawn moves towards row $8$.

In one move, the pawn moves forward by one row. However, a pawn standing on row $2$ (its starting row) may instead move forward by  **two**  rows in that move.

Find the minimum number of moves the pawn needs to reach row $8$.

### Input Format
- The first and only line of input contains a single integer $R$ — the row the pawn stands on.
### Output Format

Output a single integer — the minimum number of moves the pawn needs to reach row $8$.

### Constraints
- $2 \leq R \leq 7$
### Sample 1:
Input
Output

```
7

```

```
1

```

### Explanation:

The pawn moves from row $7$ to row $8$ in one move.

### Sample 2:
Input
Output

```
2

```

```
5

```

### Explanation:

The pawn first moves two rows, from row $2$ to row $4$, and then one row at a time to rows $5$, $6$, $7$ and $8$. That is $5$ moves in total.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-25T15:02:23.757Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

}

```

---

[View on CodeChef](https://www.codechef.com/problems/PAWNRUSH)