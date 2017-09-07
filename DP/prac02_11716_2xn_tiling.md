# 04_dp1.m4a (32:36~)
https://www.acmicpc.net/problem/11726
title: 2xn Tiling

(problem)
: 2xn rectangle,  fill it with 1x2, 2x1 tile
  how many way?

(spe)
: (using pen and note..)

# (TIP1) number of way~~ => DP

(my try)
let's D[n] : 2xn, filling way with 1x2, 2x1
1+D[n-2]
1+D[n-1]
-> 1+D[n-2]+1+D[n-1   <--(WIK) Regarding 'Making 1', D[n] is operation numbers.
                               so each case's result is after 1 operaion's resu
			       lt. so it had a "~+1"

But Regarding tile, the total case is each case, filling way, just add.
# -> I just feeling the difference but can't explain diff exactly.
#    Anyway for DP problem, this point is very important, I think.

---------------------------------------------







