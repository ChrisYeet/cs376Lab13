/**
 * main.c
 * 
 * The main entrypoint of the "I really love robots" program.  The
 * program prints the phrase "I really love robots!" to the screen.
 *
 * @author Tanya L. Crenshaw
 * @since August 2013
 *
 */
#include "robot.h"
#include <ctype.h>

/**
 * main()
 *
 * The main entrypoint of the program.
 * 
 * @param command line arguments.
 * 
 * @returns nothing.
 */
int main(int argc, const char * argv[])
{
  int a;
  a = isdigit(*argv[1]);
  if(a != '\0') {
  robotPrintAscii();
  dalekPrintAscii();
  robotPrintMessage();
  }else {
    robotPrintAscii();
}
  printf("Apple Bottom Jeans");
  return 0;
}
