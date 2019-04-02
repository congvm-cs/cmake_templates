/* hello.c: A program to show the time since the Epoch */

#include <stdio.h>
#include <time.h>

double get_sec_since_epoch()
{
   double sec = time(NULL);
   return sec;
}

int main(int argc, char *argv[])
{
   printf("%f\n", get_sec_since_epoch());
   return 0;
}
