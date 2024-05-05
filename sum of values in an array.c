#include<stdio.h>
int main(){
    int i,limit,a[50];

    printf("Enter the array limit: ");//input from the user to enter the number of array
    scanf("%d",&limit);

    printf("Enter the values: ");
    for(i=1;i<=limit;i++){
        printf("Enter the element %d :",i);
        scanf("%d",&a[i]);//receiving number from the user
    }
    int sum=0;
    for(i=1;i<=limit;i++){
        sum=sum+a[i];
    }
    printf("\n Sum of array %d:",sum);

return 0;
}
