file: 04_dp1.m4a

#Dyanamic Programming

## What is DP?
- solving big problem -> by dividing small problem.
- DP itself has no meaning.

 . Divide & Conquer also solving big problem after dividing it by smalll problem   but it has no repetetion things into the problem.
   * The repetition means : Solving the same problem again.

 . If we remove the repetition thing while solving the problem it can be DP.
   If not remove the repetition thing it can't be the DP.
 

 . To be DP problem.
   > The problem should be overlapped.
   > It meets the Optimal Substructure.
   * Optimal Substructure : The solution of the problem is same when we are solving it again.


DP - Pibonachi
 . F(0)=0, F(1)=1, F(n)=F(n-1)+F(n-2) (n>=2)
 . F(n) and F(n-1)+F(n-2)
   Which is bigger one? : The big means the problem size not value itself.
   F(n) is more bigger one. <--(me) absoluterly because n is size more big one so problem size also be thought as big than others.

(07:20)
 . F(n)=F(n-1)+F(n-2)

        . F(n-1)=F(n-2)+F(n-3)   <--(here) overlapped problem is occured.
 . optimal substructure
   : we can find the solution of the problem from the smaller problem.
   : ex> Let's consider the most fastest way to go to Pusan from Seoul is
         Seoul -> Daejon -> Daegu -> Busan.
	 If so, what is the What is the most fastest way to go to Busan from Daejon?   => Daejon -> Daegu -> Busan.

       and the solution of 4th Pibonaci is not changed. but it repeated.






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













