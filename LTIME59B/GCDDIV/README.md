# [The hardest gcd problem](https://www.codechef.com/LTIME59B/problems/GCDDIV)

You are given a sequence A1,A2,…,AN of positive integers and an integer K. You are allowed to perform the following operation any number of times (including zero):</br>

choose an index j between 1 and N inclusive</br>
choose a positive divisor d of Aj such that d≤K</br>
divide Aj by d</br>
Determine if it is possible to modify the sequence A in such a way that it would satisfy the following condition: there is no positive integer strictly greater than 1 which divides every element of A. (In other words, the greatest common divisor of all elements of A should be 1.)</br>

## Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.</br>
The first line of each test case contains two space-separated integers N and K.</br>
The second line contains N space-separated integers A1,A2,…,AN.</br>

## Output
For each test case, print a single line containing the string "YES" if it is possible to make the GCD of all elements of A equal to 1 or "NO" if it is impossible.</br>

## Constraints
1≤T≤10</br>
1≤N≤105</br>
1≤Ai≤109 for each valid i</br>
1≤K≤109</br>

## Subtasks
**Subtask #1 (30 points):**</br>

1≤N,K≤100</br>
1≤Ai≤100 for each valid i</br>

**Subtask #2 (70 points):** original constraints</br>

## Example Input
<pre>
2
3 6
10 15 30
3 4
5 10 20
</pre>

## Example Output
<pre>
YES
NO
</pre>

[Link to Editorial](https://discuss.codechef.com/problems/GCDDIV)
