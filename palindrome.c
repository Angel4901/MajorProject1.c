void palindrome(int _num)
{
    unsigned int no = _num;
// create a 32 size array and fiil it with zeros
    int array[32] = { 0 };
        int i = 32 - 1;
   // Run a while loop until a number is equal to 0
        while (no != 0) { 
           // decrement the array while 1 & 1 =1
            array[i--] = no & 1;
            // Then shift to the right
            no = no >> 1;
        }
        printf("Binary representation : ");
       //A for loop to print the array in Binary numbers
        for (int r = 0;r < 32;r++)
            printf("%d", array[r]);
        printf("\n");

        int test = 1;
    // A foor loop that will keep taking the numbers and compare them in the if statement
        for (int r = 0, no = 32 - 1;r < no;r++, no--) {
            // if the numbers don't match then it will return a zero and its not a palindrome
            if (array[r] != array[no]) {
                test = 0;
            }// else its a palindrome
        }
        if (test == 0) {
            printf("is not a palindrome\n");
        }
        else {
            printf("it is a palindrome\n");
        }
    
        main();
    }

