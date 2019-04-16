# [Distinct Codes](https://www.codechef.com/LTIME31/problems/DISTCODE)

Sergey recently learned about country codes - two letter strings, denoting countries. For example, BY stands for Belarus and IN stands for India. Mesmerized by this new discovery, Sergey now looks for country codes everywhere!</br>

Sergey has recently found a string S consisting of uppercase Latin letters. He wants to find the number of different country codes that appear in S as contiguous substrings. For the purpose of this problem, consider that every 2-letter uppercase string is a valid country code.</br>

## Input
The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows.</br>

The first and only line of each test case contains a string S, consisting of uppercase Latin letters.</br>

## Output
For each test case, output a single line containing the number of different country codes appearing in the given string.</br>

## Constraints
1 ≤ T ≤ 100</br>
**Subtask 1 (35 points):** 2 ≤ |S| ≤ 3</br>
**Subtask 2 (65 points):** 2 ≤ |S| ≤ 104</br>

## Example
## Input:
<pre>
2
INBY
BYBY
</pre>

## Output:
<pre>
3
2
</pre>

## Explanation
**Example case 1.** The codes are IN, NB and BY.</br>

**Example case 2.** The codes are BY and YB.</br>

[Link to Editorial](http://discuss.codechef.com/problems/DISTCODE)
