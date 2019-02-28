# [Age Calculator](https://www.codechef.com/problems/AGECAL)

Chef's planet is called Javad. A year on Javad has N months numbered 1 through N. For each valid i, the i-th month has ai days numbered 1 through ai.</br>

On Javad, years that are divisible by 4 are leap years - the last month of each leap year is one day longer (it has aN+1 days).</br>

You are given Chef's birth date and the current date. Find the age of Chef in days, i.e. the number of days between Chef's birth date and the current date inclusive.</br>

## Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.</br>
The first line of each test case contains a single integer N.</br>
The second line contains N space-separated integers a1,a2,…,aN.</br>
The third line contains three space-separated positive integers yb, mb and db denoting the year, month and day of Chef's birth respectively.</br>
The fourth line contains three space-separated positive integers yc, mc and dc denoting the current year, month and day respectively.</br>

## Output
For each test case, print a single line containing one integer — Chef's age in days.</br>

## Constraints
1≤T≤100</br>
1≤N≤10,000</br>
1≤ai≤10,000 for each valid i</br>
1≤yb,yc≤100,000</br>
1≤mb,mc≤N</br>
db will be less than or equal to the days of the mb month of the yb year.</br>
dc will be less than or equal to the days of the mc month of the yc year.</br>
the current date is equal to or greater than Chef's birth date</br>

## Subtasks
**Subtask #1 (10 points):**</br>

1≤yb,yc,N≤1,000</br>
1≤ai≤100 for each valid i</br>
**Subtask #2 (90 points):** original constraints</br>

## Example Input
<pre>
4
5
1 2 3 4 5
2 1 1
3 5 1
2
3 3
1 1 1
2 2 2
2
1 1
3 1 1
3 2 1
5
1 4 3 4 6
3 5 6
10 1 1
</pre>
## Example Output
<pre>
26
11
2
112
</pre>

[Link to Editorial](https://discuss.codechef.com/problems/AGECAL)
