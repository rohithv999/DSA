#include <stdio.h>
#include<stdlib.h>

struct myArray
{
    int total_size;
    int used_size;
    int* ptr;
};

void createArray(struct myArray * a,int tsize,int usize)
{
     // (*a).total_size = tSize;
    // (*a).used_size = uSize;
    // (*a).ptr = (int *)malloc(tSize * sizeof(int));
    a->total_size=tsize;
    a->used_size=usize;
    a->ptr = (int *)malloc(tsize * sizeof(int));
}

void setval(struct myArray *a)
{
    for(int i=0;i<a->used_size;i++)
    {
        int n;
        printf("Enter your elements %d ",i);
        scanf("%d",&n);
        a->ptr[i]=n;
    }
}

void show(struct myArray *a)
{
    for(int i=0;i<a->used_size;i++)
    {
        
        printf("%d\n",a->ptr[i]);
    }
}

int main()
{
    struct myArray marks;
    createArray(&marks,10,3);
    setval(&marks);
    show(&marks);
    
}
