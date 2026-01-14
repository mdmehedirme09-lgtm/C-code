#include<stdio.h>
#define max 100

int main()
{
    int a[max][max];
    int x,y;
    printf("Enter the row and column of the matrix:\n");
    scanf("%d%d",&x,&y);
    printf("Enter the matrix:\n");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int b[max][max];
    int m,n;
    printf("Enter the row and column of the matrix:\n");
    scanf("%d%d",&m,&n);
    printf("Enter the matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    if(y!=m){
        printf("The multiplication is not possible\n");
        return 0;
    }
    int p[max][max];
    for(int i=0;i<x;i++){
        for(int j=0;j<n;j++){
                p[i][j]=0;
            for(int k=0;k<y;k++){
                p[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("The new matrix product is -\n");
    for(int i=0;i<x;i++){
        for(int j=0;j<n;j++){
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }
    return 0;
}
