#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

  for (int i = 0; i < count; i++) {
    printf("%s\n", students[i]);
    printf("%d\n", grades[i]);
  }

  return EXIT_SUCCESS;
}
