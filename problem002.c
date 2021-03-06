#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*******************************************************************************
 * Project Euler Problem 2: Even Fibonacci Numbers
 * Each new term in the Fibonacci sequence is generated by adding the previous
 * two terms. By starting with 1 and 2, the first 10 terms will be: 1, 2, 3, 5,
 * 8, 13, 21, 34, 55, 89, ... By considering the terms in the Fibonacci sequence
 * whose values do not exceed four million, find the sum of the even-valued
 * terms.
 * Correct
 *******************************************************************************/

int main() {
  long long sum, n, curr, prev;

  prev = 1;
  curr = 2;
  sum = 2;

  while(1) {
    n = curr + prev;
    if(n > 4000000) {
      break;
    }
    prev = curr;
    curr = n;

    if(n%2 == 0) {
      sum += n;
    }
  }

  printf("sum: %llu\n", sum);

  return 0;
}
