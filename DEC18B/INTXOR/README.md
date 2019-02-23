# [Chef and Interactive XOR](https://www.codechef.com/DEC18B/problems/INTXOR)

This is an interactive problem.<br />

Chef and Cheffa are playing a game. Chef has a sequence of positive integers a1,a2,…,aN; Cheffa should find the values of all elements of this sequence. Cheffa may ask Chef at most N questions. In each question, Cheffa tells Chef 3 distinct indices i, j and k, and Chef responds with an integer ai⊕aj⊕ak (⊕ denotes bitwise XOR).<br />

Also, Chef has an additional condition: for each index x, x may appear in all questions in total at most 3 times.<br />

You should play the game for Cheffa; the grader plays for Chef. Find the sequence a!<br />

## Interaction
First, you should read a line containing a single integer T denoting the number of test cases.<br />
For each test case, you should start by reading a line containing a single integer N.<br />
To ask a question, you should print a line containing four space-separated integers 1, i, j and k (1≤i,j,k≤N; i≠j, j≠k, k≠i). Then, you must read a line containing a single integer: the answer to your question or −1 if the question is invalid or you asked more than N questions.<br />
To finish solving a test case, you should print a single line containing N+1 space-separated integers 2, a1,a2,…,aN. Then, you must read a line containing a single integer: 1 if your output is correct or −1 if it is incorrect.<br />
Note that when you receive an answer −1, you should immediately terminate your program to receive a Wrong Answer verdict; otherwise, you may receive any verdict. Don't forget to flush the output after printing each line!<br />

## Constraints
1≤T≤20<br />
8≤N≤5⋅104<br />
1≤ai≤230 for each valid i<br />
the sum of N over all test cases does not exceed 2⋅105<br />

## Subtasks
<b>Subtask #1 (10 points):</b> i=j, j=k or k=i is allowed in each question<br />

<b>Subtask #2 (25 points):</b> ai+1=ai+1 for each valid i<br />
<b>Subtask #3 (65 points):</b> original constraints<br />

## Example
<pre>
You                 Grader
                    1
                    4
1 1 1 1
                    4
1 2 2 2
                    9
1 3 3 3
                    10
1 4 4 4
                    11
2 4 9 10 11
                    1
</pre>

## Explanation
We use N=4 here for clarity; N≥8 in real test data. Note that this example would be invalid for subtasks 2 and 3.<br />

[Link to Editorial](https://discuss.codechef.com/problems/INTXOR)
