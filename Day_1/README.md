# Anti-palindromic index

> The “anti-palindromic index” of a string is defined as the number of indices i in the string such that S(i) != S(N-i+1) where 1<=i<=N/2, where N is the length of the string. > Given a string S of length N, consisting of uppercase letters, you are asked to convert it into a string with an anti-palindromic index of K. In one operation, you can change > any character in the string to any uppercase letter.

## Input Format

The first line of the input gives the number of test cases, T.

T test cases follow.

The first line of each test case contains two integers N and K.
The second line of each test case contains a string S of length N, consisting of uppercase letters.

## Constraints

- Memory limit: 1 GB.
- 1≤T≤100
- 0≤K≤N/2

## Output Format

For each test case, output one line containing y, where y is the minimum number of operations required to transform the given string S into a string with anti-palindromic index equal to K.

### Sample Input 0
```cpp
2
5 1
ABCAA
4 2
ABAA
```

### Sample Output 0
```cpp
0
1
```
