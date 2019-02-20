# [Chef and Interactive Contests](https://www.codechef.com/DEC18B/problems/CHFINTRO)

"Every beginning has an end… and an editorial." - taran_1407<br />

What the hell are all these interactive problems? What does flushing output mean? So many questions… Chef explains it in an easy way: you must communicate with a grader program, which accepts your input only if you flushed the output.<br />

There is a contest with interactive problems where N people participate. Each contestant has a known rating. Chef wants to know which contestants will not forget to flush the output in interactive problems. Fortunately, he knows that contestants with rating at least r never forget to flush their output and contestants with rating smaller than r always forget to do it. Help Chef!<br />

## Input
The first line of the input contains two space-separated integers N and r.<br />
Each of the following N lines contains a single integer R denoting the rating of one contestant.<br />

## Output
For each contestant, print a single line containing the string "Good boi" if this contestant does not forget to flush the output or "Bad boi" otherwise.<br />

## Constraints
1≤N≤1,000<br />
1,300≤r,R≤1,501<br />

## Subtasks
<b>Subtask #1 (100 points):</b> original constraints<br />

## Example Input
<pre>
2 1500
1499
1501
</pre>

## Example Output
<pre>
Bad boi
Good boi
</pre>
[Link to Editorial](https://discuss.codechef.com/problems/CHFINTRO)
