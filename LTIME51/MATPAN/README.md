# [Mathison and Pangrams](https://www.codechef.com/LTIME51/problems/MATPAN)

Mathison recently inherited an ancient papyrus that contained some text. Unfortunately, the text was not a PANGRAM. Now, Mathison has a particular liking for holoalphabetic strings and the text bothers him. The good news is that Mathison can buy letters from the local store in order to turn his text into a pangram.</br>

However, each letter has a price and Mathison is not very rich. Can you help Mathison find the cheapest way to obtain a pangram?</br>

## Input
The first line of the input file will contain one integer, T, representing the number of tests.</br></br>

Each test will be formed from two lines. The first one contains 26 space-separated integers, representing the prices of all letters. The second will contain Mathison's initial text (a string of N lowercase letters).</br>

## Output
The output file will contain T lines, one for each test. Each line will contain the answer for the corresponding test.</br>

## Constraints and notes
1 ≤ T ≤ 10</br>
1 ≤ N ≤ 50,000</br>
All prices are natural numbers between 1 and 1,000,000 (i.e. 106).</br>
A pangram is a string that contains every letter of the Latin alphabet at least once.</br>
All purchased letters are added to the end of the string.</br>

## Subtaks
**Subtask #1 (30 points):**</br>

N = 1</br>
**Subtask #2 (70 points):**</br>

## Original constraints
## Example
## Input:
<pre>
2
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26
abcdefghijklmopqrstuvwz
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26
thequickbrownfoxjumpsoverthelazydog
</pre>

## Output:
<pre>
63
0
</pre>

## Explanation
**First test**
There are three letters missing from the original string: n (price 14), x (price 24), and y (price 25).</br>
Therefore the answer is 14 + 24 + 25 = 63.</br>

**Second test**
No letter is missing so there is no point in buying something. The answer is 0.</br>

[Link to Editorial](https://discuss.codechef.com/problems/MATPAN)
