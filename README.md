# semiprime-factorisation
 My initial stab at the prime number factorisation problem.

## Compile with:

```
clang++ factorise.cpp -std=c++20 -o prime
```

## Usage:

Let's try factorising 8876044532898802067.

```
./prime
Please enter a product of two primes: 8876044532898802067
5915587277 * 1500450271 = 8876044532898802067
```

The above ran in about 10 seconds on a M1 MacBook Air. I am unsure whether this is a common implementation, as I wanted see what implementation I could come up with without looking at the earlier implementations. At the moment, I am unsure about the time complexity, because my calculations seem to give an unrealistically low number. There is still scope for lots of improvement! Further, I am yet to implement it with a arbitrary-precision library for integers. I suspect that this may cause a reasonable slowdown.
