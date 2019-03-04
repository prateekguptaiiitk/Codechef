# [Beats and Pieces](https://www.codechef.com/problems/BPS)

Chef has an array of N integers [A1,A2,…,AN]. He wants to perform M operations; for each i (1≤i≤M), the i-th operation consists of reversing the subarray [Ali,…,Ari].</br>

Each operation should be applied exactly once. However, Chef does not remember the order in which they should be applied, so he wants to choose a uniformly random permutation of the M operations and apply them in that order.</br>

Let's denote by B the resulting array if the operations are unpermuted, i.e. applied in the order 1 through M. Find the probability that the resulting array (after Chef applies all operations in a random order) is equal to B. Specifically, this probability can be expressed as a fraction P/Q, where P and Q are coprime positive integers; compute P and Q.</br>

## Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.</br>
The first line of each test case contains two space-separated integers N and M.</br>
The second line contains N space-separated integers A1,A2,…,AN.</br>
M lines follow. For each valid i, the i-th of these lines contains two space-separated integers li and ri.</br>

## Output
Print a single line containing two integers P and Q, separated by a slash (the character '/').</br>

## Constraints
1≤T≤10</br>
1≤N≤10</br>
1≤M≤9</br>
1≤Ai≤109 for each valid i</br>
1≤li≤ri≤N for each valid i</br>

## Subtasks
**Subtask #1 (100 points):** original constraints</br>

## Example Input
<pre>
1
3 3
1 2 1
1 3
1 1
3 3
</pre>

## Example Output
<pre>
1/1
</pre>

## Explanation
**Example case 1:** Each order of the operations results in the same array B=[1,2,1].</br>

[Link to Editorial](https://discuss.codechef.com/problems/BPS)
