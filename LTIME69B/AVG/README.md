# [Average Number](https://www.codechef.com/LTIME69B/problems/AVG)

Chef had a sequence of positive integers with length N+K. He managed to calculate the arithmetic average of all elements of this sequence (let's denote it by V), but then, his little brother deleted K elements from it. All deleted elements had the same value.</br>

Chef still knows the remaining N elements — a sequence A1,A2,…,AN. Help him with restoring the original sequence by finding the value of the deleted elements or deciding that there is some mistake and the described scenario is impossible.</br>

Note that the if it is possible for the deleted elements to have the same value, then it can be proven that it is unique. Also note that this value must be a positive integer.</br>

## Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.</br>
The first line of each test case contains three space-separated integers N, K and V.</br>
The second line contains N space-separated integers A1,A2,…,AN.</br>
## Output
For each test case, print a single line containing one integer — the value of the deleted elements, or −1 if there is a mistake.</br>

## Constraints
1≤T≤100</br>
1≤N,K≤100</br>
1≤V≤105</br>
1≤Ai≤105 for each valid i</br>

## Subtasks
**Subtask #1 (100 points):** original constraints</br>

## Example Input
<pre>
3
3 3 4
2 7 3
3 1 4
7 6 5
3 3 4
2 8 3
</pre>
## Example Output
<pre>
4
-1
-1
</pre>

[Link to Editorial](https://discuss.codechef.com/problems/AVG)
