#include <stdio.h>
#include "test.peg.c"

int main()
{
  GREG g;
  yyinit(&g);
  while (yyparse(&g));
  yydeinit(&g);
  return 0;
}
