# 2xn tiling

<https://www.acmicpc.net/problem/11726>

> 04_dp1 (32:36~)


## problem
- (2xn) rectangle given, fill it with (1x2), (2x1) tile
- how many way?

## spe
(skip) use pen and note..

## (TIP1) "~number of way~~" => DP

## my try
- let's D[n] : 2xn, filling way with 1x2, 2x1
  - 1+D[n-2]
  - 1+D[n-1]

- 1+D[n-2]+1+D[n-1]

``` diff
+ (WIK)
- Regarding 'Making 1', D[n] is min operation numbers.
- so each case's result is after 1 operation's result.
- so it had a "~+1"

+ (WIK)
- But Regarding tile, the total case is each case, filling way, just add.
- I just feeling the difference but can't explain diff exactly.
- Anyway for DP problem, this point is very important, I think.
```
