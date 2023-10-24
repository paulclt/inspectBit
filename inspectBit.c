#include <stdlib.h>
#include <stdio.h>

int inspect_bits(unsigned int number)
{
    char tab[32];

    for(int i=0; i<32; i++) {
        if(((number>>i)&0x00000001) != 0)
            tab[i] = '1';
        else
            tab[i] = '0';
    }

    for(int i=32-1; i>=0; i--){
        printf("%c", tab[i]);
        if((i)%4==0)
            printf(" ");
    }
    printf("\n");
    return -1;
}

#ifndef RunTests
int main ()
{
    inspect_bits(255);
}
#endif