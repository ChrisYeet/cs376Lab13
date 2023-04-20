/**
 * robot.c
 *
 * A file that contains the supporting functions for main() in the
 * ~/robots example source for Software Engineering.
 *
 * <<<<<<< animateMARSH
 * @author Marshall 
 * =======
 * <<<<<<< flags
 * @author Tanya L. Crenshaw, Nathan Schmedake
 * @author Christopher Yee
 * @author Tanya L. Crenshaw, Nathan Schmedake, Bryce Kwon
 * >>>>>>> main
 * >>>>>>> main
 * @since August 2013
 *
 */

#include "robot.h"

/**
 * robotPrintMessage
 *
 * This function prints the message, "I really love robots!"
 *
 * @returns none 
 */
void robotPrintMessage(void)
{
  printf("\n\nI really love robots!\n\n");
  return;
}

/**
 * robotPrintAscii
 *
 */
void robotPrintAscii(void)
{
  int i;
for(i = 0; i < 4; i++){
char* blank = "                                ";
if(i == 0){
  blank = "   ";
}
else if(i == 1){
  blank = "          ";
} 
else if(i == 2){
  blank = "                    ";
}
else if(i == 3){
  blank = "                                ";
}
  blank = blank +30;
  printf("\n\n" 
	 "UWR: Unidentified Wheeled Robot\n"
	 "%s    i_i    \n"
	 "%s   [0_0]   \n"
  char* blank = "                              ";
  for (i = 0; i < 3; i++) {
      blank = blank + (i*5);
      printf("\n\n"
	 "%s    i_i    \n"
	 "%s   [-_-]   \n"
	 "%s  /|___|\\ \n"
	 "%s   d   b   \n",blank, blank, blank, blank);

      //blank = blank - 10;
  }
}
}

/**
 * dalekPrintAscii
 *
 */
void dalekPrintAscii(void)
{
  int i;
  char* blank = "                              ";
  blank = blank +30;
  printf("\n\n"
	 "I am Dalek, from Dr. Who\n"
	 "%s      <----->      \n" 
         "%s     <  (0)  >     \n"        
         "%s     |       |     \n"
         "%s    < ------- >    \n"
         "%s    o         o    \n"
         "%s    o  0  ()  o    \n"
	 "%s   o           o   \n"
	 "%s LMAOOOOOOOOOOOOO  \n"
   	 "%s o o o o o o o o o \n"
   	 "%s o o o o o o o o o \n"
   	 "%s o o o o o o o o o \n", blank, blank, blank, blank, blank, blank, 
	 blank, blank, blank, blank);
  blank = blank - 10;
}
