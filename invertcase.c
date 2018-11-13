#include "types.h"
#include "stat.h"
#include "user.h"

void invertcase(char * str)
{
  int i;
  for(i=0;i<strlen(str);i++)
  {
    if(str[i] >= 65 && str[i]<=90)
    {
      str[i] +=32;
    }
    else if(str[i]>=97 && str[i]<=122)
    {
      str[i] -=32;
    }
    else
    {
      ;
    }
  }
  printf(1,"%s ",str);
}

int main(int argc, char *argv[])
{
  int i;
  if(argc < 1)
  {
    printf(1,"\n");
    exit();
  }
  for(i=1;i<argc;i++)
  {
    invertcase(argv[i]);
  }
  exit();
}
