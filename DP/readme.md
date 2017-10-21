file: 04_dp1.m4a

# Dyanamic Programming

> 04_dp1

## What is DP?
- solving big problem -> by dividing small problem.
- DP itself has no meaning.
  - 1940 Richard Bellman just use for funding of his research.
  - <https://en.wikipedia.org/wiki/Dynamic_programming#History>

### What is big problem
- Big == input (e.g, number of input)
- Divide & Conquer
  - also solving big problem after dividing it by smalll problem
  - **BUT** it has no repetition things into the problem.
> **repetition** : Solving the same problem again.

### What is DP? (again)
- If we can remove the repetition thing while solving the problem it can be DP.
- If we can't remove the repetition thing it can't be the DP.
 
- To be DP problem, it meet 2 properties below.
  1. The problem should be overlapped.
    - divide smaller problem and let's call it sub-problem,
      this sub-problem should be ovelapped!
  2. It meets the Optimal Substructure.
> **Optimal Substructure** : The solution of the problem is same when we are solving it again.

```diff
+ now let's check 
- what is overlapped?
- what is same solution when we solve it?
```

## Overlapping Subproblem
- Pibonachi
  - F(0)=0
  - F(1)=1
  - F(n)=F(n-1)+F(n-2) (n>=2)
  
- F(n) and F(n-1)+F(n-2)
  - Which is bigger size of problem? : (The bigger size means the problem size not value or solution itself.)
  - F(n) is more bigger one.

``` diff
- absolutely F(n) is more bigger problem size, because n is size more big one so problem size also be thought as big than others.
+ 0. big problem -> divide small problme
       F(n)      -> F(n-1)+F(n-2)
+ above means solve big one, by smaller two problem.
- now check it overlapped or not.
```

- F(n) = F(n-1) + F(n-2)
  -    F(n-1) = F(n-2) + F(n-3)   <-- F(n-2),, **1. overlapped** problem is occured.

- optimal substructure
  - we can find the solution of the problem from the smaller problem.
  - e.g) Let's consider the most fastest way to go to Pusan from Seoul is
    - Seoul -> Daejon -> Daegu -> Busan.
    - If so, what is the What is the most fastest way to go to Busan from Daejon?
      - Daejon -> Daegu -> Busan.
    - The solution of subproblem is same, it's not changed
  - e.g) We need to solve the 4th Pibonaci again and again.. but it's not changed and it repeated.
    - So we memo it to reuse it(economical) => memoization.





(18:23)
 . 1. Top-down : The daynamic which using recursive call.
      > There are big problem and divide it smaller one..
 . 2. Bottom-up : If you solve all smaller problems so then you can solve the problem which just one bigger problem than all smaller problems.
      and this solved by using for loop. <--(me) good knowledge.

(20:30)
 . (FAQ) Can we solve the bottom-up also if it can be solved by Top-Down?
         => normally yes.
	    But some specific problem only can solved by one of way.

(21:20)
 . Until now, the DP theoryticall knowledge.
   But DP problem can not solve absolutely even though we know the this theoritical knowledge.

 . <How to solve the DP problem>
   > Define the jum-hwa-sik
   1) Define the definition of the jum-hwa-sick
      : D[N] = Let's Nth fibonachi.
   2) Make the fomula
      : D[N] = D[N-1] + D[N-2]
   3) Implement that.


file: 04_dp1.m4a
~(22:00) : Let's start problem solving...  <--(me) (08/16) I done to here. :)













