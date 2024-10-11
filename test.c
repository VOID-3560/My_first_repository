// 1. Returning Control to the Calling Function:

//                         The return statement immediately terminates the execution of the current function and returns control back to the calling function (the function that invoked the current function).
//                         If return is used in the main() function, it returns control to the operating system, effectively ending the program.

// 2. Returning a Value:

//                         In functions that are designed to compute and return a result, the return statement is used to specify the value that should be passed back to the caller.
//                         The type of the value returned must match the return type specified in the function’s declaration.
//                         For example, if a function is declared to return an int, the return statement should be followed by an expression that evaluates to an integer.

// Example:

// int add(int a, int b) {
//     return a + b;  // returns the sum of a and b to the calling function
// }

// int main() {
//     int sum = add(3, 5);  // the sum variable will hold the value 8
//     printf("Sum: %d\n", sum);
//     return 0;  // indicates successful completion of the program
// }

// 3. Ending Function Execution Early:

//                         The return statement can be used to terminate a function early, before reaching the end of its code block.
//                         This is particularly useful in cases where certain conditions are met that make further execution unnecessary or invalid.

// Example:

// int findFirstNegative(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         if (arr[i] < 0) {
//             return arr[i];  // returns the first negative number found
//         }
//     }
//     return 0;  // returns 0 if no negative numbers are found
// }

// 4. Returning Without a Value:

//                         In void functions (functions that do not return a value), the return statement can be used without any accompanying expression to simply exit the function early.
//                         This is optional; if a void function reaches the end of its block, it will return automatically, but using return; explicitly can improve readability.

// Example:

// void printMessage(int x) {
//     if (x < 0) {
//         return;  // exits the function if x is negative
//     }
//     printf("x is: %d\n", x);
// }

// 5. Returning Multiple Values:

//                         In C, a function can only directly return a single value. However, if you need to return multiple values, you can:
//                         Return a struct containing multiple fields.
//                         Use pointers to modify the values of variables passed to the function, effectively returning multiple values via those pointers.

// Example Using Pointers:

// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
//     // No need for a return statement here
// }

// int main() {
//     int x = 5, y = 10;
//     swap(&x, &y);
//     printf("x: %d, y: %d\n", x, y);  // Output will be "x: 10, y: 5"
//     return 0;
// }

// 6. Return and Program Status:

//                         In the main() function, the return statement can also be used to return an exit status to the operating system.
//                         Conventionally, return 0; indicates successful completion, while any non-zero value can indicate an error or abnormal termination.

// Example:

// int main() {
//     if (/* some error condition */) {
//         return 1;  // signals an error to the operating system
//     }
//     return 0;  // signals successful completion
// }

// Key Points to Remember:

// Return Type      : The type of value returned by return must match the function's declared return type.
// Void Functions   : In void functions, return; can be used to exit early, but no value can be returned.
// Automatic Return : If a function reaches the end of its code block without encountering a return, it automatically returns to the caller (in void functions, nothing is returned; in non-		   void functions, returning without a value can cause undefined behavior).
// Conclusion       : The return statement is a fundamental part of function control flow in C. It not only transfers control back to the calling function but also passes the computed results         
//                    (if any).  Understanding how and when to use return effectively is key to writing efficient and readable C programs.
// write a program in c in which u declare two variables for each of the following types 
// 1. short int
// 2.unsigned short int 
// 3.int 
// 4.unsigned int 
// 5.long int 
// 6.unsigned long int 
// 7.longlong int 
// 8.unsigned long long int 
// 9.char 

// print the max and min allowed values for each variable data types 
// input the var from the user 
// perform the following maths operations on each pair of variables operands that have the same type
// 1.exponentiation
// 2.multiplication
// 3.addition
// store the result of each mathematical operation in a suitable data type




#include <stdio.h>
#include <limits.h>
#include <math.h>    //including only for power function

// Sum function
int summ(int x1, int y1) {
    return x1 + y1;
}

// Multiplication function
int multi(int x2, int y2) {
    return x2 * y2;
}

// Power function
int power(int x3, int y3) {
    return (int)pow(x3, y3);  // Casting to int, as pow returns double
}

