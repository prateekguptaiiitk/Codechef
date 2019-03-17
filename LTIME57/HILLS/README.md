# [Jumping the Hills](https://www.codechef.com/LTIME57/problems/HILLS)

There are N hills in a row numbered 1 through N from left to right. Each hill has a height; for each valid i, the height of the i-th hill is Hi. Chef is initially on the leftmost hill (hill number 1). He can make an arbitrary number of jumps (including zero) as long as the following conditions are satisfied:</br>

Chef can only jump from each hill to the next hill, i.e. from the i-th hill, he can jump to the i+1-th hill (if it exists).</br>
It's always possible to jump to a hill with the same height as the current hill.</br>
It's possible to jump to a taller hill if it's higher than the current hill by no more than U.</br>
It's possible to jump to a lower hill if it's lower than the current hill by no more than D.</br>
Chef can use a parachute and jump to a lower hill regardless of its height (as long as it's lower than the current hill). This jump can only be performed at most once.</br>
Chef would like to move as far right as possible. Determine the index of the rightmost hill Chef can reach.</br>

## Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.</br>
The first line of each test case contains three space-separated integers N, U and D.</br>
The second line contains N space-separated integers H1, H2, ..., HN.</br>

## Output
For each test case, print a single line containing one integer — the index of the rightmost reachable hill.</br>

## Constraints
1 ≤ T ≤ 100</br>
1 ≤ N ≤ 100</br>
1 ≤ U, D ≤ 1,000,000</br>
1 ≤ Hi ≤ 1,000,000 for each valid i</br>

## Subtasks
**Subtask #1 (100 points):** original constraints</br>

## Example
## Input:

<pre>
3
5 3 2
2 5 2 6 3
5 2 3
4 4 4 4 4
5 2 7
1 4 3 2 1
</pre>

## Output:
<pre>
3
5
1
</pre>

## Explanation
**Example case 1:** Chef can jump to second hill because it's higher by no more than U=3 than first hill, to jump to third hill Chef has to use parachute because it's lower than second hill by 3 which is more than D=2, Chef can't jump to fourth hill because it's higher than third hill by 4 which is more than U=3</br>

**Example case 2:** All hills are of the same height, so chef can reach the last hill with no problems.</br>

**Example case 3:** Chef can't jump to second hill because it's too high for him</br>

[Link to Editorial](https://discuss.codechef.com/problems/HILLS)
