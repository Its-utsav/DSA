# Time and Space complexity

- lets say we have some code

```cpp
for(int i=0;i<5;i++){
    std::cout << i;
}
```

- so how we judge this code have 2 way in term of 2 differnt ways

1. [Time Complexity](#time-complexity)
2. [Space Complexity](#space-complexity)

## Time Complexity

- time complexity != time taken by program to execute means we do not compute time complexity in `1 Second` or `1 minutes` etc.

- but why understnd with example

- lets say some code execute on latest macbook in only 1 Second
- same code execute on old windows in 3 second
- in future may be new machine come with new specification than might be possibility that same code execute in less than 1 second
- here code execution time dependemt on system configuration

> that way `time complexity != time taken by program to execute`

- Defnition of TC .

> the rate at which time taken increase with respect to the input size .

> amount of time an algorithm takes to complete as a function of the size of its input

- explation
  input size `10`

- old windows machine

- new macbook machine

- more input may take more time increse .

- for represting Time Complextiy We use Big O notation

$$
O ( <time>)
$$

- TC for this code :-
- number of step for this code

```cpp
for(int i=0;i<5;i++){
    std::cout << i;
}
```

- this for loop run for 5 Time `i<5` 1 to 5 - 5

1. exctute block of code print i value
2. increment by `1`
3. check condition

$$
5 * 3 = 15
$$

- TC this code is

$$
O(15)
$$

- real TC is $\ O(1) $ (after all rules apply ignore constant)

- but we don't use number to represnt TC (what if `i<N` here we dont know value of `N`)

- we don't count manually step for compute TC this is where 3 rules come

1. Always Compute TC in Terms of Worst Case Scenario
2. Avoid Constant
3. Avoid lower Value

---

1. Always Compute TC in Terms of Worst Case Scenario

   - there are 3 differnt type of scenarios

   ```txt
   if marks > 25 -> print D
   else if marks > 45 -> print c
   else if marks > 65 -> print B
   else -> print A
   ```

   1. Best Case
      - when program takes least amount of time
      - marks 10 so in above `if..else` only first condition will match in first time
      - so TC for best case
        $\ O(2)$
      - $\ O(1) $ (after all rules apply ignore constant)
   2. Average Case

   - $$
         \frac {Best Case + Wrost Case}  {2}
     $$

   3. Wrost Case

   - when program takes maximum amount time to execute
   - marks 70 so in above `if..else` ladder 3 condition will check than print the grade so TC :- $\ O(4)$
   - $\ O(1) $ (after all rules apply ignore constant)
   - when will build any system for 1 million people not for 1 pesron (here pesronal system is exception)

2. Avoid Constant

- we have this TC expression

  $$
  O(4N^3 + 3N^2 + 8)
  $$

- assume N = $\ 10^5 $ (input size)

- so our expreesion looks like this

$$
    O(4 * 10^{15} + 3* 10 ^ {10}  + 8)
$$

- here 10 to the power 15 and 10 to the 10 is very high number so here `8` is nothing .

3. Avoid Lower Values

- $$
  O(4N^3 + 3N^2 + 8)
  $$

- $$
      O(4 * 10^{15} + 3* 10 ^ {10}  + 8)
  $$

- in this $\  10 ^ {15} $ > $\ 10 ^ {10}$
- here lower values or lower order like $\ 3N^2 $ and constant `8` has no more impact on overall Time Compleixty

- common time complexity noations

  | name                 | notaion                | Explation                                                                                    |
  | -------------------- | ---------------------- | -------------------------------------------------------------------------------------------- |
  | Constant time        | $\ O(1)$               | runtime is constant not impact of input                                                      |
  | Logarithmic time     | $\ O(log _ {n})$       | runtime increases logarithmically as the input size increases                                |
  | Linear time          | $\ O(n)$               | runtime increases linearly with the input size                                               |
  | Linearithmic Time    | $\ O(n-log-{n})$       | runtime increases in a combination of linear and logarithmic terms                           |
  | Quadratic Time       | $\ O(n^2)$             | runtime increases quadratically with the input size                                          |
  | Cubic Time           | $\ O(n^3) $            | runtime increases cubically with the input size                                              |
  | Polynomial Time      | $\ O(n^k) $            | runtime increases polynomially with the input size, where 𝑘 is a constant                    |
  | Exponential Time     | $\ O(2^n) $            | runtime doubles with each additional element in the input                                    |
  | Factorial Time       | $\ O(n!) $             | runtime increases factorially with the input size                                            |
  | Sublinear Time       | $\ O(sqrt {n})$        | runtime increases slower than the input size but faster than logarithmic time                |
  | Log-Logarithmic Time | $\ O (log(log-n)) $    | runtime increases very slowly, even more slowly than logarithmic time                        |
  | Constant Factors     | $\ O ( ⅽ \cdot f(n) )$ | Constants (such as 𝑐) are ignored in Big-O notation since they do not affect the growth rate |

## Space Complexity

- means all memory used by algorithm including
  1. Input Space - memory used to store input
  2. Auxiliary Space - extra memory used by algorithm to slove problem

```cpp
int sum(int a,int b){ // here a and b are input space
    int c = a + b; // here c is auxiliary space
    return c;
}
```

- SC for above code $\ O(1) $ (constant space) - The algorithm uses a fixed amount of space regardless of the input size

- Logarithmic Space $\ O(log-n)$ - The space used by the algorithm grows logarithmically with the input size

- linear space $\ O(n)$ - The space used by the algorithm grows linearly with the input size.

- Linearithmic Space $\ O(n-log-n)$ - The space used by the algorithm grows in a combination of linear and logarithmic terms

- Quadratic Space - $\ O(n^2)$ - The space used by the algorithm grows quadratically with the input size .

- Cubic Space - $\ O(n^3)$ - The space used by the algorithm grows cubically with the input size.

- Polynomial Space - $\ O(n^k)$ - The space used by the algorithm grows polynomially with the input size, where 𝑘 is a constant.

- Exponential Space - $\ O(2^n)$ - The space used by the algorithm grows exponentially with the input size.

- Factorial Space - $\ O(n!)$ - The space used by the algorithm grows factorially with the input size.
