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


