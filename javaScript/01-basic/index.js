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


console.log(same([1, 2, 3], [1, 4, 9]));
console.log('lol')