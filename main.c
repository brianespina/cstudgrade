#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int average(int grades[], int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += grades[i];
  }
  return sum / n;
}

int main(void) {
  char students[100][100];
  int grades[100];
  int count = 0;

  printf("How many students\n");
  char buff[100];
  fgets(buff, sizeof(buff), stdin);
  count = (int)strtol(buff, NULL, 10);

  for (int i = 0; i < count; i++) {
    printf("Name:\n");
    fgets(students[i], sizeof(students[i]), stdin);
    students[i][strcspn(students[i], "\n")] = '\0';
    printf("Grade:\n");
    fgets(buff, sizeof(buff), stdin);
    int grade = (int)strtol(buff, NULL, 10);
    grades[i] = grade;
  }

  printf("average grade: %d\n", average(grades, count));
  return EXIT_SUCCESS;
}
