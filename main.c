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
            //power();
        }
        else if (num == 2)
        {
            //reverse();
        }
        else if (num == 3)
        {
			replace();
        }
        else if (num == 4)
        {
            //palindrome();
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
    //insert all of your code here
}

void reverse()
{
    //insert all of your code here
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
    //insert all of your code here
}
