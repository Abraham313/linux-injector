#include <unistd.h>
#include <stdio.h>
int main() {
  while (1) {
    printf("sleeping...\n");
    sleep(1);
  }
  return 0;
}