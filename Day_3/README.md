# Parkour Course
> There is a parkour course which is in the form of a 2D grid with R rows and C columns. There are several boxes of same height stacked on the cells of the grid. 
> People start from a cell and parkour their way upto the highest cell.
> But since this is a dangerous sport, a rule was set that people should not jump a height more than that of one box. 
> In order to follow this rule, all adjacent cells must have an absolute height difference of atmost 1 box. Adjacent cells are those that share a common side.
> Currently there are some boxes on the cells of the course already and they are cemented in place, therefore they cannot be removed. 
> You must add more boxes on the cells of the grid so that the rule is followed.

## Input Format
The first line of the input gives the number of test cases T. Each test case begins with a line with two integers R and C. 
Next there are R lines, each with C integers The j-th integer on the i-th line, P(i,j) represents how many boxes are initially there on the cell 
located at i-th row and j-th column of the grid.

## Constraints
- Memory limit: 512 MB
- Time limit: 2 seconds
- 0 ≤ P(i,j) ≤ 2*10^6, for all i, j
- Test Set 1
- 1≤ R,C ≤50
- Test Set 2
- 1≤ R,C ≤300

## Output Format
For each test case, output one line x, where x is the minimum number of boxes to be added so that people are safe.

## Sample Input
```cpp
3
1 3
3 4 3
1 3
3 0 0
3 3
0 0 0
0 2 0
0 0 0
```

## Sample Output
```cpp
0
3
4
```
