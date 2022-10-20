#include "major1.h"

int main()
{
    int num; //variable to store menue option
    int _num; //variable to store integer less than 2 billion
    
    //print the prompts
    printf("\nEnter the menu option for the operation to perform: ");
    printf("\n(1) POWER OF 2");
    printf("\n(2) REVERSE BITS");
    printf("\n(3) REPLACE BIT POSITION FROM MASK");
    printf("\n(4) PALINDROME");
    printf("\n(5) EXIT\n--> ");
    
    //scan user input
    scanf("%d", &num);
    
    //if 1-4, then:
    if ((num == 1) || (num == 2) || (num == 3) || (num == 4))
    {
        //while loop that keeps repeating until user enters an integer less than 2 billion and more than 0
        while (1)
        {
            printf("Enter a positive integer less than 2 billion: ");
            scanf("%d", &_num);
            if (_num > 0 && _num < 2000000000)
                break;
        }
        //if 1, call the power function and send in the _num variable
        if (num == 1)
        {
            power(_num);
        }
        //if 2, call the reverse function and send in the _num variable
        else if (num == 2)
        {
            reverse(_num);
        }
        //if 3, call the replace function and send in the _num variable
        else if (num == 3)
        {
            replace(_num);
        }
        //if 4, call the palindrome function and send in the _num variable
        else if (num == 4)
        {
            palindrome(_num);
        }
    }
    //if 5, then print exit messege and exit program
    else if (num == 5) {
        printf("Program terminating. Goodbye.\n");
        return(0); }
    //if none of the above, print error messege and go back to main function
    else
    {
        printf("Error: Invalid option. Please try again.\n");
        main();
    }
//return 0, exit program
return 0;
}

