/**
 * file: continue.c
 *
 * Created by hengxin on 10/30/21.
 */

#define LEN 5

int numbers[LEN] = {-2, 3, -4, 5, 6};

int main() {
  for (int i = 0; i < LEN; i++) {
    if (numbers[i] < 0) { // skip negative elements
      continue;
    }

    // if () // skip ...

    // do positive elements (which may be complicated)
  }
  return 0;
}
