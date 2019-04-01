# [Nothing in Common](https://www.codechef.com/LTIME44/problems/NOTINCOM)

Alice has quarreled with Berta recently. Now she doesn't want to have anything in common with her!</br>

Recently, they've received two collections of positive integers. The Alice's integers were A1, A2, ..., AN, while Berta's were B1, B2, ..., BM.</br>

Now Alice wants to throw away the minimal amount of number from her collection so that their collections would have no common numbers, i.e. there won't be any number which is present in both collections. Please help Alice to find the minimal amount of numbers she would need to throw away.</br>

## Input
The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows.</br>

The first line of each test case contains two space-separated integer numbers N and M denoting the amount of numbers in Alice's and Berta's collections respectively.</br>

The second line contains N space-separated integers A1, A2, ..., AN denoting the numbers of Alice.</br>

The third line contains M space-separated integers B1, B2, ..., BM denoting the numbers of Berta.</br>

## Output
For each test case, output a single line containing the minimal amount of numbers Alice needs to throw away from her collection so that she wouldn't have any numbers in common with Berta.</br>

## Constraints
1 ≤ Ai, Bi ≤ 106</br>
All numbers are distinct within a single girl's collection.</br>

## Subtasks

**Subtask #1 (47 points):** T = 25, 1 ≤ N, M ≤ 1000</br>
**Subtask #2 (53 points):** T = 5, 1 ≤ N, M ≤ 100000</br>

## Example
## Input:
<pre>
2
3 4
1 2 3
3 4 5 6
3 3
1 2 3
4 5 6
</pre>

## Output:
<pre>
1
0
</pre>

## Explanation
**Example case 1.** If Alice throws away the number 3 from her collection, she would obtain {1, 2} which is disjoint with {3, 4, 5, 6}.</br>

**Example case 2.** Girls don't have any number in common initially. So there is no need to throw away any number.</br>

[Link to Editorial](https://discuss.codechef.com/problems/NOTINCOM)
