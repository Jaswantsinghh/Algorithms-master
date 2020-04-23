# What is Backtracking?
Backtracking is an improvement of the brute force approach. It systematically searches for a
solution to a problem among all available options. In backtracking, we start with one possible
option out of many available options and try to solve the problem if we are able to solve the
problem with the selected move then we will print the solution else we will backtrack and select
some other option and try to solve it. If none if the options work out we will claim that there is no solution for the problem. It is a type of recursion.
# 1. strings_of_n_bits
In this program we have to find possible number of binary numbers up to n digits(input) placed in ascending order.
Let T(n) be the running time of generateAllBinaryStrings. Assume function cout takes time O(1).
T(n)=c if n<0 otherwise T(n)=2T(n-1)-d.
Using Subtraction and Conquer Master theorem we get: T(n) = O(2n). This means the algorithm
for generating bit-strings is optimal.
