# Notes for Chapter 1

... I only started taking notes at the mathematics section

## Mathematics

It is not possible to become a successful competitve programmer without having good mathematical skills

### Sum Formulas
Basic sum formula n∑x can be represented as: n(n+1)/2
Sum formulas n∑x^2 can be represented as: n(n+1)(2n+1)/6

`Arithmetic progression` is a sequence of numbers where the difference between any two consecutive numbers is constant.
Example:
```
3,7,11,15
```

Formula for the sum of an arithmetic progression a+...+b: n(a+b)/2

`Geometric progression` is a sequence of numbers where the ratio between any two consecutive numbers is constant
Example:
```
3,6,12,24
```

Formula for the sum of an geometric progression a+ak+ak^2...+b: (bk-a)/(k-1)

`Harmonic sum` is a sum of the form:
n∑1/x = 1 + 1/2 + 1/3 + ... + 1/n

### Set Theory
A `set` is a collection of elements
Example:
```
X = {2, 4, 7}
```

|S| denotes the size of a set S

If a set S contains an element x, we write x ∈ S, and otherwise we write x ∉ S

The `intersection` A ∩ B consists of elements that are in both A and B

The `union` A ∪ B consists of elements that are in A or B or both

The `complement`  ̄A consists of elements that are not in A.  This is compared against a `universal set`.

The `difference` A \ B = A ∩  ̄B consists of elements that are in A but not in B.

If each element of A also belongs to S, we say that A is a `subset` of S, denoted by A ⊂ S.

Some often used sets are N (natural numbers), Z (integers), Q (rational numbers) and R (real numbers).

The set N can be defined in two ways, depending
on the situation: either N = {0, 1, 2, . . .} or N = {1, 2, 3, ...}.

### Logic
The value of a logical expression is either true (1) or false (0).  

`Negation`: ¬A has the opposite value of A.
`Conjugation`: A∧B is true if both A and B are true.
`Disjunction`: A∨B is true if A or B or both are true.
`Implication`: A⇒B is is true if whenever A is true, B is also true.
`Equivalence`: A⇔B is true if A and B are both true or both false.

A `predicate` is an expression that is true or false depending on its parameters. For example, we can define a predicate P(x) that is true exactly when x is a prime number. 

A `quantifier` connects a logical expression to the elements of a set. The most important quantifiers are ∀ (for all) and ∃ (there is). 
For example:
```
∀x(∃y(y < x))
```
means that for each element x in the set, there is an element y in the set such
that y is smaller than x.

### Functions
