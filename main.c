#include "BigInteger.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  struct BigInteger num0 = initialize("10000300000");
  struct BigInteger num01 = initialize("1500");

  struct BigInteger sum0 = add(num0, num01);
  struct BigInteger diff0 = sub(num0, num01);
  struct BigInteger mul0 = mul(num0, num01);
  struct BigInteger div0 = div1(num0, num01);
  struct BigInteger mod0 = mod(num0, num01);

  printf("Case 0:\n");
  printf("First number: ");
  display(num0);
  printf("\n");
  printf("Second number: ");
  display(num01);
  printf("\n");
  printf("Addition: ");
  display(sum0);
  printf("\n");
  printf("Subtraction: ");
  display(diff0);
  printf("\n");
  printf("Multiplication: ");
  display(mul0);
  printf("\n");
  printf("Division: ");
  display(div0);
  printf("\n");
  printf("Modulus: ");
  display(mod0);
  
  return 0;
}
