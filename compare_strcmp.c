#include <stdio.h>
#include <string.h>

int main() {

  // CAP172 CA3 | Muhamad Ahmadin
  char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
  int result;

  // inform the string that will be compared
  printf("str1 = %s\n", str1);
  printf("str2 = %s\n", str2);
  printf("str3 = %s\n", str3);

  // comparing strings str1 and str2
  result = strcmp(str1, str2);
  printf("strcmp(str1, str2) = %d\n", result);

  // comparing strings str1 and str3
  result = strcmp(str1, str3);
  printf("strcmp(str1, str3) = %d\n", result);

  return 0;
}
