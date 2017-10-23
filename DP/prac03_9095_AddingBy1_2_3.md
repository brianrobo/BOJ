# Add 1,2,3

> <04_dp1>

<https://www.acmicpc.net/problem/9095>


## Problem
: given n,  the number of way to make n with 1, 2, 3, combinations.


### WIK in past
: I can see the similar problem but at that time I try to using combinations method.


### try01 with DP

- let's D[n] : the number of way to make n with 1, 2, 3
  - case1) 1 + D[n-1]
  - case2) 2 + D[n-2]
  - case3) 3 + D[n-3]

  so D[n] = D[n-1] + D[n-2] + D[n-3]

  -  D[0] = 0
  -  D[1] = 1
  -  D[2] = 2
  -  D[3] = 3  <-- 3이아니고 4임!


### failed
- The order is matter
- consider n=3
  - below 2, 3 is not same thing

1. 1 + 1 + 1
2. 1 + 2
3. 2 + 1
4. 3
 

``` diff
- (WIK) 1, 2, 3으로 만드는 방법임.
-       각 경우를 한거랑  안한거랑 나누면 되고,
-	just '방법의 수'니, 각 경우를  한거할때 count+1을 안해도됨 (like 'Make 1')

```


