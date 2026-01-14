#include<stdio.h>
#include<math.h>

int  isprime(int n)

{   if(n<2)
        {
        // printf("The number is not prime:");
         return 0;
        }
        if(n==2){
            //printf("The number is prime:\n");
            return 1;
        }
        if(n%2==0)
            {
      //  printf("the number is not prime:");
        return 0;
              }

              int limit=(int)sqrt(n)+1;
        for(int i=3;i<limit;i++){
            if(n%i==0){
                   // printf("This is not prime\n");
                return 0;
            }

        }
      //  printf("The number is prime:");

    return 1;

}


int main()
{
    int n;
    printf("Enter your last number:\n");
    scanf("%d",&n);

    for(int i=1;i<n;i++){
        if(isprime(i)==1){
            printf("%d\n",i);
        }
    }

    return 0;
}
