#include <stdio.h>
#include <stdlib.h>

#include "accept.peg.c"

int main()
{
  GREG g;
  yyinit(&g);
  while (yyparse(&g));
  yydeinit(&g);

  return 0;
}
