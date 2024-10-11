#include <stdio.h>

int main()
{
    int a = 5;
    int b = 3;
    printf("arithmatic operator\n");
    printf("a + b  = %d\n", a + b);
    printf("a - b  = %d\n", a - b);
    printf("a * b  = %d\n", a * b);
    printf("a / b  = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    // relational operation
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a <= b : %d\n", a <= b);
    printf("a >= b : %d\n", a >= b);
    printf("a < b  : %d\n", a < b);
    printf("a > b  : %d\n", a > b);

    int result;
    printf("assignment operator\n");
    result = a;
    printf("result = a : %d\n", result);

    result += b;
    printf("result += : %d\n", result);
    result = a;
    printf("result = a : %d\n", result);

    result -= b;
    printf("result -= : %d\n", result);

    // incrementation and decrementation
    printf("result a++ : %d\n", a++);
    printf("result a-- : %d\n", a--);
    
    printf("result ++a : %d\n", ++a);
    printf("result --a : %d\n", --a);



    return 0;
}

// curly braces is a block
// bitwise operators
//(_ _ _ _ _ _ _ _)
//  ^ ^ ^ ^ ^ ^ ^ ^
//  | | | | | | | |
//  MSB            lsb
//  right shift is division by two      :<<
//  left shift is multiplication by two :>>
//  perform an anding to check last bit is one
//  0 0 0 0 1 0 1 0
//  0 0 0 0 0 0 0 1
//                ^
//                |
//               anding

//The operators

//  & bitwise and
//  | bitwise or
//  ^ bitwise xor
//  ~ (tild) bitwise not
//  << bitwise left shift
//  >> bitwise right shift

//comparision of if else ladder with switch case 

