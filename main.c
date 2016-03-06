#include <conio.h>
#incluede <iostream.h>

#include <stdio.h>

int main(int argc, char *argv[])
{
  FILE *pFile;

  // open dat file
  pFile = fopen("simple_db.txt", "w");

  if (pFile != NULL)
    {
      while ()
        {
          printf("Name: ");
          scanf("%s", name);
          printf("Test score: ");
          scanf("%d", &score);
        }
      fclose(pFile);
    }
  else
    {
      printf("ERROR: Could not open simple_db.txt\n");
    }


  /*
    "r"
    "w"
    "a"
    "r+"
   */
