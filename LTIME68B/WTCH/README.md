# [The Nights Watch](https://www.codechef.com/problems/WTCH)
There are N watchtowers built in a row. Each watchtower can only accommodate one person. Some of them are already occupied by members of the Night's Watch. Since the members of the Night's Watch do not get along, no two consecutive towers can be occupied at any moment.</br>

Arya heard that the wildlings are planning an attack. She is not satisfied by the current security, so she plans to place more members of the Night's Watch in the empty towers. What is the maximum number of people she can place in the towers such that no two consecutive towers are occupied afterwards? Note that Arya may not remove anyone from already occupied towers.</br>

## Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.</br>
The first line of each test case contains a single integer N.</br>
The next line contains a single string S with length N. For each valid i, the i-th character of this string is '1' if the i-th watchtower is initially occupied or '0' if it is empty.</br>

## Output
For each test case, print a single line containing one integer — the maximum number of people Arya can place in the towers.</br>

## Constraints
1≤T≤1,000</br>
1≤N≤106</br>
S contains only characters '0' and '1'</br>
initially, no two consecutive towers are occupied</br>
the sum of N over all test cases does not exceed 106</br>

## Subtasks
**Subtask #1 (20 points):** initially, all towers are empty</br>

**Subtask #2 (80 points):** original constraints</br>

## Example Input
<pre>
2
6
010001
11
00101010000
</pre>
## Example Output
<pre>
1
3
</pre>

[Link to Editorial](https://discuss.codechef.com/problems/WTCH)
