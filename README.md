# 0x07 Exercises

Create a class `Triangle` with the following:

- Data members `a`, `b` and `c` each representing a side of the triangle (should the sides be of type `int`, `float` or something else?)
- Member functions
  - `Triangle()`
  - `Triangle(double a, double b, double c)`
  - `void setSides(double a, double b, double c)`
  - `double circumference()`
  - `double area()`
  - `void print()`
  - Getters and setters for each data member (six functions in total)


## Invariants
Add the Triangle Inequality Theorem as an invariant in the `Triangle` class.

Consider the following:
- which methods should habe a check to satisfy the invariant?
- what can we do optimize our code (**hint**: a private helper method return a `bool` value, perhaps?)

## The Master Plan
Here is a master plan of how one could solve this exercise:
1. add the required files (`triangle.h`, `triangle.cpp`) to the `src` directory
2. implement the class definition in the header file (`triangle.h`)
3. add the all the methods defined in the header file (`triangle.h`) in the source file (`triangle.cpp`) but keep them simple (e.g. all getter just return 0) (remember to prefix class methods with `Triangle::`)
4. check that the code compiles (the tests run, some or all tests may fail, but that's okay)
5. start modifying your code method for method until you pass all the tests (a smart approach would be to change exactly one thing at a time and run the tests in between changes)

## Tests
Test the function by running the program provided in `main.cpp` and make sure
- that the name of the methods match exactly what is defined in the tests
- read the tests and think about what there testing

An example run where all the methods are defined could look like this:
```
TEST getters
 PASS check getA()
 PASS check getB()
 PASS check getC()
TEST invariants
 PASS a <= 0
 PASS a >= 0
TEST circumference
 PASS check circumference()
TEST area
 FAIL check area()
```

In the example above, we can see that all but one test passes. What the tests are telling us, is that there are some problems with the algorithm in the method `area()`.

This implementation for the `Test` class can be found in `test_util.h` and `test_util.cpp` if you're to see how it works "under the hood"

## Triangle geometry
Here are some useful information about triangles you might want to consider when working on this exercise

The circumference of a triangle defined as perimeter $P$:

$$
P = a + b + c
$$

The area of a triangle can be calculated with Heron's formula, the the semi-perimeter is given by $s$ and the area is given by $A$:

$$
s = \frac{a + b + c}{2}, \quad A = \sqrt{s(s - a)(s - b)(s - c)}
$$


The Triangle Inequality Theorem is a fundamental rule in geometry. It states that for any triangle, the sum of the lengths of any two sides must always be greater than the length of the remaining side. This applies to all three sides of the triangle.

Implement the Inequality Theorem defined as:

$$
a + b > c, \quad b + c > a, \quad c + a > b
$$