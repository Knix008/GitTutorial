#include <stdio.h>
#include <wchar.h>

/* My String Length */
size_t my_strlen(const char *s)
{
  const char *p = s;

  while (*p)
    ++p;
  return (p - s);
}

/* My string concatenation */
char *my_strcat(char *t, char *s)
{
  char *p = t;
  while (*p)
    p++;
  while (*p++ = *s++)
    ;
  return t;
}

/* Wide character support */
size_t my_wstrlen(const wchar_t *s)
{
  const wchar_t *p = s;
  while (*p)
    ++p;
  return (p - s);
}

wchar_t *my_wstrchr(wchar_t *ws, wchar_t wc)
{
  while (*ws)
  {
    if (*ws == wc)
      return ws;
    ++ws;
  }
  return NULL;
}

/* My String Copy */
char *my_strcpy(char *t, char *s)
{
  char *p = t;
  while (*t++ = *s++)
    ;
  return p;
}

/* This is Main function */
int main(void)
{
  int i;
  char p1[32];
  char *s[] = {"Git tutorials", "Tutorials Point"};
  for (i = 0; i < 2; ++i)
    printf("string lenght of %s = %ld\n", s[i], my_strlen(s[i]));
  printf("%s\n", my_strcpy(p1, "Hello, World !!!"));
  return 0;
}
