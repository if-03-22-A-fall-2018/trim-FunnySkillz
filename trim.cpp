/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2AHIF
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.cpp
 * Author:			S. Bogdan
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */
#include <string.h>
#include <stdio.h>
#include "trim.h"
#include <stdbool.h>

void 	trim (const char *source, char *trimmed_string)
{
 int length = strlen(source);
 int start = 0;
 bool check = true;

 if (length <= 0) {
  strcpy(trimmed_string, source);
  return;
 }
 for (int i = 0; i < length && check == true; i++) {
  if (source[i] == ' ') {
   start++;
  }
  else
  {
   check = false;
  }
 }

 int end = length;
 check = true;

 for (int i = length - 1; i >= 0 && check == 1; i--) {
   if (source[i] != ' ') {
    end = i;
    check = false;
   }
 }

 for (int i = 0; start <= end; i++) {
  trimmed_string[i] = source[start];
  start++;
  }
}
