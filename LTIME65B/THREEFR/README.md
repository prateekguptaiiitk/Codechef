# [Three Friends](https://www.codechef.com/problems/THREEFR)

There are three friends; let's call them A, B, C. They made the following statements:</br>

A: "I have x Rupees more than B."</br>
B: "I have y rupees more than C."</br>
C: "I have z rupees more than A."</br>
You do not know the exact values of x,y,z. Instead, you are given their absolute values, i.e. X=|x|, Y=|y| and Z=|z|. Note that x, y, z may be negative; "having −r rupees more" is the same as "having r rupees less".</br>

Find out if there is some way to assign amounts of money to A, B, C such that all of their statements are true.</br>

## Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.</br>
The first and only line of each test case contains three space-separated integers X, Y and Z.</br>

## Output
For each test case, print a single line containing the string "yes" if the presented scenario is possible or "no" otherwise (without quotes).</br>

## Constraints
1≤T≤1,000</br>
1≤X,Y,Z≤1,000</br>

## Subtasks
**Subtask #1 (30 points):**

1≤T≤30</br>
1≤X,Y,Z≤3</br>
**Subtask #2 (70 points):** original constraints</br>

## Example Input
<pre>
2
1 2 1
1 1 1
</pre>

## Example Output
<pre>
yes
no
</pre>

## Explanation
**Example 1:** One possible way to satisfy all conditions is: A has 10 rupees, B has 9 rupees and C has 11 rupees. Therefore, we have x=1, y=−2, z=1.</br>

**Example 2:** There is no way for all conditions to be satisfied.</br>

[Link to Editorial](https://discuss.codechef.com/problems/THREEFR)
