/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.cpp
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */
#include <string.h>
#include <stdio.h>
#include "trim.h"

void 	trim (char *source, char *trimmed_string)
{
 int length = strlen(source);
 if (length <= 0) {
  strcpy(trimmed_string, source);
  return;
 }
 int begin = 0;
 int check = 1;

 for (int i = 0; i < length && check == 1; i++) {
  if (source[i] == ' ') {
   begin++;
  }
  else
  {
   check = 0;
  }
 }

 int end = length;
 check = 1;

 for (int i = length - 1; i >= 0 && check == 1; i--) {
   if (source[i] != ' ') {
    end = i;
    check = 0;
   }
 }

 for (int i = 0; begin <= end; i++) {
  trimmed_string[i] = source[begin];
  begin++;
  }
 }
