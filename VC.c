#include <bits/types.h>
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100

int main() {
  char stringc[MAX_LENGTH];
  printf("Enter a scentence: ");
  fgets(stringc, MAX_LENGTH, stdin);
  int strlength = strlen(stringc);

  char vowels[] = "aeiou";
  int vlength = strlen(vowels);

  char constanants[] = "bcdfghjklmnpqrstvwxyz";
  int clength = strlen(constanants);

  // check for vowels
  printf("Vowels:\n");
  for (int i = 0; i < strlength; i++) {
    for (int j = 0; j < vlength; j++) {
      if (stringc[i] == vowels[j]) {
        printf("%c\n", stringc[i]);
      }
    }
  }

  // check for constanants
  printf("Constants:\n");
  for (int i = 0; i < strlength; i++) {
    for (int j = 0; j < clength; j++) {
      if (stringc[i] == constanants[j]) {
        printf("%c\n", stringc[i]);
      }
    }
  }
  return 0;
}
