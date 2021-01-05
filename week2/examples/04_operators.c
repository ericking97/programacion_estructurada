#include <stdio.h>

void ex1()
{
  int a = 2;
  int b = 3;
  int c;
  c = a + b; // 2 + 3
  printf("Result = %i\n", c);
}

void ex2()
{
  int a = 2;
  int b = 3;
  int c = 1;
  int d;
  d = a + b + c + 4;
  printf("Result = %i\n", d);
}

void ex3()
{
  int x, y;
  x = 3;
  y = 5;
  x += 2;
  printf("x = %i\n", x); // 5
  x += y;                // 5 + 5
  printf("x = %i\n", x); // 10
}

void ex4()
{
  int x = 5;
  printf("x = %i\n", x);
  x++;
  printf("x = %i\n", x);
}

void ex5()
{
  int a, b;
  a = 1;
  b = -a;
  printf("a = %i, b = %i\n", a, b);
}

void ex6()
{
  int a, b;
  a = 18;
  b = 5;
  printf("Module %d \n", a % b);
}

void ex7()
{
  printf("10 > 5 ... %i\n", 10 > 5);
  printf("10 < 5 ... %i\n", 10 < 5);
  printf("5 == 5 ... %i\n", 5 == 5);
  printf("10 == 5 ... %i\n", 10 == 5);
}

void ex8()
{
  printf("235 | 143 = %i\n", 235 | 143);
  // 235 => 1 1 1 0 1 0 1 1
  // 143 => 1 0 0 0 1 1 1 1
  // 239 => 1 1 1 0 1 1 1 1
}

void ex9()
{
  printf("170 & 155 = %i\n", 170 & 155);
  // 170 => 1 0 1 0 1 0 1 0
  // 155 => 1 0 0 1 1 0 1 1
  // 138 => 1 0 0 0 1 0 1 0
}

void ex10()
{
  printf("235 ^ 143 = %i\n", 235 ^ 143);
  // 235 => 1 1 1 0 1 0 1 1
  // 143 => 1 0 0 0 1 1 1 1
  // 100 => 0 1 1 0 0 1 0 0
}

void ex11()
{
  printf("~152 = %i\n", ~152 & 0xFF);
  // 152 => 1 0 0 1 1 0 0 0
  // 103 => 0 1 1 0 0 1 1 1
}

void ex12()
{
  printf("150U >> 2 = %u \n", 150U >> 2);
}

void main()
{
  // Sum and substract
  ex1();
  ex2();
  ex3();
  ex4();
  ex5();
  // Module
  ex6();
  // Comparison
  ex7();
  // Binary
  ex8();
  ex9();
  ex10();
  ex11();
  ex12();
}
