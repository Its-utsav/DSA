class MathsBasics {
  constructor(n) {
    this.n = Number(n);
  }

  countDigit() {
    let count = 0;
    let tempN = this.n;

    while (tempN > 0) {
      tempN = Math.floor(tempN / 10);
      count++;
    }
    return count;
  }

  checkArmstrong() {
    let num = this.n;
    let copyNum = num;
    let countDigit = String(num).length;
    let sum = 0;
    while (num > 0) {
      let lastDigit = num % 10;
      sum += lastDigit ** countDigit;
      num = parseInt(num / 10);
    }
    console.log(sum);
    return copyNum === sum ? true : false;
  }

  sortArr() {
    return this.sort((a, b) => a - b);
  }

  printiAllDivisor() {
    let num = this.n;
    let sqrtN = Math.sqrt(num);
    let divisors = [];
    for (let i = 1; i <= sqrtN; i++) {
      if (num % i === 0) {
        divisors.push(i);
        if (i !== num / i) {
          divisors.push(num / i);
        }
      }
    }
    divisors.sort((a, b) => a - b);
    console.log(divisors);
  }

  checkPrime() {
    let num = this.n;
    let sqrrN = Math.sqrt(num);
    if (num <= 1) return false;
    for (let i = 2; i <= sqrrN; i++) {
      if (num % i === 0) return false;
    }
    return true;
  }
}

let n = 11;

let x = new MathsBasics(n);

console.log(x.checkPrime());

// function countDigit(n) {
//   let count = 0;
//   while (n > 0) {
//     n = Math.floor(n / 10);
//     console.log(n);
//     count++;
//   }
//   pares;
//   return count;
// }

// console.log(countDigit(1234));

// function checkArmstrong(num) {
//   let copyNum = num;
//   let countDigit = String(num).length;
//   let sum = 0;
//   while (num > 0) {
//     let lastDigit = num % 10;
//     sum += lastDigit ** countDigit;
//     num = parseInt(num / 10);
//   }
//   return copyNum === sum ? true : false;
// }

// console.log(checkArmstrong(1634));
// log n

// print all divisors

// 36 = 1,2,3,4,6,9,12,18,36

// brute force TC O(N) space O(N)
// function printDivisors(num) {
//     for (let i = 1; i <= num; i++) {
//         if (num % i == 0) {
//             console.log(i);
//         }
//     }
// }

function printDivisors(num) {
  // O(sqrt(n))
  let sqrtN = Math.sqrt(num);
  let divisors = [];
  for (let i = 1; i <= sqrtN; ++i) {
    if (num % i == 0) {
      divisors.push(i);
      if (i != num / i) {
        divisors.push(num / i);
      }
    }
  }
  return divisors;
}

/**
 *
 * @returns []
 */
// O(n log n)
Object.prototype.sortArr = function () {
  return this.sort((a, b) => a - b);
};

// TC = O(sqrt(n))
// O(sqrt(n) log n)

// let ans = printDivisors(36).sortArr();

// for (let i of ans) {
//     console.log(i);
// }

// prime numbers
// number have only two factors 1, and it self

// brute force

function checkPrime(n) {
  // TC O(N)
  // let counter = 0;
  // for (let i = 1; i <= n; i++) {
  //     if (n % i === 0) {
  //         counter++;
  //     }
  // }
  // return counter === 2 ? true : false;

  // two
  // if (n <= 1) return false;
  // if (n <= 3) return true;
  let sqrtN = Math.sqrt(n);

  // for (let i = 2; i <= sqrtN; i++) {
  //     if (n % i === 0) {
  //         return false;
  //     }
  // }
  // return true;

  // three
  let count = 0;
  for (let i = 2; i <= sqrtN; i++) {
    if (n % i == 0) {
      count++;
      if (i !== n / i) {
        count++;
      }
    }
  }

  return count === 2 ? true : false;
}

// let num = 23;
// let ans = checkPrime(num);

// if (ans) {
//     console.log(`${num} is prime number`);
// } else {
//     console.log(`${num} is not prime number`);
// }

// GCD of two Number

// 9 = 1,3,9
// 12 = 1,2,3,4,6,12 // GCD = 3

// GCD of two Number

// 9 = 1,3,9
// 12 = 1,2,3,4,6,12 // GCD = 3

function gcdFind(num1, num2) {
  let gcd = 1;

  // one

  //   for (let i = 1; i <= num1 && i <= num2; i++) {
  //     if (num1 % i == 0 && num2 % i == 0) {
  //       gcd = i;
  //     }
  //   }

  // second
  let minNum = Math.min(num1, num2);
  for (let i = 1; i <= minNum; i++) {
    if (num1 % i == 0 && num2 % i == 0) {
      gcd = i;
    }
  }
  return gcd;

  // TC O(min(n1,n2))
  // however their are efficent algo for big numbers

  //   Euclidean Algorithm
}

let n1 = 9;
let n2 = 12;

let ans = gcdFind(n1, n2);

// console.log(`GCD of ${n1} and ${n2} is ${ans}`);
