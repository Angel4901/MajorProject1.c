#include <stdio.h>
#define SIZE 32
int main()
{
    unsigned int n;
    //input a number 
    printf("Enter a positive integer less than 2 billion: ");
    scanf("%d",&n);
   
   //fill array with zeros
    int a[SIZE]={0};
   
    int i=SIZE-1;
    while(n!=0){
        a[i--]=n&1;
        //right shift 
        n=n>>1;
       }
    printf("Binary representation : ");
   
    for(int x=0;x<SIZE;x++)
    printf("%d",a[x]);
    printf("\n");
    
    for(int x=0,n=SIZE-1;x<n;x++,n--){
        //any mismatch occurs then it is not pallindrome
        if(a[x]!=a[n]){
         
            printf("is not a palindrome\n");
            return 0;
        }
    }
    //else its a palindrome
    printf("it is a palindrome\n");

    return 0;
}
