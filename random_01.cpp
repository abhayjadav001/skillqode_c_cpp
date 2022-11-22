// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int a[10], i;

//     for (i = 0; i < 10; i++)
//         a[i] = rand() % (99 - 11 + 1) + 11;

//     for (i = 0; i < 10; i++)
//     {
//         printf("%d \t ", a[i]);
//     }
// }

//second method
// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     int a[10];
//     int i;

//     for(i=0; i<10; i++)
//     {
//         a[i]=rand()%30+10;
//     }

//     for(i=0; i<10; i++)
//     {
//         printf("\n a[%d]: %d",i,a[i]);
//     }

// }

//third mathod
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, i;
   printf("Value of n:\n");
   scanf("%d", &n);
   int t[n];
   for(i=0; i<n; i++)
    printf("%d ", rand()%10+30);

return 0;
}