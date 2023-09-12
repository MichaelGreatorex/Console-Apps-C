#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int x;
  do
  {
    x = get_int("Height: ");
  }
  // This excludes values outside of 1-8 by repeating the question until a value in this range is recieved
  while (x > 8 || x < 1);

  // outer loop sets number of rows using y
  for (int y = 0; y < x; y++)
  {
    // inner loop sets the number of characters to print in row row
    for (int z = 0; z < x+y+3; z++)
    {
      // this is the formula to print pattern of _ and # to build pyramid shape
      if(z == x || z == x+1 || y+z < x-1)

      printf(" ");

      else
      
      printf("#");
    }
    printf("\n"); // This is the key part which starts off the next row
  }
}
