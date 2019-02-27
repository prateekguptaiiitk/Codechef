# [The Nights Watch](https://www.codechef.com/problems/WTCH)

Arya has a chessboard with N rows (numbered 1 through N) and N columns (numbered 1 through N); a square in row r and column c is denoted by (r,c).</br>

Arya has already placed K rooks on the chessboard in such a way that no two rooks attack each other. Note that two rooks attack each other if they are in the same row or in the same column and there is no rook between them. She is busy learning how to tame a dragon right now, so she asked you to place as many other rooks as possible on the chessboard in such a way that afterwards, no two rooks on the chessboard attack each other. Help Arya and choose the positions of these rooks.</br>

## Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.</br>
The first line of each test case contains two space-separated integers N and K.</br>
Each of the next K lines contains two space-separated integers r and c denoting that Arya placed a rook on the square (r,c).</br>

## Output
For each test case:</br>

Let's assume that you placed P rooks on squares (r1,c1),(r2,c2),…,(rP,cP).</br>
You should print a single line containing 2P+1 space-separated integers P,r1,c1,…,rP,cP.</br>
P must be maximum possible.</br>
If there are multiple possible answers, the sequence r1,c1,…,rP,cP should be lexicographically smallest.</br>

## Constraints
1≤T≤100</br>
1≤N≤106</br>
0≤K≤N</br>
1≤ri,ci≤N for each valid i</br>
no two initially placed rooks attack each other</br>
the positions of all initially placed rooks are pairwise distinct</br>
the sum of N over all test cases does not exceed 106</br>

## Subtasks
**Subtask #1 (10 points):**

T=10</br>
N≤8</br>
**Subtask #2 (20 points):**

T=10</br>
N≤1,000</br>
**Subtask #3 (70 points):** original constraints</br>

## Example Input
<pre>
2
4 2
1 4
2 2
4 0
</pre>
## Example Output
<pre>
2 3 1 4 3
4 1 1 2 2 3 3 4 4
</pre>

[Link to Editorial](https://discuss.codechef.com/problems/WTCH)
