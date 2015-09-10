#include <stdio.h>
int main () {
  char msg[10];
  char *p;
//  char msg2[]="Hello";

//  msg = "Linux";
  p = "Mac OS";

//  msg = p;
  p = msg;

  p[0] = 'H';
  p[1] = 'i';
  p[2] = '\0';
  printf("%s", p);
}
