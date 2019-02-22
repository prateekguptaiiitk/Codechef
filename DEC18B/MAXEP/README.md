# [Max and Electric Panel](https://www.codechef.com/DEC18B/problems/MAXEP) 

This is an interactive problem.<br />

Max has an electrical panel. He knows that there is an integer x (1≤x≤N) such that if the panel is connected to voltage greater or equal to x, it will break. However, he does not know the exact value of x.<br />

You must help Max determine x. You may perform operations of two types:<br />

Connect the panel to voltage y, where y is an arbitrary integer between 1 and N inclusive. This operation costs 1 coin, and you may only perform it if the panel is not broken. After this operation, you find out whether the panel is broken.<br />
Fix the broken panel. This operation costs c coins.<br />
Each operation may be performed any number of times as long as you have enough coins. Initially, you have 1,000 coins.<br />

## Interaction
First, you should read a line containing two space-separated integers N and c.<br />
To perform an operation of the first type, you should print a line containing two space-separated integers 1 and y. Then, you must read a line containing a single integer: 0 if the panel is not broken after this operation, 1 if it is broken or −1 if the operation was invalid.<br />
To perform an operation of the second type, you should print a line containing a single integer 2.<br />
Finally, you should print a line containing two space-separated integers 3 and x.<br />
Don't forget to flush the output after printing each line!<br />

## Constraints
1≤N≤150,000<br />
1≤c≤150<br />

## Subtasks
<b>Subtask #1 (15 points):</b> 1≤N≤1,000
<b>Subtask #2 (25 points):</b> 1≤c≤50
<b>Subtask #3 (60 points):</b> original constraints

## Example
<pre>
You             Grader
                10 8
1 7
                1
2
1 5
                1
2
1 3
                0
1 4
                1
2
3 4
</pre>
[Link to Editorial](https://discuss.codechef.com/problems/MAXEP)
