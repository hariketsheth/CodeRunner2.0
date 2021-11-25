# Game of Strings
> Tyson and Ali are friends. They play a game together. They are given two strings S1 and S2 of lowercase english alphabets. 
> According to the game, an operation on string S1 is defined as changing a character in S1 to its alphabetic successor or predecessor 
> (for example, if a character in S1 is 'e', then in one operation it can changed to 'd' or 'f'). 
> This operation can be performed several times. The objective of th game is to find the minimum number of operations that are required 
> such that each letter in string S1 after applying the operations, is present in string S2. (Also note that the preceding alphabet of 'a' is 'z' 
> and succeeding alphabet of 'z' is 'a')

## Input Format
The first line of the input gives the number of test cases, T. T test cases follow. Each test case consists of two lines.
The first line of each test case contains the string S1 and the second line of each test case contains the string S2.

## Constraints
- Memory limit: 512 MB.
- 1≤T≤100.
- 1≤ the length of S ≤10^5.
- S1 only consists of lower case English letters.
- S2 only consists of distinct lower case English letters.
- The letters in string S2 are lexicographically sorted.

- Test Set 1
- Time limit: 4 seconds.
- The length of S2=1.

- Test Set 2
- Time limit: 4 seconds.
- 1≤ the length of S2≤26.

## Output Format
For each test case, output one line containing y, where y is the minimum number of operations that are required such that each letter in 
string S1 after applying the operations, is one of the characters in string S2.

## Sample Input
```cpp
2
abcd
a
pppp
p
```
## Sample Output
```cpp
6
0
```
