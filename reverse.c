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
