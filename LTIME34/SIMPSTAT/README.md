# [Simple Statistics](https://www.codechef.com/LTIME34/problems/SIMPSTAT)

Sergey has made N measurements. Now, he wants to know the average value of the measurements made.</br>

In order to make the average value a better representative of the measurements, before calculating the average, he wants first to remove the highest K and the lowest K measurements. After that, he will calculate the average value among the remaining N - 2K measurements.</br>

Could you help Sergey to find the average value he will get after these manipulations?</br>

## Input
The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows.</br>

The first line of each test case contains two space-separated integers N and K denoting the number of measurements and the number of the greatest and the lowest values that will be removed.</br>

The second line contains N space-separated integers A1, A2, ..., AN denoting the measurements.</br>

## Output
For each test case, output a single line containing the average value after removing K lowest and K greatest measurements.</br>

Your answer will be considered correct, in case it has absolute or relative error, not exceeding 10-6.</br>

## Constraints
1 ≤ T ≤ 100</br>
1 ≤ N ≤ 104</br>
0 ≤ 2K < N</br>
-106 ≤ Ai ≤ 106</br>

## Subtasks
**Subtask #1 (50 points):** K = 0</br>
**Subtask #2 (50 points):** no additional constraints</br>

## Example
## Input:
<pre>
3
5 1
2 9 -10 25 1
5 0
2 9 -10 25 1
3 1
1 1 1
</pre>

## Output:
<pre>
4.000000
5.400000
1.000000
</pre>

## Explanation
**Example case 1.** After removing 1 greatest and 1 lowest measurement, we get the set {2, 9, 1}. The average value in this set is (2+9+1)/3=4.</br>

**Example case 2.** The average value in the set {2, 9, -10, 25, 1} is (2+9-10+25+1)/5=5.4.</br>

**Example case 3.** After removing the 1 largest and smallest measurements, Sergey will be left with only one measurement, i.e. 1. Average of this is 1 itself.</br>

[Link to Editorial](http://discuss.codechef.com/problems/SIMPSTAT)
