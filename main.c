#include<stdio.h>
#include<stdlib.h>


int main()
{
    int num;
    
    do {
    printf("Enter the menu option for the operation to perform:\n ");
    
    printf("\n(1) POWER OF 2");
    printf("\n(2) REVERSE BITS");
    printf("\n(3) REPLACE BIT POSITION FROM MASK");
    printf("\n(4) PALINDROME");
    printf("\n(5) EXIT\n--> "); 
  
    scanf("%d", &num);
    
    
     if(num < 0)
    {
        printf("\nInvalid option. Please try again\n");
        printf("\n");
        main();
        return;
    }
    
    if(num > 2000000000)
    {
         printf("\nInvalid option. Please try again\n");
         main();
         return;

    }
    
    else ()
    {
    
         if (num == 1)
         {
            power(num);
         }
         
          if (num == 2)
         {
            reverse(num);
         }
         
          if (num == 3)
         {
            replace(num);
         }
    
          if (num == 4)
         {
            palindrome(num);
         }
         
          if (num == 5)
         {
            exit
         }
    }
 
    
   
    } while (num =! 5);
    
    return 0;
}



int power(int num)
{
    printf("This will print the power of two function and then return to main")
   main();
   return;
}

int reverse(int num)
{
    printf("This will print the reverse function and then return to main")
   main();
   return
}

int replace(int num)
{
    printf("This will print the replace of two function and then return to main")
   main();
   return
}

int palindrome(int num)
{
    printf("This will print the palindrome function and then return to main")
   main();
   return
}
