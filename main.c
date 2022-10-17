#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void power(int _num);
void reverse(int _num);
void replace(int _num);
void palindrome(int _num);

void main()
{
    int num;
    int _num;

    printf("Enter the menu option for the operation to perform: ");
    printf("\n(1) POWER OF 2");
    printf("\n(2) REVERSE BITS");
    printf("\n(3) REPLACE BIT POSITION FROM MASK");
    printf("\n(4) PALINDROME");
    printf("\n(5) EXIT\n--> ");

    scanf("%d", &num);

    if ((num == 1) || (num == 2) || (num == 3) || (num == 4))
    {
        while (1)
        {
            printf("Enter a positive integer less than 2 billion: ");
            scanf("%d", &_num);
            if (_num > 0 && _num < 2000000000)
                break;
        }
        if (num == 1)
        {
            power(_num);
        }
        else if (num == 2)
        {
            reverse(_num);
        }
        else if (num == 3)
        {
            replace(_num);
        }
        else if (num == 4)
        {
            palindrome(_num);
        }
    }
    else if (num == 5)
        exit;
    else
    {
        printf("Error: Invalid option. Please try again.\n");
        // printf("\n");
        main();
    }
}

void power(int _num)
{
    int count = 0;
    int power = 0;
    int next = 0;

    for (int i = 0; i < 32; i++)
    {
        if (_num & (1 << i))
        {
            count++;
        }
    }

    if (count == 1)
    {
        printf("\n%d is a power of 2.\n", _num);
    }
    else
    {
        printf("\n%d is not a power of 2.\n", _num);

        for (int j = 0; j < 32; j++)
        {
            if (_num & (1 << j))
            {
                power = j;
            }
        }

        next = 1 << (power + 1);

        printf("\nNext higher integer that is power of 2 is: %d.\n", next);
    }
    main();
}

void reverse(int _num)
{
    unsigned int _num1 = _num;
        //Declare size
        unsigned int numOfBits = sizeof(_num) * 8;

        //Initialize revereNum and i
        unsigned int reverseNum = 0;
        int i;

        //Reverse num using bitwise
        for (i = 0; i < numOfBits; i++) {
            if ((_num1 & (1 << i)))
                reverseNum |= 1 << ((numOfBits - 1) - i);
        }

        printf("%u with bits reversed is %u", _num1, reverseNum);
        main();
    }

void replace(int _num)
{
    int integerMask;
    int bitRepPos;

    while (1)
    {
        printf("Enter a positive integer mask less than 3 billion: ");
        scanf("%d", &integerMask);
        if (integerMask > 0 && integerMask < 3000000000)
            break;
    }
    while (1)
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
        _num = _num & temp; //use AND 
        //printf("New integer after replacement is: %d", integer); 
    }
    else //(digit is 1) use OR
    {
        digit = digit << bitRepPos; //shift digit by bitreppos
        _num = _num | digit; //use OR to replace

    }
    printf("New integer with bit %d from mask %d is %d\n", bitRepPos, integerMask, _num);
    main();
}

void palindrome(int _num)
{
    unsigned int n = _num;

    int a[32] = { 0 };
        int i = 32 - 1;
        while (n != 0) {
            a[i--] = n & 1;
            n = n >> 1;
        }
        printf("Binary representation : ");

        for (int x = 0;x < 32;x++)
            printf("%d", a[x]);
        printf("\n");

        int test = 1;
        for (int x = 0, n = 32 - 1;x < n;x++, n--) {
            
            if (a[x] != a[n]) {
                test = 0;
            }
        }
        if (test == 0) {
            printf("is not a palindrome\n");
        }
        else {
            printf("it is a palindrome\n");
        }

        main();
    }
