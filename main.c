#include <stdio.h>
int main(void)
{
        int counter;
        
        counter = 1;
        while (counter < 21)
        {
                printf("xd ", counter);
                
                counter ++;
        }
        printf("\n");
        
        char letra;
        letra = 'z';
        while (letra >= 'a')
        {
               putchar(letra);
               putchar(' ');
               
               letra --;
        }
        printf("\n");
    return 0;
}
