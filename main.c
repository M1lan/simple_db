#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
  FILE *dbFile;
  char key[99];
  int value;
  char answer;

  dbFile = fopen("simple_db.txt", "a");
  if (dbFile == NULL)
    {
      printf("ERROR: Could not open simple_db.txt\n");
      exit(1);
    }

  while (tolower(answer) != 'n')
  {
    printf("Key: ");
    scanf("%s", key);

    fprintf(dbFile, "%s ", key);
    printf("Value: ");

    scanf("%d", &value);
    fprintf(dbFile, "%d\n", value);

    printf("Do you want to store another entry? (y/n): ");
    scanf(" %c", &answer);
  }

  fclose(dbFile);
  exit(0);
}
