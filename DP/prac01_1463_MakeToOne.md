# Make 1
<https://www.acmicpc.net/problem/1463>

## WIK
integer 'X' given and we can apply the below 3 operaions
1. If 'X' can be divided by 3, divide by 3.
2. If 'X' can be divided by 2, devide by 2.
3. subtract '1'

## WIW
- integer 'N' given
- make N to 1 by using the above 3 operations.
- find minimum times of operation apply case.

## SPE
- If '15'
  - 15%3 = 0   <-- it doesn't meet, when try /3 first.
  - 15%2 = 1   <-- it works.


## STK01 & WIK01
- it doesn't work
   

## TIP
- To solve it by DP,
  We should define What is the find or calculate in the problem.

- So, in this problem.
  What do we need to calc?
  -> **the minimum operation count to make 'n' to '1'.**


- d[n] : let's define this is the minimum operation count to make 'n' to '1'.

- then now, we need to find what operation we can apply to 'n'. 
  (if problem is easy level, this operation shows up in the problem descirption)
  => /3, /2, -1.
 
- so we need to inspect how's result in each case.

   case1) n을 1로 만들고 싶은데, /3걸 한단계와 나머지 단계로 나눠야함.
            1번(연산횟수)      d[n/3]          
   case2)   1번 + d[n/2]
   case3)   1번 + d[n-1]

  => d[n] = min(case1, case2, case3)



## PAT(T)
- case
  1. 1 + D[n/3]
  2. 1 + D[n/2]
  3. 1 + D[n-1]

- among above 3 cases, select minimum one.
  - D[n] = min(1+D[n/3], 1+D[n/2], 1+D[n-1])
    - spe) D[n/3] = min(1+D[n/9], 1+D[n/6], 1+D[3/n-1])
    - spe) D[n/2] = min(~D[n/6]...)  <-- ok D[n/6] overlapped!

- Does it meet the DP?
  - big size input problem, solve it by using other smaller input size problem.
  - overlapped.
  - intuition, same solution if it is same problem.





