# basics of maths

## TOC

1. [Count Digit](#count-digit)
2. [Reverse the Number](#reverese-the-number)
3. [Armstrong Number](#armstrong-number)
4. [Print All Divisor](#print-all-divisor)

## count digit

![](https://cdn.discordapp.com/attachments/1242484160547913860/1242484254332682291/diagram-export-21-5-2024-7_56_56-pm.png?ex=664e0122&is=664cafa2&hm=87a0e0cff204cf0894611dc8662fc71c2f8583fbd46666482dea106bec548a0c&)

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
