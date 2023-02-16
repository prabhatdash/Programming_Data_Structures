#include<stdio.h>
#include<stdlib.h>
int main()
{

    // Implementation of Pointers in c:
    int a=10;
    int *pointer=&a;
    printf("Simple Pointer: %d\n",*pointer);

    // Implementation of NULL Pointers in c:
    int b=10;
    int *null_pointer=NULL;

    // Implementation of VOID Pointers in c:
    int c=10;
    void *void_pointer=&c;
    printf("Void Pointer: %d\n",*(int*)(void_pointer));


    // Implementation of WILD Pointers in c:
    int d=20;
    int *wild_pointer;
    printf("Wild Pointer: %d\n",*wild_pointer);

    //Implementation of Dangling Pointer in c:
    int *dangling_pointer= (int*)(malloc(sizeof(int)));
    free(dangling_pointer); //Deleting the pointer from memory
    printf("Dangling Pointer: %d\n",*dangling_pointer); //Even after deletion it shows random value

    //Implementaion of Complex Pointer:
    int (*complex_pointer)[8];

    //Implementaion of Near Pointer:
    int x = 42;
    int near * ptr = & x;
    int sz = sizeof(ptr);
    printf("size of ptr is %d byte", sz);
  
    //Implementaion of Far Pointer:
    int x = 42;
    int near * far = & x;
    int sz = sizeof(ptr);
    printf("size of ptr is %d byte", sz);

    //Implementaion of Huge Pointer:
    char huge * far *p;
    printf("%d %d %d",sizeof(p),sizeof(*p),sizeof(**p));

}
