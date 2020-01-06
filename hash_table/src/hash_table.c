// hash_table.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_table.h"

static ht_item *ht_new_item(const char *k, const char *v)
{
  ht_item *i = malloc(sizeof(ht_item));
  i->key = strdup(k);
  i->value = strdup(v);
  return i;
}

int main()
{
  printf("%\n", sizeof(*x));
}