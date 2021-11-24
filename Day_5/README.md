# Pharmacy
> In the town where you live, Quahog, there is a street with N clinics on it with a doctor in each. 
> This street has length N, and the N clinics are evenly placed along it, that is, the first clinic is at position 1, the second clinic is at position 2, and so on. 
> The distance between any pair of clinics i and j is |i−j|, where |x| denotes the absolute value of x.
> Some of these clinics have pharmacies in front of them. That means that the doctors of such clinics do not have to walk when they want to take their stock of medicines. 
> However, for the doctors in clinics that do not have a pharmacy in front of them, they have to walk towards some clinics that have a pharmacy in front of it, either to the left or to the right of their own clinic.
> To save time, every doctor always takes their stock from the pharmacy that is closest to their clinic. 
> If there are two pharmacies that are both the closest to a clinic, then the doctor can walk to any of them.
> Given the number of clinics N, and the description of which of these clinics have pharmacies in front of them, find out what is the sum of the distances that each doctor has to walk to take their stock of medicines. 
> You can assume that at least one clinic has a pharmacy in front of it.

## Input Format
The first line of the input gives the number of test cases, T. T test cases follow.
Each test case consists of two lines. The first line of each test case contains an integer N, denoting the number of clinics on the street. The second line of each test case contains a string S of length N, representing which clinics have pharmacies in front of them.
If the i-th character in string S is equal to 1, then it means that the i-th clinic has a pharmacy in front of it. Otherwise, if it is equal to 0, then it means that the i-th clinic does not have a pharmacy in front of it.

## Constraints
- Memory limit: 512 MB.
- The length of S is equal to N.
- Each character of S is either 0 or 1.
- There is at least one character 1 in S.
  - Test Set 1
  - 1≤T≤100
  - 1≤N≤100.
  - Test Set 2
  - 1≤T≤10
  - 1≤N≤5×10^5

## Output Format
For each test case, output one line containing y, where y is the sum of the distances that each doctor has to walk to take their stock of medicines.

## Sample Input 
```cpp
2
3
111
6
100100
```
 
## Sample Output 
```cpp
0
5
```
