# [Distinct Pairs](https://www.codechef.com/JAN19B/problems/DPAIRS)

Chef has two integer sequences A1,A2,…,AN and B1,B2,…,BM. You should choose N+M−1 pairs, each in the form (Ax,By), such that the sums Ax+By are all pairwise distinct.<br />

It is guaranteed that under the given constraints, a solution always exists. If there are multiple solutions, you may find any one.

## Input
The first line of the input contains two space-separated integers N and M.<br />
The second line contains N space-separated integers A1,A2,…,AN.<br />
The third line contains M space-separated integers B1,B2,…,BM.<br />
## Output
Print N+M−1 lines. Each of these lines should contain two space-separated integers x and y denoting that you chose a pair (Ax+1,By+1).<br />

## Constraints
1≤N,M≤2⋅105<br />
|Ai|≤109 for each valid i<br />
|Bi|≤109 for each valid i<br />
A1,A2,…,AN are pairwise distinct<br />
B1,B2,…,BM are pairwise distinct<br />
## Subtasks
Subtask #1 (25 points): 1≤N,M≤103<br />
Subtask #2 (75 points): original constraints<br />

## Example Input
<pre>
3 2
10 1 100
4 3
</pre>
## Example Output
<pre>
2 1
0 0
1 0
0 1
</pre>
## Explanation
The chosen pairs and their sums are:<br />

A3+B2=100+3=103<br />
A1+B1=10+4=14<br />
A2+B1=1+4=5<br />
A1+B2=10+3=13<br />
Since all sums are distinct, this is a correct output.<br />

[Link to Editorial](https://discuss.codechef.com/problems/DPAIRS)
