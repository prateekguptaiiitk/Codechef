# [Chef and Socks](https://www.codechef.com/LTIME33/problems/CHEFSOCK)

Today, Chef woke up to find that he had no clean socks. Doing laundry is such a turn-off for Chef, that in such a situation, he always buys new socks instead of cleaning the old dirty ones. He arrived at the fashion store with money rupees in his pocket and started looking for socks. Everything looked good, but then Chef saw a new jacket which cost jacketCost rupees. The jacket was so nice that he could not stop himself from buying it.</br>

Interestingly, the shop only stocks one kind of socks, enabling them to take the unsual route of selling single socks, instead of the more common way of selling in pairs. Each of the socks costs sockCost rupees.</br>

Chef bought as many socks as he could with his remaining money. It's guaranteed that the shop has more socks than Chef can buy. But now, he is interested in the question: will there be a day when he will have only 1 clean sock, if he uses a pair of socks each day starting tommorow? If such an unlucky day exists, output "Unlucky Chef", otherwise output "Lucky Chef". Remember that Chef never cleans or reuses any socks used once.</br>

## Input
The first line of input contains three integers — jacketCost, sockCost, money — denoting the cost of a jacket, cost of a single sock, and the initial amount of money Chef has, respectively.</br>

## Output
In a single line, output "Unlucky Chef" if such a day exists. Otherwise, output "Lucky Chef".</br>

## Constraints
1 ≤ jacketCost ≤ money ≤ 109</br>
1 ≤ sockCost ≤ 109</br>

## Example
## Input:
<pre>
1 2 3
</pre>

## Output:
<pre>
Unlucky Chef
</pre>

## Input:
<pre>
1 2 6
</pre>

## Output:
<pre>
Lucky Chef
</pre>

## Subtasks
**Subtask 1:** jacketCost, money, sockCost ≤ 103. Points - 20</br>
**Subtask 2:** Original constraints. Points - 80</br>

## Explanation
**Test #1:**

When Chef arrived at the shop, he had 3 rupees. After buying the jacket, he has 2 rupees left, enough to buy only 1 sock.</br>

**Test #2:**

Chef had 6 rupees in the beginning. After buying the jacket, he has 5 rupees left, enough to buy a pair of socks for 4 rupees.</br>

[Link to Editorial](http://discuss.codechef.com/problems/CHEFSOCK)
