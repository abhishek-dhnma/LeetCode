h 1. It can be solved by any sorting algorithm Like : Bubble Sort, Insertion Sort, Selection Sort Etc. BUT they sort in O(N2) TC.
2. But we need to do this in O(N) TC, Simple Way is to count occunerces of 0s, 1s, 2nd in the array in one pass then
3. Add that amount in the array in the 0s first, then 1s the 2s in the array (override the values of array to number of occurenes of 0,1,2)
4. One For Way :  A rather straight forward solution is a two-pass algorithm using counting sort.
5. Second Way : Iterate the array counting number of 0's, 1's, and 2's. Overwrite array with the total number of 0's, then 1's and followed by 2's.
6. Third way : Dutch national flag problem : https://www.educative.io/answers/the-dutch-national-flag-problem-in-cpp
7. https://leetcode.com/problems/sort-colors/discuss/1256365/C%2B%2B-oror-Easy-to-understand-oror-full-explanation
