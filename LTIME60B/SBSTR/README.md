# [Count Substrings](https://www.codechef.com/LTIME60B/problems/SBSTR)

Let's call a string X interesting if it satisfies the following conditions:</br>

X contains at least K pairwise distinct characters</br>
for any two characters c1 and c2 which appear in X, the frequency (number of occurrences) of c1 in X is equal to the frequency of c2 in X</br>
You are given a string S. Compute the number of interesting substrings of S. Two substrings are considered different if they are located at different positions in S.</br>

## Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.</br>
The first and only line of each test case contains a string S, followed by a space and and integer K.</br>

## Output
For each test case, print a single line containing one integer — the number of interesting substrings.</br>

## Constraints
1≤T≤10</br>
1≤|S|≤7,000</br>
the sum of |S| in all test cases does not exceed 14,000</br>
|S| contains only lowercase English letters</br>
0≤K≤26</br>

## Subtasks
**Subtask #1 (20 points):** 1≤|S|≤100</br>
**Subtask #2 (20 points):**</br>

1≤|S|≤1,000
the sum of |S| in all test cases does not exceed 2,000
**Subtask #3 (60 points):** original constraints

## Example Input
<pre>
1
ababc 2
</pre>

## Example Output
<pre>
6
</pre>

## Explanation
**Example case 1:** The interesting substrings are "ab", "ba", "ab", "bc", "abab" and "abc".</br>

[Link to Editorial](https://discuss.codechef.com/problems/SBSTR)