int main() {
    // Declaration
    short int a, b;
    unsigned short int ua, ub;
    int c, d;
    unsigned int uc, ud;
    long int e, f;
    unsigned long int ue, uf;
    long long int g, h;
    unsigned long long int ug, uh;
    char ch1, ch2;

    // Printing max and min for each var type
    printf("\nthe Minimum and Maximum\n");
    printf("short int               :[%hd,%hd]\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short int      :[0, %hu]\n", USHRT_MAX);
    printf("int                     :[%d,%d]\n", INT_MIN, INT_MAX);
    printf("unsigned int            :[0,%u]\n", UINT_MAX);
    printf("long int                :[%ld,%ld]\n", LONG_MIN, LONG_MAX);
    printf("unsigned long int       :[0,%lu]\n", ULONG_MAX);
    printf("long long int           :[%lld,%lld]\n", LLONG_MIN, LLONG_MAX);
    printf("unsigned long long int  :[0,%llu]\n", ULLONG_MAX);
    printf("\n");

    // Input values from the user
    printf("Enter first short int values: ");
    scanf("%hd", &a);
    printf("Enter second short int values: ");
    scanf("%hd", &b);

    printf("Enter first unsigned short int values: ");
    scanf("%hu", &ua);
    printf("Enter second unsigned short int values: ");
    scanf("%hu", &ub);

    printf("Enter first int values: ");
    scanf("%d", &c);
    printf("Enter second int values: ");
    scanf("%d", &d);

    printf("Enter first unsigned int values: ");
    scanf("%u", &uc);
    printf("Enter second unsigned int values: ");
    scanf("%u", &ud);

    printf("Enter first long int values: ");
    scanf("%ld", &e);
    printf("Enter second long int values: ");
    scanf("%ld", &f);

    printf("Enter first unsigned long int values: ");
    scanf("%lu", &ue);
    printf("Enter second unsigned long int values: ");
    scanf("%lu", &uf);

    printf("Enter first long long int values: ");
    scanf("%lld", &g);
    printf("Enter second long long int values: ");
    scanf("%lld", &h);

    printf("Enter first unsigned long long int values: ");
    scanf("%llu", &ug);
    printf("Enter second unsigned long long int values: ");
    scanf("%llu", &uh);

    printf("Enter first char value: ");
    scanf(" %c", &ch1);  
    printf("Enter second char value: ");
    scanf(" %c", &ch2);

    // Power of the types
    printf("the power of short int             :%d \n", power(a, b));
    printf("the power of unsigned short int    :%d \n", power(ua, ub));
    printf("the power of int                   :%d \n", power(c, d));
    printf("the power of unsigned int          :%d \n", power(uc, ud));
    printf("the power of long int              :%d \n", power(e, f));
    printf("the power of unsigned long int     :%d \n", power(ue, uf));
    printf("the power of long long int         :%d \n", power(g, h));
    printf("the power of unsigned long long int:%d \n", power(ug, uh));

    // Sum of the types
    printf("the sum of short int               :%d \n", summ(a, b));
    printf("the sum of unsigned short int      :%d \n", summ(ua, ub));
    printf("the sum of int                     :%d \n", summ(c, d));
    printf("the sum of unsigned int            :%d \n", summ(uc, ud));
    printf("the sum of long int                :%d \n", summ(e, f));
    printf("the sum of unsigned long int       :%d \n", summ(ue, uf));
    printf("the sum of long long int           :%d \n", summ(g, h));
    printf("the sum of unsigned long long int  :%d \n", summ(ug, uh));

    // Product of the types
    printf("the multiplication of short int               :%d \n", multi(a, b));
    printf("the multiplication of unsigned short int      :%d \n", multi(ua, ub));
    printf("the multiplication of int                     :%d \n", multi(c, d));
    printf("the multiplication of unsigned int            :%d \n", multi(uc, ud));
    printf("the multiplication of long int                :%d \n", multi(e, f));
    printf("the multiplication of unsigned long int       :%d \n", multi(ue, uf));
    printf("the multiplication of long long int           :%d \n", multi(g, h));
    printf("the multiplication of unsigned long long int  :%d \n", multi(ug, uh));

    // storing the values
    int a11 = summ(a,b);
    int a12 = summ(ua,ub);
    int a13 = summ(c,d);
    int a14 = summ(uc,ud);
    int a15 = summ(e,f);
    int a16 = summ(ue,uf);
    int a17 = summ(g,h);
    int a18 = summ(ug,uh);

    int b11 = multi(a,b);
    int b12 = multi(ua,ub);
    int b13 = multi(c,d);
    int b14 = multi(uc,ud);
    int b15 = multi(e,f);
    int b16 = multi(ue,uf);
    int b17 = multi(g,h);
    int b18 = multi(ug,uh);

    int c11 = power(a,b);
    int c12 = power(ua,ub);
    int c13 = power(c,d);
    int c14 = power(uc,ud);
    int c15 = power(e,f);
    int c16 = power(ue,uf);
    int c17 = power(g,h);
    int c18 = power(ug,uh);

    printf("c11  :  %d\n",c11);
    printf("c12  :  %d\n",c12);
    printf("c13  :  %d\n",c13);
    printf("c14  :  %d\n",c14);
    printf("c15  :  %d\n",c15);
    printf("c16  :  %d\n",c16);
    printf("c17  :  %d\n",c17);
    printf("c18  :  %d\n",c18);

    printf("a11  :  %d\n",a11);
    printf("a12  :  %d\n",a12);
    printf("a13  :  %d\n",a13);
    printf("a14  :  %d\n",a14);
    printf("a15  :  %d\n",a15);
    printf("a16  :  %d\n",a16);
    printf("a17  :  %d\n",a17);
    printf("a18  :  %d\n",a18);

    printf("b11  :  %d\n",b11);
    printf("b12  :  %d\n",b12);
    printf("b13  :  %d\n",b13);
    printf("b14  :  %d\n",b14);
    printf("b15  :  %d\n",b15);
    printf("b16  :  %d\n",b16);
    printf("b17  :  %d\n",b17);
    printf("b18  :  %d\n",b18);

   
    return 0;
}
