# include <stdio.h>

int main()
{
    int a, b, c;
    
    printf("Enter the value of a = ");
    scanf("%d", &a); // Ampersand symbol represents the address of the particular variable
    
    printf("Enter the value of b = ");
    scanf("%d", &b);

    c = a + b;
    printf("Sum of a and b = %d \n", c);

    return 0;
}