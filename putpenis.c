#include <stdio.h>
#include <string.h>
#include <time.h>

void putpenis(char *str)
{
    fprintf(stderr, "\r%s", str);
    usleep(rand()%60000+30000);
    return;
}
void print_date()
{
   time_t t = time(NULL);
   struct tm tm = *localtime(&t);
   printf("Today is : %s\n", ctime(&t));
   if (tm.tm_wday==5) printf("It's FridayZ wot?\n");
   else printf("Still Not Fridayz\n");
}
int main(int argc, char **argv)
{
   print_date();
   printf("++++ SCOTTISH MODE ++++\n");
   printf("watch %s's ass get owned by %s!!\n",(argc>1)?argv[1]:"matt",
          (argc>2)?argv[2]:"houst0n");

  while(1)
  {
    putpenis("8=====D  (_O_)");
    putpenis(" 8=====D (_O_)");
    putpenis("  8=====D(_O_)");
    putpenis("   8=====D_O_)");
    putpenis("    8=====DO_)");
    putpenis("     8=====D_)");
    putpenis("      8=====_)");
    putpenis("       8====_)");
    putpenis("        8===_)");
    putpenis("         8==_)");
    putpenis("       8====_)");
    putpenis("      8=====_)");
    putpenis("     8=====D_)");
    putpenis("    8=====DO_)");
    putpenis("   8=====D_O_)");
    putpenis("  8=====D(_O_)");
    putpenis(" 8=====D (_O_)");
    putpenis("8=====D  (_O_)");
  }
  return 0;
}
