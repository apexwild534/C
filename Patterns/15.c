// C Program to print the Floyd's Triangle

// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 

#include <stdio.h>
  
int main()
{
    int rows = 4;
    int n = 1;
  
    // outer loop to print all rows
    for (int i = 0; i < rows; i++) {
  
        // innter loop to print abphabet in each row
        for (int j = 0; j <= i; j++) {
            printf("%d ", n++);
        }
        printf("\n");
    }
    return 0;
}