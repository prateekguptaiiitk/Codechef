# [Maximum Number](https://www.codechef.com/LTIME53/problems/MAXNUM3)

Given an integer A that contains n > 1 digits. You are asked to remove exactly one digit to make the result number is divisible by 6, also make it biggest possible.</br>

## Input
The first line contains an integer T, denotes the number of test cases. Each test case is described by an integer A in a single line.</br>

## Output
Each test case, output the answer on a single line (it's allowed to delete a digit such that the resulting number contains leading zeroes, you shouldn't remove them in this case). If it is impossible to make the result number satisfies the above condition, output -1.</br>

## Constraints
1 ≤ T ≤ 100</br>
2 ≤ n ≤ 105</br>
A will not contain leading zeroes</br>
the sum of n over all test cases ≤ 106</br>
 
## Subtasks:

**Subtask #1 (30 points):** the sum of n over all test cases ≤ 2000</br>
**Subtask #2 (70 points):** original constrains</br>

## Example
## Input:
<pre>
3
123
100222
10003
</pre>

## Output:
<pre>
12
00222
-1
</pre>

[Link to Editorial](https://discuss.codechef.com/problems/MAXNUM3)
