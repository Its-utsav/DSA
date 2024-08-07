// count the character in string
/**
 * @description count the character in the string
 * @param { string} str
 * @returns object
 */
// function countChar(str) {
//     if (typeof str != 'string')
//         return `function input should be string but got ${typeof str}`;

//     let result = {};
//     let strLen = str.length;
//     for (let i = 0; i < strLen; i++) {
//         let char = str[i].toLowerCase()
//         if (result[char] > 0) {
//             result[char]++;
//         } else {
//             result[char] = 1;
//         }
//     }
//     return result;
// }

// function countChar(str) {
//     let result = {};
//     for (let char of str) {
//         char = char.toLowerCase();
//         if (/[a-z0-9]/.test(str)) {
//             if (result[char] > 0) {
//                 result[char]++;
//             } else {
//                 result[char] = 1;
//             }
//         }
//     }
//     return result;
// }

// function isAlphaNumeric(char) {
//     let charCode = char.charCodeAt(0);

//     if (
//         !(charCode >= 48 && charCode <= 57) &&
//         !(charCode >= 65 && charCode <= 90) &&
//         !(charCode >= 97 && charCode <= 122)
//     ) {
//         return false;
//     }
//     return true;
// }

// function countChar(str) {
//     if (typeof str != 'string') {
//         return `String required got ${typeof str}`
//     }

//     let lowerStr = str.toLowerCase();
//     let result = {};
//     for (let char of lowerStr) {
//         if (isAlphaNumeric(char)) {
//             if (result[char] > 0) {
//                 result[char]++
//             } else {
//                 result[char] = 1;
//             }
//         }
//     }
//     return result;
// }
// console.log(countChar('Utsav Dhimmar'));
/***
 * write a function called `same` , which accept two array . the function should return `true`  if every value in the array have has it's corresponding values squared in the second array.  The frequency of the value must be same.
 * @returns 
 * @param {Array<Number>} arr1 
 * @param {Array<Number>} arr2
 */

// nested loop
function same(arr1, arr2) {
    // if (arr1.length !== arr2.length) false;
    // for (let i = 0; i < arr1.length; i++) {
    //     let correctIndex = arr2.indexOf(arr1[i] ** 2);
    //     if (correctIndex === -1) {
    //         return false;
    //     }
    //     arr2.splice(correctIndex, 1);
    // }
    // return true;


    // Frequency Counter
    /***
     * 1. check both array are same other wise return false
     * 2. create an empty object for both array
     * 3. loop on first array
     *  3.1 if frequency in obj than its value plus by one
     *  3.2 if frequency in obj than its value plus set by one
     * 4. loop on second array 
     *  4.1 if frequency in obj than its value plus by one
     *  4.2 if frequency in obj than its value plus set by one
     * 5. loop on object (first frequency)
     *  5.1 if current frequency squared is not in second frequency than return false
     *  5.2 if current frequency squared and in second frequency object's key is not equal than return false
     * 6. return true if all the above condition fail 
     * 
    */
    if (arr1.length !== arr2.length) return false;

    // frequency
    let frequencyForArr1 = {};
    let frequencyForArr2 = {};


    for (let i of arr1) {
        frequencyForArr1[i] ? frequencyForArr1[i]++ : frequencyForArr1[i] = 1;
    }

    for (let i of arr2) {
        frequencyForArr2[i] ? frequencyForArr2[i]++ : frequencyForArr2[i] = 1;
    }
    console.log(frequencyForArr1, frequencyForArr2);

    for (let key in frequencyForArr1) {
        if (!(key ** 2 in frequencyForArr2)) {
            return false;
        }
        if (frequencyForArr1[key ** 2] !== frequencyForArr2[key]) {
            return false;
        }
    }

    return true;
}


// console.log(same([1, 2, 3], [1, 4, 9]));
function validAnagram(str1, str2) {
    // check th string
    if (typeof str1 !== 'string' || typeof str2 !== 'string') {
        return Error(`Need String but 'got ' ${typeof str1 == 'string' ? typeof str2 : typeof str1}`);
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
// console.log(validAnagram('pot', 'top'));

function findPair(arr) {
    let arrLength = arr.length
    if (arrLength < 2) {
        return false;
    }

    let start = 0;
    let end = arrLength - 1;

    while (start < end) {
        let sum = arr[start] + arr[end];
        if (sum == 0) {
            return [arr[start], arr[end]]
        } else if (sum < 0) {
            start++;
        } else {
            end--;
        }
    }
    return undefined;
}


// console.log(findPair([-4, -3]));


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

// console.log(countUniqueInArr([1, 2, 3, 4, 5, 6]));

function maxSubarraySum(arr, n) {
    if (arr.length < n || arr.length == 0) {
        return null;
    }
    // One brute force
    let max = -Infinity;
    let arrLength = arr.length;
    for (let i = 0; i < arrLength - 1; i++) {
        let temp = 0;
        for (let j = 0; j < n; j++) {
            temp += arr[i + j];
            console.log(` ${arr[i]} + ${arr[j]} ${temp}`);
        }
        if (temp > max) {
            max = temp;
        }
    }
    return max;
}


console.log(maxSubarraySum([4, 2, 1, 6, 2], 4))