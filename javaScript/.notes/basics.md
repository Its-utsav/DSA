# Basics 

- [Basics](#basics)
  - [Time and space complexity](#time-and-space-complexity)
    - [some common Big O notations](#some-common-big-o-notations)
    - [how to calculate TC and SC](#how-to-calculate-tc-and-sc)
    - [hakes of Big O notions](#hakes-of-big-o-notions)
  - [Be a Problem Solver](#be-a-problem-solver)
    - [Some Problem with simple solution](#some-problem-with-simple-solution)
  - [some common problem solving patterns or approach](#some-common-problem-solving-patterns-or-approach)
    - [Frequency Counter](#frequency-counter)
    - [Multiple Pointer](#multiple-pointer)
    - [Sliding Window](#sliding-window)
    - [Divide and Conquer](#divide-and-conquer)


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

- Explore the Examples
1. start with some simple example
2. progress the some complex example
3. go for empty than invalid input


### Some Problem with simple solution

1. count the character in string
   -----
1. For this problem first question should be that is space , special character will count ?
2. What is some character have different case eg 'H' in _upper case_ and same 'h' in _lower case_ than what should do ?
3. What if when wrong input like number , object etc instead of string  ?
   -----
1. We will count only alphanumeric values , all character in lower case
2. We count the each character in sting , put that count in object and return it.
----
- answer in simple languages
 ```txt
1. make an empty object that will return at end
2. loop over the each character
   2.1 if given character is a key in object than count value plus by one
   2.2 if give character not in object than add that character in object as key and set its value as 1
   2.3 if given character is not a alphanumeric than ignore that character 
3. return that object 
```
1. first solution
```js
   function countChar(str) {
   if (typeof str != 'string')
      return `function input should be string but got ${typeof str}`;
   let result = {};
   let strLen = str.length;
   for (let i = 0; i < strLen; i++) {
      let char = str[i].toLowerCase()
      if (result[char] > 0) {
            result[char]++;
      } else {
            result[char] = 1;
      }
   }
   return result;
   }
   console.log(countChar(' '));
```
2. second solution
   1. we can use for... of loop 
   2. here might be regex expression can be time consuming 
```js
function countChar(str) {
   let result = {};
      for (let char of str) {
         char = char.toLowerCase();
            if (/[a-z0-9]/.test(str)) {
               if (result[char] > 0) {
                  result[char]++;
               } else {
                  result[char] = 1;
            }
         }
      }
   return result;
}
console.log(countChar('Utsav'));
 ``` 
- may be sometime js regex expression have some performs issue
- alternatively we can use character code of a characters with the help of `charCodeAt(position Default 0)`
```js

function isAlphaNumeric(char) {
    let charCode = char.charCodeAt(0);

    if (
        !(charCode >= 48 && charCode <= 57) &&
        !(charCode >= 65 && charCode <= 90) &&
        !(charCode >= 97 && charCode <= 122)
    ) {
        return false;
    }
    return true;
}

function countChar(str) {
    if (typeof str != 'string') {
        return `String required got ${typeof str}`
    }

    let lowerStr = str.toLowerCase();
    let result = {};
    for (let char of lowerStr) {
        if (isAlphaNumeric(char)) {
            if (result[char] > 0) {
                result[char]++
            } else {
                result[char] = 1;
            }
        }
    }
    return result;
}
console.log(countChar('Utsav Dhimmar'));

```

## some common problem solving patterns or approach
1. once whenever new problem come use above step , try to solve with some examples
2. master some common problem , we can solve many problem with mastering some common problem _not we can't solve every problem_

- list of some common problem solving patterns
- some have different name , some pattern don't have name , some name are just for writing purpose 
1. [Frequency Counter](#frequency-counter)
2. [Multiple Pointer](#multiple-pointer)
3. [Sliding Window](#sliding-window)
4. [Divide and Conquer](#divide-and-conquer)
5. Dynamic Programming
6. Greedy Algorithm
7. Backtracking Algorithm
8. **many more....**


### Frequency Counter
- most help way to solve problem in computer science
- commonly used with array or string
- Named Frequency Counter because when we use it we create an object or a set , along with how many time element appeared in array or string, the element usually key and value is that how many time that element appeared .
- where we use ?
- compare data in some way example , string anagram , compare array with array some way  
- why we use it ?
- it often used when we need to avoid nested loop resulting reducing the time complexity of program
- With this pattern we can solve problem that have $O(n^2)$ complexity  , we can down that time complexity to $O(n)$
- It can be apply to the string due to string is an array of a character , so we can performs operation using with their index .
1. ans for this [leetcode](https://leetcode.com/problems/uncommon-words-from-two-sentences/)

```js
/**
 * @param {string} s1
 * @param {string} s2
 * @return {string[]}
 */
var uncommonFromSentences = function(s1, s2) {
    // if string is empty
    if(s1.length === 0 && s2.length === 0 ) return [];
    // any one string length is 0 than return other string
    if(s1.length === 0 && s2.length !== 0 ) return s2.split(' ');
    if(s2.length === 0 && s1.length !== 0 ) return s1.split(' ');
    // frequency counter;
    const freqCounter = {};

    const firstString = s1.split(' ');
    const secondString = s2.split(' ');

    for(let char of firstString){
        if(freqCounter[char]) freqCounter[char]++;
        else freqCounter[char] = 1;
    }

    for(let char of secondString){
        if(freqCounter[char]) freqCounter[char]++;
        else freqCounter[char] = 1;
    }
    let arr = [];


    for(let key in freqCounter){
        if(freqCounter[key] == 1){
            arr.push(key)
        }
    }
    return arr;
};
```

2. write a function called `same` , which accept two array . the function should return `true` if every value in the array have has it's corresponding value squared in the second array. The frequency of the value must be same
- ans 1 with two loops complexity $O(n)$
```js
function same(arr1, arr2) {
    if (arr1.length !== arr2.length) false;
    for (let i = 0; i < arr1.length; i++) {
        let correctIndex = arr2.indexOf(arr1[i] ** 2);
        if (correctIndex === -1) {
            return false;
        }
        arr2.splice(correctIndex, 1);
    }
    return true;
}
console.log(same([1, 2, 3], [1, 4, 9]));
``` 
- ans 2 with this pattern
```txt
1. check both array are same other wise return false
2. create an empty object for both array
3. loop on first array
   3.1 if frequency in obj than its value plus by one
   3.2 if frequency in obj than its value plus set by one
4. loop on second array 
   4.1 if frequency in obj than its value plus by one
   4.2 if frequency in obj than its value plus set by one
5. loop on object (first frequency)
   5.1 if current frequency squared not value is not in second frequency than return false
   5.2 if current frequency squared and in second frequency object's key is not equal than return false
6. return true if all the above condition fail 
```

```js
function same(arr1,arr2){
   if(arr1.length != arr2.length) return false;

   let f1 = {},f2 = {};

   for(let i of arr1){
      f1[i] ? f1[i]++ : f1[i] = 1;
   }

   for(let i of arr2){
      f2[i] ? f2[i]++ : f2[i] = 1;
   }

   for(let key in f1){
      if(!(key ** 2 in f2)){
         return false;
      }  

      if(f1[key ** 2] != f2[key]){
         return false;
      }
   }

   return true;
}
same([1,2,3][1,4,9]);
```
3. Given two strings, write a function to determine if the second string is an anagram of the first. An anagram is a word, phrase, or name formed by rearranging the letters of another, such as cinema, formed from iceman.  
- with frequency counter 
```js
function validAnagram(str1, str2) {
    // check th string
    if (typeof str1 !== 'string' || typeof str2 !== 'string') {
        return Error(`Need String but ${typeof str1 == 'string' ? 'got ' + typeof str2 : 'got ' + typeof str1}`);
    }

    if (str1.length !== str2.length) {
        return false;
    }

    let charFrequency = {};

    for (let char of str1) {
        charFrequency[char] ? charFrequency[char]++ : charFrequency[char] = 1;
    }

    for (let char of str2) {
        if (!charFrequency[char]) {
            return false;
        }
        charFrequency[char]--;
    }

    return true;
}
```

### Multiple Pointer
- for this approach may other name available 
- use multiple pointer (2 or more than 2)
- specially for `array` even `string` or `liked list` type data structure (linear)
- use multiple pointer to traverse the data structure , majority time all pointer will start for different positions and move as per condition 
- searching pair of values , or as per problem 

- TC $O(n)$ , CS $O(1)$

- example 
1. return that pair form array where sum of the two pair became zero 
```js
function findPair(arr) {
    let arrLength = arr.length
    if (arrLength < 2) return false;
    let start = 0;
    let end = arrLength - 1;
    while (start < end) {
        console.log(arr[start], arr[end]);
        let sum = arr[start] + arr[end];
        if (sum == 0) {
            return [arr[start], arr[end]]
        } else if (sum < 0) {
            start++;
        } else {
            end--;
        }
    }
    return false;
}
```

2. find unique in array
- ans 1
```js

function countUniqueInArr(arr) {
    if (arr.length === 0) return 0;

    /// solution 1
    // let p1 = 0;
    // let arrLength = arr.length;
    // let uniqueCount = 0;
    // for (let p2 = 1; p2 < arrLength; p2++) {
    //     // console.log(arr[p1], arr[p2])
    //     if (arr[p1] != arr[p2]) {
    //         uniqueCount++;
    //     }
    //     p1++;
    // }
    // return uniqueCount;


    // solution 2
    let i = 0;
    for (let j = 1; j < arr.length; j++) {
        if (arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}

```

- ans 2 
```js

function countUniqueInArr(arr) {
    if (arr.length === 0) return 0;

    let p1 = 0;
    let arrLength = arr.length;
    let uniqueCount = 0;
    for (let p2 = 1; p2 < arrLength; p2++) {
        // console.log(arr[p1], arr[p2])
        if (arr[p1] != arr[p2]) {
            uniqueCount++;
        }
        p1++;
    }
    return uniqueCount;
}

```


### Sliding Window
- specially for `array` even `string` or `liked list` type data structure (linear)
- in this problem solving pattern we create a window(not a real one) that slide on over elements to perform the operation on subset of element effectively 
- some keyword to identify this technique `longest or shortest subrange or any value `
- with this pattern we can solve problem in TC $O(n)$ , SC $O(1)$ which may be solve in  TC $O(n^2)$ ot $O(2^n)$ CS

1. Write a function called `maxSubarraySum` which accepts an `array of integers` and a number called `n`. The function should calculate the `maximum sum of n consecutive elements in the array`.
- ans  TC $O(n^2)$ no sliding window
```js 
function maxSubarraySum(arr, n) {
    if (arr.length < n || arr.length == 0) {
        return null;
    }
    let max = -Infinity;
    let arrLength = arr.length;
    for (let i = 0; i < arrLength - 1; i++) {
        let temp = 0;
        for (let j = 0; j < n; j++) {
            temp += arr[i + j];
            console.log(temp);
        }
        if (temp > max) {
            max = temp;
        }
    }
    return max;
}
```

2. with sliding windows
- we subtract previous value(so second loop start from num not from `0` or `1`) and add next value 
- TC $O(n)$
```js

function maxSubarraySum(arr, n) {
    if (arr.length < n || arr.length == 0) return null
    let maxSum = 0;
    let tempSum = 0;
    for (let i = 0; i < n; i++) {
        maxSum += arr[i];
    }
    tempSum = maxSum;
    for (let i = n; i < arr.length; i++) {
        let afterNextAdd = tempSum - arr[i - n] + arr[i];
        maxSum = Math.max(afterNextAdd, tempSum);
    }

    return maxSum;
}
```

### Divide and Conquer
- Divide Problem into smaller subproblem instead of solving  of large problem solution we solve subproblem solution and combine the solution of subproblem to solve larger problem .
- It has 3 stages 
- 1. `Divide`  Divide into subproblem
- 2. `Conquer` - solve that subproblem
- 3. `Merge` - combine that subproblem
- It is Advanced type of pattern , we use many place
- On of the biggest example of the divide and conquer is [binary search] 
```js

function binarySearch(arr, n) {
    let start = 0;
    let end = arr.length - 1;


    while (start <= end) {
        let mid = Math.floor((end + start) / 2);

        if (arr[mid] === n) {
            return mid;
        } else if (arr[mid] > n) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return -1;
}
```