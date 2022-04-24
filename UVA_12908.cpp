#include <cstdio>
#include <iostream>
int main() {
  int mapping[20000] = {}, count = 1;
  while (mapping[count++] <= 100000000) {
    mapping[count] = mapping[count - 1] + count;
  }
  int s;
  while (scanf("%d", &s) != EOF && s) {
    int i = 0;
    while (mapping[++i] < s) continue;
    printf("%d %d\n", mapping[i] - s + 1, i);
  }
  return 0;
}
