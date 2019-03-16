# [Chef and friends](https://www.codechef.com/LTIME58B/problems/FRK)

Chef decided to find the connections with all of his friends in an unnamed social network. He calls a user of the social network his friend if there is a common substring of the string "chef" and the nickname of that user with length ≥ 2.</br>

Given a list of users of the social network, compute the number of Chef's friends.</br>

## Input
The first line of the input contains a single integer N denoting the number of users in the social network.</br>
N lines follow. Each of these lines contains a single string u denoting the nickname of one user.</br>

## Output
Print a single line containing one integer — the number of Chef's friends.</br>

## Constraints
1 ≤ N ≤ 5,000</br>
3 ≤ |u| ≤ 20</br>
each character of each user's nickname is either a lowercase English letter ('a'-'z') or '.'</br>
the first character of each user's nickname is a lowercase English letter</br>

## Subtasks
**Subtask #1 (100 points):** original constraints</br>

## Example

## Input:
<pre>
4
gennady.korotkevich
kefaa
fhlasek
chemthan
</pre>
## Output:
<pre>
3
</pre>

## Explanation
gennady.korotkevich is a friend to Chef because he has "ch" at the end of his nickname, which is also a substring of "chef" with length 2</br>
the common substring with kefaa is "ef" and the common substring with chemthan is "che"</br>
