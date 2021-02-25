# Answers to Questions in Exercise 8.1

![image-20200930101010550](C:\Users\kufre\AppData\Roaming\Typora\typora-user-images\image-20200930101010550.png)

1. All variables have the following items associated with it:
   a. The type of value the variable can store
   b. The size of the value in the variable
   c. The location of the variable in the computer memory.
   
2. **&average** means the address of the variable.

3. **&temp** -> 16892, &**dist** -> 16896

   &**date** -> 16900, &**miles** -> 16908

![image-20200930102005319](C:\Users\kufre\AppData\Roaming\Typora\typora-user-images\image-20200930102005319.png)

Variable is declared as a pointer because the address of another variable is stored in it.

![image-20200930102121480](C:\Users\kufre\AppData\Roaming\Typora\typora-user-images\image-20200930102121480.png)

- *xAddr
- *yAddr
- *ptYld
- *ptMiles
- *mptr
- *pdate
- *distPtr
- tabPT
- hoursPt

![image-20200930102531174](C:\Users\kufre\AppData\Roaming\Typora\typora-user-images\image-20200930102531174.png)

- int * yAddr;
- char * chAddr;
- long * ptYr;
- double * amt;
- int * z;
- float * qp
- int * datePt;
- double * yldAddr
- float * amtPt 
- char * ptChr

![image-20200930103200490](C:\Users\kufre\AppData\Roaming\Typora\typora-user-images\image-20200930103200490.png)

- All the variables mentioned are pointes to addresses. 
  - amt, z and qp are bad names because they do not let me know what their function is intuitively.

![image-20200930103401026](C:\Users\kufre\AppData\Roaming\Typora\typora-user-images\image-20200930103401026.png)

- keyAddr is a pointer to a character variable

- m is a pointer to an integer variable

- yldAddr is a pointer to a double precision variable

- yPtr is a pointer to a long integer variable

- pCou is a pointer to a double precision variable

- ptDate is a pointer to an integer variable

![image-20200930103752888](C:\Users\kufre\AppData\Roaming\Typora\typora-user-images\image-20200930103752888.png)

- (c), (e), (g), (i)

![image-20200930103921939](C:\Users\kufre\AppData\Roaming\Typora\typora-user-images\image-20200930103921939.png)

***Note: `int a, long b, double c` are not pointer variables***

I will only pick the valid statements.
a. yAddr =&a;  
h. dtAddr = &b; 
n. ptAddr = &b; 
s. yAddr = xPt; 

![image-20200930105422562](C:\Users\kufre\AppData\Roaming\Typora\typora-user-images\image-20200930105422562.png)
![image-20200930105444308](C:\Users\kufre\AppData\Roaming\Typora\typora-user-images\image-20200930105444308.png)

| Variable | Address | Value       | Notes for Answer                                             |
| -------- | ------- | ----------- | ------------------------------------------------------------ |
| ptNum    | 500     | ***8096***  | ptNum = &m                                                   |
| amtAddr  | 564     | ***16256*** | amtAddr = &amt                                               |
| zAddr    | 8024    | 20492       | zAddr = &slope; &slope = 20492                               |
| numAddr  | 10132   | 18938       | &firstNum = 18938                                            |
| ptDay    | 14862   | **20492**   | ptDay = zAddr                                                |
| ptYr     | 15010   | 694         |                                                              |
| years    | 694     | **2011**    | *ptYr = 2011                                                 |
| m        | 8096    | null        | no value given as far as I can see                           |
| amt      | 16256   | 154         | amtAddr = &amt; *amtAddr = *numAddr; numAddr = &firstNum; amt = *numAddr = firstNum = 154; |
| firstNum | 18938   | 154         | numAddr = &firstNum                                          |
| slope    | 20492   | ***25***    | **zAddr = 25*                                                |
| k        | 24608   | **154**     | numAddr = &firstNum = 18938; firstNum = 154; k = *numAddr    |

