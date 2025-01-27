function foo(x: int): int {
  if (x == 0) {
    return 1;
  } else {
    return x * foo(x - 1);
  }
}

function bar(x: int): int {
  if (x < 0) {
    return 0;
  } else {
    return foo(x);
  }
}

function main(): void {
  echo bar(5);
}

This code will cause a stack overflow error because the function foo() recursively calls itself without a base case. The base case should be when x is less than or equal to 0. The bug is that the function bar() calls foo() with a value of 5 which causes the stack overflow.

The bug can be fixed by adding a base case to the recursive function foo(), or by using a loop instead of recursion.