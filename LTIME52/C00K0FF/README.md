# [Chef and Cook-Off Contests](https://www.codechef.com/LTIME52/problems/C00K0FF)

Chef wants to prepare a Cook-Off contest with 5 problems chosen from a set of N problems. He has marked the difficulty of each problem within a range identified by one of the following strings: "cakewalk", "simple", "easy", "easy-medium", "medium", "medium-hard", "hard". According to this page, a Cook-Off contest must have problems of the following difficulties:</br>

<ul>
<li>exactly one "cakewalk";
<li>exactly one "simple";
<li>exactly one "easy";
<li>one "easy-medium" or one "medium";
<li>one "medium-hard" or one "hard".
</ul>
Given the information about the N problems, can you advise Chef if it's possible to pick 5 problems and form a valid Cook-Off contest?</br>

## Input
The first line of input contains one integer T denoting the number of test cases.</br>
T test cases follow.</br>
The first line of each test case contains a single integer N.</br>
Then N lines follow; the i-th line contains a single string si, denoting the difficulty of the i-th problem.</br>

## Output
For each test case, output "Yes" if it's possible to pick 5 problems and form a valid Cook-Off contest; otherwise, output "No".</br>

## Constraints
1 ≤ T ≤ 100000</br>
5 ≤ N ≤ 100000</br>
sum of N in all test cases ≤ 600000</br>
si can only be one of the following strings:</br>
"cakewalk"</br>
"simple"</br>
"easy"</br>
"easy-medium"</br>
"medium"</br>
"medium-hard"</br>
"hard"</br>
**Subtask #1 (11 points):**</br>

N = 5</br>
**Subtask #2 (27 points):**

5 ≤ N ≤ 15</br>
T ≤ 100</br>
**Subtask #3 (62 points):**</br>

original constraints</br>

## Example
## Input:
<pre>
3
5
easy
medium
medium-hard
simple
cakewalk
7
simple
simple
medium
medium
easy-medium
cakewalk
easy
7
cakewalk
simple
easy
easy-medium
medium
medium-hard
hard
</pre>
## Output:
<pre>
Yes
No
Yes
</pre>

## Explanation
**Example case 2:** There are neither problems of "medium-hard" level nor "hard" level, so it's impossible to form a Cook-Off contest.</br>

