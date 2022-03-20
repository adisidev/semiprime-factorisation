#include <iostream>
#include <math.h>

// TODO: Change to arbitrary-precision class for very large integers
typedef unsigned long long int big_num;

int main() {

  // Input big product of primes (like RSA key)
  big_num key;
  std::cout << "Please enter a product of two primes: ";
  std::cin >> key;

  // Check if even, return 2 * (key / 2)
  if (key % 2 == 0) {

    // Found key, print output and exit
    std::cout << (key / 2) << " * 2 = " << key << "\n";
    return 0;
  }

  // Find square root
  big_num one = sqrt(key);

  // If one is even, make it odd
  if (one % 2 == 0) {
    one += 1;
  }

  // Start with one = two
  big_num two = one;
  big_num prod = one * one;

  // Run until all relevant primes tested
  while (two > 2 && one < key) {
    if (prod > key) {
      prod = prod - one - one;
      two -= 2;
    } else if (prod < key) {
      prod = prod + two + two;
      one += 2;
    } else {

      // Found key, print output and exit
      std::cout << one << " * " << two << " = " << key << "\n";
      return 0;
    }
  }

  // Found key, print output and exit
  std::cout << key << " * 1 = " << key << "\n";
  return 0;
}
