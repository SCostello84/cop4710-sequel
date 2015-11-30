#include "common.h"

void printTable(struct Table* table)
{
  int i;

  i = 0;
  while(table->tuples[i].fields != NULL)
  {
    for(int j = 0; table->tuples[i].fields[j].name != NULL; j++) {
    printf("%10s", table->tuples[i].fields[j].name);
}
    i++; 
  }

  printf("\n");
  i = 0;
  while(table->tuples[i].fields != NULL)
  {
    for(int j = 0; table->tuples[i].fields[j].name != NULL; j++)
    printf("%10s", (char*) table->tuples[i].fields[j].value);
    i++; 
  }
}
