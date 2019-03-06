# [Chef Restaurant](https://www.codechef.com/problems/CHEFRES)

Chef is a cook and he has recently opened a restaurant.</br>

The restaurant is open during N time intervals [L1,R1),[L2,R2),…,[LN,RN). No two of these intervals overlap — formally, for each valid i, j such that i≠j, either Ri<Lj or Rj<Li.</br>

M people (numbered 1 through M) are planning to eat at the restaurant; let's denote the time when the i-th person arrives by Pi. If the restaurant is open at that time, this person does not have to wait, but if it is closed, this person will wait until it is open. Note that if this person arrives at an exact time when the restaurant is closing, they have to wait for the next opening time.</br>

For each person, calculate how long they have to wait (possibly 0 time), or determine that they will wait forever for the restaurant to open.</br>

## Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.</br>
The first line of the input contains two space-separated integers N and M.</br>
N lines follow. For each valid i, the i-th of these lines contains two space-separated integers Li and Ri.</br>
M lines follow. For each valid i, the i-th of these lines contains a single integer Pi.</br>

## Output
For each test case, print M lines. For each valid i, the i-th of these lines should contain a single integer — the time person i has to wait, or −1 if person i has to wait forever.</br>

## Constraints
1≤T≤100</br>
1≤N,M≤105</br>
1≤Li<Ri≤109 for each valid i</br>
1≤Pi≤109 for each valid i</br>
the intervals are pairwise disjoint</br>
the sum of N for all test cases does not exceed 3⋅105</br>
the sum of M for all test cases does not exceed 3⋅105</br>

## Subtasks
**Subtask #1 (30 points):**

the sum of N for all test cases does not exceed 1,000</br>
the sum of M for all test cases does not exceed 1,000</br>
**Subtask #2 (70 points):** original constraints</br>

## Example Input
<pre>
1
4 5
5 7
9 10
2 3
20 30
5
6
7
35
1
</pre>
## Example Output
<pre>
0
0
2
-1
1
</pre>

[Link to Editorial](https://discuss.codechef.com/problems/CHEFRES)
