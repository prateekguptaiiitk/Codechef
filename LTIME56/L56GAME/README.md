# [Chef and Game with Sequence](https://www.codechef.com/LTIME56/problems/L56GAME)

Chef has a sequence A containing N integers A1, A2, ..., AN.</br>

Chef is playing a game with this sequence. In this game, he may perform the following operation any number of times (including zero): Choose an arbitrary pair of elements from the sequence such that their sum is even, delete these two elements from the sequence and insert their sum into the sequence instead.</br>

The goal of the game is to minimise the number of elements in the sequence.</br>

Help Chef to play the game and find the minimum possible size of the sequence at the end of the game!</br>

## Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.</br>
The first line of each test case contains a single integer N.</br>
The second line contains N space-separated integers A1, A2, ..., AN.</br>

## Output
For each test case, print a single line containing one integer — the minimum possible final size of the sequence.</br>

## Constraints
1 ≤ T ≤ 100</br>
1 ≤ N ≤ 100</br>
1 ≤ Ai ≤ 1,000 for each valid i</br>

## Subtasks
**Subtask #1 (100 points):** original constraints</br>

## Example
## Input:
<pre>
2
2
1 2
5
7 4 3 2 6
</pre>

## Output:
<pre>
2
1
</pre>

## Example
**Example case 1:** There is no pair of elements with an even sum. Thus, the sequence must remain the same and the answer is 2.</br>

**Example case 2:** Chef can choose elements 7 and 3 in the first step, delete them and insert 10 in the sequence. Now all its elements are even and Chef can choose any two elements on each of the following steps of the game until the sequence contains only one element.</br>

[Link to Editorial](https://discuss.codechef.com/problems/L56GAME)
