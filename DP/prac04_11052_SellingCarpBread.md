# Selling Carp Bread (붕어빵 판매하기)

> 04_dp1 (45:16)
<https://www.acmicpc.net/problem/11052>



## Problem
- bread 'N' remained.
- seller want to make high benefit to prvide some type of bread sets menu.
- bread #i개set메뉴 -> price is Pi원

## e.g.
- bread 4 remained
  - #1 -> 1
  - #2 -> 5
  - #3 -> 6
  - #4 -> 7

- In this case , the maximum benefit of seller is '10' by selling (#2, #2)

  - #1 -> 5
  - #2 -> 2
  - #3 -> 8
  - #4 -> 10

- In this case, the max... is '20' by (#1, #1, #1, #1)

- Calc the max benefit when given sets menu prices...

## SPE
- D[n] = max benefit by selling #n

- now I have to apply #i and others
  - (skip) note & pen

- anyway, ~ jum-hwa-sik is
  - D[n] = max(P[i]+D[n-i])  , (1<=i<=n)


## My intuition
- When I see the (1<=i<=n),
  and I have to calc all n cases by recusive or by for-loop.
  - I have to p1~pn,,,
    so, this should be solve by bottom-up (for-loop)


 
