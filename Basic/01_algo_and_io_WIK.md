# WIK in (I/O part)

- (Q1) what does **{str[0] - '0'}** mean?
- (A1) It can make the character number to integer number.      
  - ref: <http://air802.tistory.com/94>
  
  
- How to get line
  - scanf("%[^\n]\n", s);
    - :( It neglect the empty space of before and end of line.
    - :( It can't get a empty line.
  - getline(cin , s);

