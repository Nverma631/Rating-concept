//How rating work?
#include<stdio.h>
int main()
{

    int i,size;
    float rating,sum=0;
    printf("\n Enter Total no. of user give rating:");
    scanf("%d",&size);
    int arr[size];//important line
    printf("\n Please Enter  rating between 1-5");
    for(i=0;i<size;i++)
    {
        printf("\n Enter rating by each user:");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    rating=sum/size;
    printf("\n Overall-Rating:%f",rating);

    return 0;

}
