# Basics 

- [Basics](#basics)
  - [Time and space complexity](#time-and-space-complexity)
    - [some common Big O notations](#some-common-big-o-notations)
    - [how to calculate TC and SC](#how-to-calculate-tc-and-sc)
    - [hakes of Big O notions](#hakes-of-big-o-notions)
  - [Be a Problem Solver](#be-a-problem-solver)


## Time and space complexity
- In coding world every problem have multiple solution some may be very fast and some very memory efficient , here Time and Space complexity came into the picture .
- moreover both ( Time and Space complexity ) are not depended on machine because every machine have different configuration so we can't compare both machine 
- we can't compare old windows machine vs new mac book machine .
- we need to write efficient solution for our problem 
- here efficiency have multiple meaning
1. Algorithm should be fast
2. Algorithm should use minimum memory
3. battery efficient or so may way to check efficiency of a program
- both's value are not measures in value
1. for TC
   1. Different machine will record different time
   2. Same machine will record different time
   3. Some algorithm may be very fast but they may consume lot of memory 
- here a simple function for sum of `N` number
1. more time consuming  
   1. time complexity - $O(n)$
   2. space complexity - $O(1)$
    ```js
    function sumOfN(n){
        let sum = 0;
        for(let i=0;i<=n;i++){
            sum+=i;
        }
        return sum;
    }
    ```
2. less time consuming
   1. time complexity - $O(1)$
   2. space complexity - $O(1)$ 
    ```js
    function sumOfN(n){
        return n * ( n + 1 ) / 2;
    }
    ```
- **Time Complexity** - It is a amount of time taken by algorithm to run.
- **Space Complexity** - Memory taken by Algorithm to complete the task.
- space complexity = input space + auxiliary space 
- _NOTE space complexity might be language dependent_
- in js number , boolean , are takes consonants space complexity where as array and object are linear space complexity
- we have some different notations to show time and space complexity 
1. `Big O notation` most focus , worst case
2. `Theta notation` average case
3. `Omega notations` Lower Bound
- most of time we use `Big O notation` to display the TC and SC.

### some common Big O notations
1. $O(1)$ - constant time
   1. accessing the any value at given index
2. $O(n)$ - linear time
   1. here n is input dependent
   2. eg. looping the array 
3. $O(log.n)$ - logarithm time
   1. binary search
4. $O(n^2)$ - quadratic time
   1. looping the nested array 
5. $O(n^3)$ - cubic time
   1. three nested loop


### how to calculate TC and SC
1. Always calculate TC and CS in worst case
2. Avoid constant
3. Avoid lower values

### hakes of Big O notions
1. Arithmetic Operations are always constant
2. Variable assignment are also constant
3. Access element in array using index and in object by key are constant
4. In loop the complexity are depends on length of loop not on what happened inside the loop


## Be a Problem Solver
1. Understand the Problem
2. Explore the concrete example
3. Break It down
4. Solve / simplify
5. Look back and refactor