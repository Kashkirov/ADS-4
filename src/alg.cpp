// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
int counter = 0;
    for (int i = 0; i < len; i++) {
        for (int j = 0; j != i && j < len; j++) {
            if ((arr[i] + arr[j]) == value) {
                counter++;
            }
        }
    }
    return counter;
}
int countPairs2(int *arr, int len, int value) {
    int counter = 0;
    for (int i = 0; i < len; i++) {
        for (int j = len-1; j > i; j--) {
            if ((arr[i] + arr[j]) == value) {
                counter++;
            }
        }
    }
    return counter;
}
int countPairs3(int *arr, int len, int value) {
    int counter = 0;
    for (int i = 0; arr[i] < value; i++) {
        for (int j = len - 1; j > i; j--) {
            if ((arr[i] + arr[j]) == value) {
                counter++;
            }
        }
    }
    return counter;
}
