# [Smart Strategy](https://www.codechef.com/LTIME54/problems/SMRSTR)

Chef found a very useful open-source code for the current problem. Unfortunately, one fragment of code isn't optimized. Consider that problem: given an array D of size N and Q queries X to the following open-source code:</br>

<pre>
read X
for i = 1..N:
  X = floor(X / D[i])
print X
</pre>
Help Chef to optimize that code for all possible X, he will be very thankful :)</br>

## Input
The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows. The first line of each test case contains two integers - N and Q. The second line contains array D. The third line contains Q queries - X1, X2, ..., XQ.</br>
 
## Output
For every test case in single line output Q integers - for each Xi output result for this query.</br>
 
## Constraints
1 ≤ T ≤ 1000</br>
1 ≤ N, Q ≤ 105</br>
1 ≤ Xi, Di ≤ 109</br>
Sum of N over all test cases ≤ 3*105</br>
Sum of Q over all test cases ≤ 3*105</br>
 
## Subtasks
**Subtask #1: (25 points)** sum of N over all test cases ≤ 3*103 and sum of Q over all test cases ≤ 3*103</br>
**Subtask #2: (75 points)** Original constraints</br>

## Example
## Input:
<pre>
2
2 3
2 3
5 100 8
3 2
2 2 2
16 8
</pre>

## Output:
<pre>
0 16 1
2 1
</pre>

[Link to Editorial](https://discuss.codechef.com/problems/SMRSTR)