# [Coloring The Grid](https://www.codechef.com/LTIME65B/problems/CLORGIRD)

You are given a grid with N rows and M columns; each cell of this grid is either empty or contains an obstacle. Initially, all cells are colorless.<br/>

You may perform the following operation an arbitrary number of times (including zero): choose a 2×2 square in the grid and color all four of its cells. Each cell may be colored any number of times.<br/>

You want all empty cells to be colored and all cells containing obstacles to be colorless. Find out if this state can be achieved.<br/>

## Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.<br/>
The first line of each test case contains two space-separated integers N and M.<br/>
The following N lines describe the grid. Each of these lines contains a string with length M containing only characters '.' (denoting an empty cell) and '#' (denoting a cell with an obstacle).<br/>

## Output
For each test case, print a single line containing the string "YES" if it possible to color the grid in the required way or "NO" if it is impossible (without quotes).<br/>

## Constraints
1≤T≤10,000<br/>
2≤N,M≤103<br/>
the sum of N⋅M over all test cases does not exceed 5,000,000<br/>

## Subtasks
**Subtask #1 (30 points):** only the first row of the grid may contain obstacles<br/>

**Subtask #2 (70 points):** original constraints<br/>

## Example Input
<pre>
2
3 3
..#
...
...
3 3
...
.#.
...
</pre>

## Example Output
<pre>
YES
NO
</pre>

[Link to Editorial](https://discuss.codechef.com/problems/CLORGIRD)
