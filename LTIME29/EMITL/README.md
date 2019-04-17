# [emitL](https://www.codechef.com/LTIME29/problems/EMITL)

You are given a string S constisting of uppercase Latin letters. Is it possible to reorder the characters in this string to get a string with prefix "LTIME" and suffix "EMITL"?</br>

We remind you that a prefix of a string is any substring which contains its first character, while a suffix of a string is substring containing its last character.</br>

## Input
The first line contains a single integer T, denoting the number of testcases. The descriptions of T test cases follow.</br>

The first and only line of the test case description has one non-empty string S consisting of uppercase Latin letters only.</br>

## Output
For each testcase output a single line containing the string "YES" (without quotes) if it's possible to reorder the characters to get the required prefix and suffix, or "NO" (without quotes) otherwise.</br>

## Constraints
**Subtask 1 (23 points) :** 1 ≤ T ≤ 100, 1 ≤ |S| ≤ 9</br>
**Subtask 2 (77 points) :** 1 ≤ T ≤ 1000, 1 ≤ |S| ≤ 100</br>

## Example
## Input:
<pre>
3
LTIMEAZAZAITLME
LLLTTTIIIMMMEEEAHA
LTIMEM
</pre>

## Output:
<pre>
YES
YES
NO
</pre>

## Explanation
**Test case 1:** we can permute the last 5 letters and get LTIMEAZAZAEMITL</br>

**Test case 2:** we have 3 copies of each of the letters 'L', 'T', 'I', 'M', 'E' so we can leave 5 of them in the beginning and move 5 of them to the end.</br>

**Test case 3:** we have only one letter 'L' so we can't make necessary prefix and suffix at the same time.</br>

[Link to Editorial](http://discuss.codechef.com/problems/EMITL)
