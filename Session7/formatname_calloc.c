#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* capitalize(char* s);

int main()
{
  char first[128], last[128];

  scanf("%s %s", first, last);

  char* firstc = capitalize(first);
  char* lastc = capitalize(last);

  printf("%s, %s\n", lastc, firstc);

  free(firstc);
  free(lastc);

  return 0;
}


char* capitalize(char* s)
{
  int len = strlen(s);
  char* w = calloc(len+1, sizeof(char));

  for(int i=0; i<len; i++)
  {
    if( s[i] >= 'a' && s[i] <= 'z' )
      w[i] = s[i] - 'a' + 'A';
    else
      w[i] = s[i];
  }

  w[len] = '\0';
  return w;
}

