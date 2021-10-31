#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>

char* getTime()
{
  time_t mytime = time(NULL);
  char * time_str = ctime(&mytime);
  time_str[strlen(time_str)-1] = '\0';

  return time_str;
}

int main(void)
{

  printf("time: %s\n", getTime());

  system("Pause");
  return 0;
}
