#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
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
		return integer;
}
