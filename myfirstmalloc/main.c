#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = NULL;

    ptr =(int*) malloc(sizeof(int)*4);

    if(ptr)
    {
        printf("ok");
    }else{
        return 1;
    }

    for(int i=0;i<4;i++)
    {
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<4;i++)
        printf("%d",ptr[i]);


    free(ptr);
    return 0;
}
