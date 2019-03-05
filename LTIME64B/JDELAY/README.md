# [Judging Delay](https://www.codechef.com/problems/JDELAY)

You have been recently hired as a developer in CodeChef. Your first mission is to implement a feature that will determine the number of submissions that were judged late in a contest.</br>

There are N submissions, numbered 1 through N. For each valid i, the i-th submission was submitted at time Si and judged at time Ji (in minutes). Submitting and judging both take zero time. Please determine how many submissions received their verdicts after a delay of more than 5 minutes.</br>

## Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.</br>
The first line of the input contains a single integer N.</br>
N lines follow. For each valid i, the i-th of these lines contains two space-separated integers Si and Ji.</br>

## Output
For each test case, print a single line containing one integer — the number of submissions for which the judging was delayed by more than 5 minutes.</br>

## Constraints
1≤T≤100</br>
1≤N≤100</br>
1≤Si≤Ji≤300 for each valid i</br>

## Subtasks
**Subtask #1 (100 points):** original constraints</br>

## Example Input
<pre>
1
5
1 3
4 4
4 10
1 11
2 7
</pre>

## Example Output
<pre>
2
</pre>

## Explanation
**Example case 1:** The delays of the respective submissions are 2 minutes, 0 minutes, 6 minutes, 10 minutes and 5 minutes. Only submissions 3 and 4 are delayed by more than 5 minutes, hence the answer is 2.</br>

[Link to Editorial](https://discuss.codechef.com/problems/JDELAY)
