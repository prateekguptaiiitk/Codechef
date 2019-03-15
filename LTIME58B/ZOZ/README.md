# [Magic Elements](https://www.codechef.com/LTIME58B/problems/ZOZ)

You are given an array A with size N and a number K. Let's call a position i (1 ≤ i ≤ N) valid if, after increasing Ai by K, it would be greater than the sum of all other elements in the array A.</br>

Determine the number of distinct valid positions.</br>

# Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.</br>
The first line of each test case contains two space-separated integers N and K.</br>
The second line contains N space-separated integers A1, A2, ..., AN.</br>

# Output
For each test case, print a single line containing one integer — the number of valid positions.</br>

# Constraints
1 ≤ T ≤ 100,000</br>
1 ≤ N ≤ 100,000</br>
1 ≤ K ≤ 109</br>
1 ≤ Ai ≤ 104 for each valid i</br>
1 ≤ sum of N over all test cases ≤ 100,000</br>

# Subtasks
**Subtask #1 (33 points):** sum of N over all test cases ≤ 5,000</br>

**Subtask #2 (67 points):** original constraints</br>

## Example
## Input:
<pre>
2
4 4
2 1 6 7
4 2
2 1 5 4
</pre>

## Output:
<pre>
1
0
</pre>

## Explanation
**Example case 1:** A1 + K = 6 isn't greater than A2 + A3 + A4 = 14, so position 1 isn't valid. A2 + K = 5 isn't greater than A1 + A3 + A4 = 15, so position 2 isn't valid. A3 + K = 10 isn't greater than A1 + A2 + A4 = 10, so position 3 also isn't valid. A4 + K = 11 is greater than A1 + A2 + A3 = 9. Therefore, there is only one valid position — position 4.</br>
