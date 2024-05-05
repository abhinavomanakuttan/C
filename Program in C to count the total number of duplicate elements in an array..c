// program in C to count the total number of duplicate elements in an array.
#include<stdio.h>
int main(){
    int i,j,limit,a[50];

    printf("Enter the array limit: ");
    scanf("%d",&limit);

    for(i=1;i<=limit;i++){
        printf("Enter the element %d: ",i);
        scanf("%d",&a[i]);
    }
    int ctr=1;

    for (i = 1; i <=limit; i++)
    {
        for (j = i+1 ; j <=limit; j++)
        {
            if (a[i] == a[j])
            {
                ctr++;  // Increment the duplicate counter if a duplicate is found
                break;  // Exit the inner loop as soon as a duplicate is found
            }
        }
    }

    printf("Total number of duplicate element found in array %d",ctr);

return 0;

}
