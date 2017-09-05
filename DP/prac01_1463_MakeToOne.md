

(WIK)

> to integer 'X', we can apply the below 3 operaions
   1. If 'X' can be divided by 3, divide by 3.
   2. If 'X' can be divided by 2, devide by 2.
   3. subtract '1'

(WIW)
> providing integer 'N'
  make it by using the above 3 operaions.
  and find the minimum operation case.

------------------------------------------------------------

(SPE)

If '15'

  > 15%3 = 0   <-- it doesn't meet.


  > 15%2 = 1   <-- it works.


(STK01 & WIK01)
  > it doesn't work
   
---------------------------------------------------------------
(TIP)
[04_dp1] (26:09)
: To solve it by DP,
  We should define What is the find or calculate in the problem.

  So, in this problem.
  What do we need to calc?
  -> the minimum operation count to make 'n' to '1'.


  d[n] : let's define this is the minimum operation count to make 'n' to '1'.

  then now, we need to find what operation we can apply to 'n'. 
  (if problem is easy level, this operation shows up in the problem descirption)
  => /3, /2, -1.
  so we need to inspect how's result in each case.

   case1) n을 1로 만들고 싶은데, /3걸 한단계와 나머지 단계로 나눠야함.
                                     1번(연산획수)      d[n/3]
          
   case2)   1번 + d[n/2]
   case3)   1번 + d[n-1]

  => d[n] = min(case1, case2, case3)



  (1th summary)
   > It isn't just divide the some big-problem into  small-problem.
   > It divide one small-problem and other-problem.
               (ex. n-> n/2 or n/3...) (and other)



