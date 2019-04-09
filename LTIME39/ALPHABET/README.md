# [Studying Alphabet](https://www.codechef.com/LTIME39/problems/ALPHABET)

Not everyone probably knows that Chef has younder brother Jeff. Currently Jeff learns to read.<br/>

He knows some subset of the letter of Latin alphabet. In order to help Jeff to study, Chef gave him a book with the text consisting of N words. Jeff can read a word iff it consists only of the letters he knows.<br/>

Now Chef is curious about which words his brother will be able to read, and which are not. Please help him!<br/>

## Input
The first line of the input contains a lowercase Latin letter string S, consisting of the letters Jeff can read. Every letter will appear in S no more than once.<br/>

The second line of the input contains an integer N denoting the number of words in the book.<br/>

Each of the following N lines contains a single lowecase Latin letter string Wi, denoting the ith word in the book.<br/>

## Output
For each of the words, output "Yes" (without quotes) in case Jeff can read it, and "No" (without quotes) otherwise.<br/>

## Constraints
1 ≤ |S| ≤ 26<br/>
1 ≤ N ≤ 1000<br/>
1 ≤ |Wi| ≤ 12<br/>
Each letter will appear in S no more than once.<br/>
S, Wi consist only of lowercase Latin letters.<br/>

## Subtasks
**Subtask #1 (31 point):** |S| = 1, i.e. Jeff knows only one letter.<br/>
**Subtask #2 (69 point)	:** no additional constraints<br/>

## Example
## Input:
<pre>
act
2
cat
dog
</pre>

## Output:
<pre>
Yes
No
</pre>

## Explanation
The first word can be read.<br/>

The second word contains the letters d, o and g that aren't known by Jeff.<br/>

[Link to Editorial](http://discuss.codechef.com/problems/ALPHABET)
