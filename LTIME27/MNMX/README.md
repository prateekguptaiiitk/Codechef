# [Minimum Maximum](https://www.codechef.com/LTIME27/problems/MNMX)

Chef loves to play with arrays by himself. Today, he has an array A consisting of N distinct integers. He wants to perform the following operation on his array A.<br/>

Select a pair of adjacent integers and remove the larger one of these two. This decreases the array size by 1. Cost of this operation will be equal to the smaller of them.<br/>
Find out minimum sum of costs of operations needed to convert the array into a single element.<br/>

## Input
First line of input contains a single integer T denoting the number of test cases. First line of each test case starts with an integer N denoting the size of the array A. Next line of input contains N space separated integers, where the ith integer denotes the value Ai.<br/>

## Output
For each test case, print the minimum cost required for the transformation.<br/>

## Constraints
1 ≤ T ≤ 10<br/>
2 ≤ N ≤ 50000<br/>
1 ≤ Ai ≤ 105<br/>

## Subtasks
**Subtask 1 :** 2 ≤ N ≤ 15 : 35 pts<br/>
**Subtask 2 :** 2 ≤ N ≤ 100 : 25 pts<br/>
**Subtask 3 :** 2 ≤ N ≤ 50000 : 40 pts<br/>

## Example
## Input
<pre>
2
2
3 4
3
4 2 5
</pre>

## Output
<pre>
3
4
</pre>

## Explanation
**Test 1 :** Chef will make only 1 move: pick up both the elements (that is, 3 and 4), remove the larger one (4), incurring a cost equal to the smaller one (3).<br/>

[Link to Editorial](http://discuss.codechef.com/problems/MNMX)
