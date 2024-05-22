# basics of maths

## TOC

1. [Count Digit](#count-digit)
2. [Reverse the Number](#reverese-the-number)
3. [Armstrong Number](#armstrong-number)
4. [Print All Divisor](#print-all-divisor)
5. [Euclidean Algo](#eucliden-algorithm)

## count digit

![count digit](.\images\count-digit.png)

1. N from user
2. go unitl n greater than xero
   a. n modules by 10
   b. count ++
   c. N divide by 10

```cpp
int count = 0;
while(n>0){
    lastDigit = n % 10;
    count++;
    n/=10;
}
```

## Reverese The Number and pailndrom

- half of the logic from above code (due to extreact number is reveres order)

```cpp
int revNum = 0;
while(n>0){
    lastDigit = n % 10;
    revNum = (revNum * 10) + lastDigit;
    n/=10;
}
```

- here for reversing we some how we mange to zero at last than we add num(lastDigit) ,only if number is positive
  n = 7889

0. revNum = 0;
1. 0 \* 10 + 9 = 9
2. 9 \* 10 + 8 = 98
3. 98 \* 10 + 7 = 987
4. 987 \* 10 + 7 = 9877

- for pailndrom number complare with original number (store copy into another variabel)

## Armstrong Number

- Algorithm:

Let the number of digits be n.
For every digit r in input number x, compute $\ r^{n}$.
If the sum of all such values is equal to x, then return true, else false.

$$
371= 3 ^ {3} + 7 ^ {3} + 1 ^ {3}
$$

$$
1634 = 1 ^ {4} + 6 ^ {4} + 3 ^ {4} + 4 ^ {4}
$$

## Print All Divisor

- let number is 9 so its divisors are 1,3,9
- let number is 36 so its divisors are 1,2,3,4,6,9,12,18,36
- check that number divisor by value of i and its remender is `0`

## prime Number

- if number have only two factors 1 and it self number

## GCD

- between two number maximum common factor
  num1 9 = 1,2,3,9
  num2 12 = 1,2,3,6,12

so GCD here will 3

## Eucliden Algorithm

- gcd can find with this formula

$$
gcd(a,b) = gcd(a-b,b)
$$

- more simpilfy

$$
gcd(a,b) = gcd(a \% b,b)
$$

- we can achivve with help of recursion or with looping
- keep finding gcd until one of the parameter either `a` or `b` became `0`
- example

a => 12 = 1,2,3,4,6,12
b => 9 = 1,2,3,9

$$
gcd(a,b) = gcd(a-b,b)
$$

$$
gcd(72,24) = gcd(48,24)
$$

$$
gcd(72,24) = gcd(24,24)
$$

$$
gcd(72,24) = gcd(0,24)
$$

- here we go gcd(72,24) = 24
