/**
 * file: rand.c
 *
 * Created by hengxin on 11/21/21.
 */

#include <stdio.h>

int Rand();

int main() {
  for (int i = 0; i < 10; i++) {
    printf("%d\n", Rand());
  }

  return 0;
}

int Rand() {
  unsigned long int next = 1;

  next = next * 1103515245 + 12345;
  return (unsigned int) (next / 65536) % 32768;
}

//void SeedRand(unsigned int seed) {
//  next = seed;
//}