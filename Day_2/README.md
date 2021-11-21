# Troublesome Members

> The mayor of a town called Quahog has been dealing with a problem. Recently, there have been far too many 
> disagreements and quarrels in the town, so much so that he has decided to split the town into two neighbourhoods 
> in order to separate troublesome members. The mayor needs your help in doing this task.

## Input Format
The first line of the input gives the number of test cases, T.
T test cases follow.
Each test case starts with a positive integer M on a line by itself -- the number of troublesome pairs in the town.
The next M lines each contain a pair of names, separated by a single space.

## Constraints
- Time limit: 2 seconds per test set.
- Memory limit: 512 MB.
1 ≤ T ≤ 100.
- Each member name will consist of only letters and the underscore character.
- Names are case-sensitive.
- No pair will appear more than once in the same test case.
- Each pair will contain two distinct citizens.
  - Small dataset
      1 ≤ M ≤ 10
  - Large dataset
      1 ≤ M ≤ 100

## Output Format
For each test case, output either "Yes" or "No" on a new line, depending on whether the residents of the town can be split into two 
groups with neither of the groups containing a troublesome pair.

## Sample Input 0
```cpp
2
1
Peter Joe
3
Peter Joe
Joe Chris
Chris Peter
```

Sample Output 0
```cpp
Yes
No
```
