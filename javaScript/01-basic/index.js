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

console.log(countChar('Utsav '));
