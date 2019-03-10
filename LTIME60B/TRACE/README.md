# [Trace of Matrix](https://www.codechef.com/LTIME60B/problems/TRACE)

Chef is learning linear algebra. Recently, he learnt that for a square matrix M, trace(M) is defined as the sum of all elements on the main diagonal of M (an element lies on the main diagonal if its row index and column index are equal).</br>

Now, Chef wants to solve some excercises related to this new quantity, so he wrote down a square matrix A with size N×N. A square submatrix of A with size l×l is a contiguous block of l×l elements of A. Formally, if B is a submatrix of A with size l×l, then there must be integers r and c (1≤r,c≤N+1−l) such that Bi,j=Ar+i−1,c+j−1 for each 1≤i,j≤l.</br>

Help Chef find the maximum trace of a square submatrix of A.</br>

## Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.</br>
The first line of each test case contains a single integer N.</br>
N lines follow. For each i (1≤i≤N), the i-th of these lines contains N space-separated integers Ai,1,Ai,2,…,Ai,N denoting the i-th row of the matrix A.</br>

## Output
For each test case, print a single line containing one integer — the maximum possible trace.</br>

## Constraints
1≤T≤100</br>
2≤N≤100</br>
1≤Ai,j≤100 for each valid i,j</br>

## Subtasks
**Subtask #1 (100 points):** original constraints</br>

## Example Input
<pre>
1
3
1 2 5
6 3 4
2 7 1
</pre>

## Example Output
<pre>
13
</pre>

## Explanation
**Example case 1:** The submatrix with the largest trace is</br>
<pre>
6 3
2 7
</pre>
which has trace equal to 6+7=13. (This submatrix is obtained for r=2,c=1,l=2.)</br>

[Link to Editorial](https://discuss.codechef.com/problems/TRACE)
