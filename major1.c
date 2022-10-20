#include "major1.h"

int main()
{
    int num;
    int _num;

    printf("\nEnter the menu option for the operation to perform: ");
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
    else if (num == 5) {
        printf("Program terminating. Goodbye.\n");
        return(0); }
    else
    {
        printf("Error: Invalid option. Please try again.\n");
        main();
    }
return 0;
}

