# [Strange Function](https://www.codechef.com/LTIME55/problems/ABX01)

As New Year is approaching, Salik is studying functions in order to sharpen his math skills. Instead of regular functions, he is studying a strange function F which operates on non-negative integers. The value of F(A) is obtained by the following process:</br>

<ul>
<li>Compute the sum of digits of A; let's denote this sum by S.
<li>If S is a single-digit integer, then F(A) = S.
<li>Otherwise, F(A) = F(S).
</ul>
It's guaranteed that this process correctly defines the function F.</br>

Since this problem was pretty straightforward, he invented a new problem: Given two integers A and N, compute F(AN). Can you help him solve this task?</br>

## Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.</br>
The first and only line of each test case contains two space-separated integers A and N.</br>

## Output
For each test case, print a single line containing one integer — the value of F(AN).</br>

## Constraints
1 ≤ T ≤ 105</br>
1 ≤ A, N ≤ 1018</br>

## Subtasks
**Subtask #1 (10 points):**

1 ≤ N ≤ 3</br>
1 ≤ A ≤ 105</br>
**Subtask #2 (20 points):**

1 ≤ N ≤ 100</br>
1 ≤ A ≤ 105</br>
**Subtask #3 (70 points):** original constraints</br>

## Example
## Input:
<pre>
3
5 2
7 2
127 1
</pre>

## Output:
<pre>
7
4
1
</pre>

## Explanation
**Example case 1:** F(5 · 5) = F(25) = F(2+5) = F(7) = 7</br>

**Example case 2:** F(7 · 7) = F(49) = F(4+9) = F(13) = F(1+3) = F(4) = 4</br>

**Example case 3:** F(127) = F(1+2+7) = F(10) = F(1+0) = F(1) = 1</br>

[Link to Editorial](https://discuss.codechef.com/problems/ABX01)
