# Missing Launch Codes
ISRO is launching a rocket today. In order to do so they need the launch codes.
Launch Codes consist of a grid of alphabets and blocked characters. A code in the grid of launch codes is defined as maximal vertical or horizontal segments of letters. 
All codes are palindromes. Blocked characters are those cells in the grid which cannot be used to form a code.
Let L(i,j) represent the character on the i-th row and j-th column (where the top left corner is L(1,1)).
The launch code grid has R rows and C columns. Unfortunately some of the letters in the grid were lost. 
Using the property that the codes are palindromes, you must restore the maximum possible missing letters in the grid.

## Input Format
The first line of the input gives the number of test cases, T. T test cases follow. The first line of each test case contains two integers, R and C, 
representing the number of rows and columns in the grid, respectively. The next R lines represent the R rows of the grid. 
The i-th row consists of C characters representing L(i,1), L(i,2), …, L(i,M). Each character is one of the following:

- Capital Letter (A to Z)
- A dot (.) representing missing letter
- A hash (#) for blocked character

## Constraints
- Test Set 1:
    - T = 100
    - 1≤N,M≤50

- Test Set 2:
  - T = 5
  - 1≤N,M≤1000

## Output Format
For each test case, output one line containing y, where y is the number of empty white cells that were filled. 
Then, output R more lines representing the final grid, with the missing characters (.) replaced by capital letters (A-Z) where possible.

## Sample Input 
```cpp
2
2 2
A.
.#
4 6
A...#.
B##...
B.###.
A...#.
```

## Sample Output
```cpp
2
AA
A#
8
A..A#.
B##A.A
BB###A
ABBA#.
```
