#include <stdio.h>

void merge(char [], char[], char[], int);

int main (void)
{
    char string1[20], string2[20], string3[40];
    int size = 0;
    
    printf("Enter String 1: ");
    scanf("%s", &string1);
    
    printf("Enter String 2: ");
    scanf("%s", &string2);
    
    size = ( sizeof(string1) / sizeof(string1[0]));
    
    merge(string1, string2, string3, size);
    printf("%s\n", string3);
}

void merge(char a[], char b[], char c[], int d)
{
    int j = 0;
    for (int i = 0; i < d; ++i)
    {
  	
        if ( i % 3 == 0)
        {
            c[i] = a[j];
        }
        else if ( i % 3 == 1)
        {
            c[i] = b[j];
        }
        else if ( i % 3 == 2)
        {
            c[i] = '*';
            j++;
        }
    }
}




