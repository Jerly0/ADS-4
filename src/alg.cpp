
int countPairs1(int *arr, int len, int value) {
  int count = 0;
  for (int i = 0, i < len - 1, i++) {
    for (int k = i + 1, k < len, k++) {
      if (arr[i] + arr[k] == value) {
        count += 1;
      }
    }
  }
  return count;
}
int countPairs2(int *arr, int len, int value) {
  return 0;
}
int countPairs3(int *arr, int len, int value) {
  return 0;
}
