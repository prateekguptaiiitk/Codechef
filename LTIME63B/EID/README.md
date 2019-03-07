# [Chef and Eid](https://www.codechef.com/LTIME63B/problems/EID)

During Eid, it's a tradition that each father gives his kids money which they can spend on entertainment.</br>

Chef has N coins; let's denote the value of coin i by vi. Since today is Eid, Chef is going to give one coin to each of his two children. He wants the absolute value of the difference between the values of coins given to the two children to be as small as possible, so that he would be as fair as possible.</br>

Help Chef by telling him the minimum possible difference between the values of the coins given to the two children. Of course, Chef cannot give the same coin to both children.</br>

## Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.</br>
The first line of each test case contains a single integer N.</br>
The second line contains N space-separated integers v1,v2,…,vN.</br>

## Output
For each test case, print a single line containing one integer — the minimum possible difference.</br>

## Constraints
1≤T≤100</br>
2≤N≤105</br>
the sum of N in all test cases does not exceed 5⋅105</br>
1≤vi≤106 for each valid i</br>

## Subtasks
**Subtask #1 (30 points):** the sum of N in all test cases does not exceed 2,000</br>
**Subtask #2 (70 points):** original constraints</br>

## Example Input
<pre>
2
3
1 4 2
3
1 3 3
</pre>

## Example Output
<pre>
1
0
</pre>

## Explanation
**Example case 1:** Chef gives the coin with value 1 to his first child and the coin with value 2 to the second child, so the answer is 2−1=1.</br>

**Example case 2:** Chef gives each of his children a coin with value 3, so the difference is 0.</br>

[Link to Editorial](https://discuss.codechef.com/problems/EID)
