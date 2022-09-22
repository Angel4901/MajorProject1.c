#include <stdio.h>
 
// Function to reverse bits of num
unsigned int reverseBits(unsigned int num)
{
    //declare size
    unsigned int NO_OF_BITS = sizeof(num) * 8;
    
    //Initialize revereNum and i
    unsigned int reverseNum = 0;
    int i;
    
    //reverse num using bitwise
    for (i = 0; i < NO_OF_BITS; i++) {
        if ((num & (1 << i)))
            reverseNum |= 1 << ((NO_OF_BITS - 1) - i);
    }
    //return operation as reverseNum
    return reverseNum;
}
 
// Driver code
int main()
{
    unsigned int x;
    //Ask for and take input a decimal
    printf("Enter a positive integer less than 2 billion: ");
    scanf("%u", &x);
    //Test to make sure its greater than 0 and less then 2,000,000,000
    /*for(0>=x>=2000000000;){
    
        }*/
    //Print output
    printf("%u", reverseBits(x));
    getchar();
}
