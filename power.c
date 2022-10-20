#include "major1.h"

void power(int _num)
{
    int count = 0;  //count bits
    int power = 0; //powers of 2
    int next = 0;   //store next power 
                    //for loop to find wether num is power of two
    for (int i = 0; i < 32; i++)
    {
        if (_num & (1 << i))
        {
            count++;
        }
    }

    if (count == 1)     //print if num is ower of 2
    {
        printf("\n%d is a power of 2.\n", _num);
    }
    else                //else find the next power of two
    {
        printf("\n%d is not a power of 2.\n", _num);

        for (int j = 0; j < 32; j++)
        {
            if (_num & (1 << j))
            {
                power = j;
            }
        }
                            //print next power
        next = 1 << (power + 1);

        printf("\nNext higher integer that is power of 2 is: %d.\n", next);
    }
    //go back to main
    main();
}



