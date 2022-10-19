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


