#include<stdio.h>
#include<string.h>


void rec(int a[], int currentIndex, int flag[], int newarr[]) {
    if (currentIndex == 4) {
        // Print current permutation
        for (int i = 0; i <= 3; i++) {
            printf("%d ", newarr[i]);
        }
        printf("\n");
        return;
    }

    for (int i = 0; i <= 3; i++) {
        if (flag[i] == 0) {
            flag[i] = 1;
            newarr[currentIndex] = a[i];
            rec(a, currentIndex + 1, flag, newarr); // Recursive call
            flag[i] = 0; // ⬅️ Backtracking happens here
        }
    }
}
int main()
{
   int a[4]={3,1,7,9};
   int newarr[4];
   int flag[4]={0,0,0,0};

   rec(a,0,flag,newarr);
     

    return 0;
}