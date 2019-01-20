// Complete the function solveMeFirst to compute the sum of two integers.
// Function prototype:
// int solveMeFirst(int a, int b);
// where,
// a is the first integer input.
// b is the second integer input
// Return values
// sum of the above two integers
// Sample Input
// a = 2
// b = 3
// Sample Output
// 5

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solveMeFirst(int a, int b) {
    return a+b;
}

int main() {
  int num1, num2;
  int sum;
  cin>>num1>>num2;
  sum = solveMeFirst(num1,num2);
  cout<<sum;
  return 0;
}

