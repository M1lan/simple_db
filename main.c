#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
  FILE *dbFile;
  char key[99];
  int value;
  char answer;

  dbFile = fopen("simple_db.txt", "w");
  if (dbFile == NULL)
    {
      printf("ERROR: Could not open simple_db.txt\n");
      exit(1);
    }

  while(true)
    {
      printf("Key: ");
      scanf("%s", key);
      fprintf(dbFile, "%s ", key);
      printf("Value: ");
      scanf("%d", &value);
      fprintf(dbFile, "%d\n", value);

      printf("Do you want to store another entry? (y/n) ");
      answer = getchar();
      if (answer == "n")
        {
          break;
        }
    }
  fclose(dbFile);
  exit(0);
}
