# [Drumpf for President!](https://www.codechef.com/LTIME38/problems/STUDVOTE)

![alt text](https://codechef_shared.s3.amazonaws.com/upfiles/young-donald-trump-military-school.jpg)

Donald Drumpf has spent the entire summer lobbying to gather votes for the upcoming student government election. At his University, there are a total of N students. Each student in the university casts a vote. The size of student government is determined by the number of students that get at least K votes.</br>

Each person that receives at least K votes is given a post in the student government. The Dean noticed that every year, there are a few students who vote for themselves. He decided to add a rule to disqualify any such individuals who vote for themselves i.e they cannot be part of the student government.</br>

You are given an array A, where Ai denotes the person who the i-th person voted for. Can you compute the size of the student government?</br>

## Input
The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows.</br>

For each test case, first line consists of two space separated integers N, K.</br>

Second line consists of N space separated integers denoting the array A, where i-th integer denotes Ai.</br>

## Output
For each test case, output a single line containing an integer corresponding to the size of the student government.</br>

## Constraints
1 ≤ T ≤ 100</br>
1 ≤ K ≤ N</br>
1 ≤ Ai ≤ N</br>

## Subtasks
**Subtask #1: (30 points)**</br>
1 ≤ N ≤ 3</br>
**Subtask #2: (70 points)**</br>
1 ≤ N ≤ 100</br>

## Example
## Input:
<pre>
2
3 2
2 1 2
2 1
1 2
</pre>

## Output:
<pre>
1
0
</pre>

## Explanation
In first test case, there are 3 students. A student must receive at least 2 votes to be part of the student government. Student 1 votes for student 2, student 2 votes for student 1 and student 3 votes for student 2. Thus, Student 2 receives 2 votes and is the only one eligible for student government.</br>

In second test case, although both students receive the required amount of votes, they are both disqualified as they had voted for themselves. Thus, size of the student government is 0.</br>

[Link to Editorial](http://discuss.codechef.com/problems/STUDVOTE)

