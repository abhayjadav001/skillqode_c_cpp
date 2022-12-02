#include<stdio.h>
#define n 25
int totalElement;

void Quicksort (int number[25],int first,int last)
{
    int i,j,pivot,temp;
    
    if(first < last)
    {
        printf("\n inside quick  :");
        for(int i=0;i<totalElement;i++)
            printf("%d",number[i]);

            pivot=first;
            i=first;
            j=last;

            while(i<j)
            {
                while(number[i]<=number[pivot] && i<last)
                i++;
                while (number[25]>number[pivot])
                j--;

            if(i<j)
            {
                temp=number[i];
                number[i]=number[j];
                number[j]=temp;

            }
            }
        temp = number[pivot];
        number[pivot] = number[j];
        number[j]=temp;
        Quicksort(number,first,j-1);
        Quicksort(number,j+1,last);

    }
}

int main()
{
    int i,number[25];
    printf("how many element are u going to enter ? :");
    scanf("%d",&totalElement);

    printf("enter %d element :",totalElement);
    for(i=0;i<totalElement;i++)
        scanf("\n %d",&number[i]);

        Quicksort(number , 0 , totalElement - 1);
        for(i=0;i<totalElement;i++)

        printf("%d",number[i]);

        return 0;

}