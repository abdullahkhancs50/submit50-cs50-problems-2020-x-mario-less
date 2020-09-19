#include<cs50.h>
#include<stdio.h>

int main(void)
{
     // input given by the user
   int n;
   do
   {
       printf("height: ");
        n = get_int(" ");
    }
    while(n < 0 || n > 8);

    // make the pattern
    for(int i = 0; i < n; i++)
    {
        // based on i and j we print # or ..
        for(int j = 0; j <= n; j++)
        {
            if(i + j < (n))
                    printf(" ");
            else
                    printf("#"); // NSM

        }
        // now a single line is complete so we need a new line
        printf("\n");
    }
}