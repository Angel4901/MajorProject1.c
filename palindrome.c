void palindrome(int _num)
{
    unsigned int no = _num;

    int array[32] = { 0 };
        int i = 32 - 1;
        while (no != 0) {
            array[i--] = no & 1;
            no = no >> 1;
        }
        printf("Binary representation : ");

        for (int r = 0;r < 32;r++)
            printf("%d", array[r]);
        printf("\n");

        int test = 1;
        for (int r = 0, no = 32 - 1;r < no;r++, no--) {
            
            if (array[r] != array[no]) {
                test = 0;
            }
        }
        if (test == 0) {
            printf("is not a palindrome\n");
        }
        else {
            printf("it is a palindrome\n");
        }

        main();
    }

