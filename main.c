#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void power();
void reverse();
void replace();
void palindrome();

void main()
{
    int num = 0;

    printf("Enter the menu option for the operation to perform: ");
    printf("\n(1) POWER OF 2");
    printf("\n(2) REVERSE BITS");
    printf("\n(3) REPLACE BIT POSITION FROM MASK");
    printf("\n(4) PALINDROME");
    printf("\n(5) EXIT\n--> ");

    scanf("%d", &num);


    if (num == 1)
    {
        power();
    }
    else if (num == 2)
    {
        reverse();
    }
    else if (num == 3)
    {
        replace();
    }
    else if (num == 4)
    {
        palindrome();
    }
    else if (num == 5)
    {
        exit;
    }
    else
    {
        printf("Error: Invalid option. Please try again.\n");
        // printf("\n");
        main();
    }
}
void power()
{
        int num;
        int count = 0;
        int power = 0;
        int next = 0;


        while (true)
        {
            printf("Enter a positive integer less than 2 billion: ");
            scanf("%d", &num);
            if (num > 0 && num < 2000000000)
                break;
        }

        for (int i = 0; i < 32; i++)
        {
            if (num & (1 << i))
            {
                count++;
            }
        }

        if (count == 1)
        {
            printf("\n%d is a power of 2.\n", num);
        }
        else
        {
            printf("\n%d is not a power of 2.\n", num);

            for (int j = 0; j < 32; j++)
            {
                if (num & (1 << j))
                {
                    power = j;
                }
            }

            next = 1 << (power + 1);

            printf("\nNext higher integer that is power of 2 is: %d.\n", next);
        }
    main();
}

void reverse()
{  
// Function to reverse bits of num
unsigned int reverseBits(unsigned int x)
{
    //Declare size
    unsigned int numOfBits = sizeof(x) * 8;
    
    //Initialize revereNum and i
    unsigned int reverseNum = 0;
    int i;
    
    //Reverse num using bitwise
    for (i = 0; i < numOfBits; i++) {
        if ((x & (1 << i)))
            reverseNum |= 1 << ((numOfBits - 1) - i);
    }
    //Return operation as reverseNum
    return reverseNum;
}

int main()
{
    unsigned int num;
    //Ask for and take input a decimal
    printf("Enter a positive integer less than 2 billion: ");
    scanf("%u", &num);
    
  //Test to make sure its greater than 0 and less then 2,000,000,000
    while(num < 0 || num > 2000000000){
      printf("Enter a positive integer less than 2 billion: ");
    scanf("%u", &num);
  }  
    //Print output
    printf("%u with bits reversed is %u",num, reverseBits(num));
    getchar();
}
    main();
}

void replace()
{
    int integer;
    int integerMask;
    int bitRepPos;


    while (true)
    {
        printf("Enter a positive integer less than 2 billion: ");
        scanf("%d", &integer);
        if (integer > 0 && integer < 2000000000)
            break;
    }
    while (true)
    {
        printf("Enter a positive integer mask less than 3 billion: ");
        scanf("%d", &integerMask);
        if (integerMask > 0 && integerMask < 3000000000)
            break;
    }
    while (true)
    {
        printf("Enter the bit replacement position from mask (0-indexed): ");
        scanf("%d", &bitRepPos);
        if (bitRepPos >= 0 && bitRepPos <= 31)
            break;
    }

    //shift the integer right by the bit replacement position to make it be on the far right and use bitwise operator AND with 1, to clear all the other digits on its left and keep it alone
    int digit = (integerMask >> bitRepPos) & 1;

    //2 scenarios, either the digit is 1 or 0
    if (digit == 0) //use AND
    {
        unsigned int temp = 4294967295; //set all 32 digits to 1
        digit = 1 << bitRepPos; //make a number, all of its bits are 0 except the postion you need to replace
        temp = temp ^ digit; //use XOR between temp and digit to make temp be all ones except the bit replacement postion which will be 0
        integer = integer & temp; //use AND 
        //printf("New integer after replacement is: %d", integer); 
    }
    else //(digit is 1) use OR
    {
        digit = digit << bitRepPos; //shift digit by bitreppos
        integer = integer | digit; //use OR to replace

    }
    printf("New integer with bit %d from mask %d is %d\n", bitRepPos, integerMask, integer);
    main();
}

void palindrome()
{
    #define SIZE 32
    unsigned int n;
    while (1)
    {
        printf("Enter a positive integer less than 2 billion: ");
        scanf("%d", &n);
        if (n > 0 && n < 2000000000)
            break;
    }

    //fill array with zeros
    int a[SIZE] = { 0 };

    int i = SIZE - 1;
    while (n != 0) {
        a[i--] = n & 1;
        //right shift 
        n = n >> 1;
    }
    printf("Binary representation : ");

    for (int x = 0;x < SIZE;x++)
        printf("%d", a[x]);
    printf("\n");

    for (int x = 0, n = SIZE - 1;x < n;x++, n--) {
        //any mismatch occurs then it is not pallindrome
        if (a[x] != a[n]) {

            printf("is not a palindrome\n");
            main();
        }
    }
    //else its a palindrome
    printf("it is a palindrome\n");
    main();
}
