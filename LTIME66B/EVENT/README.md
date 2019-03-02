# [Event](https://www.codechef.com/problems/EVENT)

Chef is a very experienced and well-known cook. He has participated in many cooking competitions in the past — so many that he does not even remember them all.</br>

One of these competitions lasted for a certain number of days. The first day of the competition was day S of the week (i.e. Monday, Tuesday etc.) and the last day was day E of the week. Chef remembers that the duration of the competition (the number of days between the first and last day, inclusive) was between L days and R days inclusive. Is it possible to uniquely determine the exact duration of the competition? If so, what is this duration?</br>

## Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.</br>
The first and only line of each test case contains two space-separated strings S and E, followed by a space and two space-separated integers L and R.</br>

## Output
For each test case, print a single line containing:</br>

the string "impossible" if there is no duration consistent with all given information</br>
the string "many" if there is more than one possible duration</br>
one integer — the duration of the competition, if its duration is unique</br>

## Constraints
1≤T≤10,000</br>
1≤L≤R≤100</br>
S is one of the strings "saturday", "sunday", "monday", "tuesday", "wednesday", "thursday" or "friday"</br>
E is one of the strings "saturday", "sunday", "monday", "tuesday", "wednesday", "thursday" or "friday"</br>

## Subtasks
**Subtask #1 (100 points):** original constraints</br>

## Example Input
<pre>
3
saturday sunday 2 4
monday wednesday 1 20
saturday sunday 3 5
</pre>

## Example Output
<pre>
2
many
impossible
</pre>

[Link to Editorial](https://discuss.codechef.com/problems/EVENT)
