/*• Write a program that will compute for the
students average
• The user will input the following
• Name
• Math
• Science
• English
• If the average is equal and above 75, status
is “Congratulations! You passed the
semester.” else “You failed the semester”.
• You will display “You need to re-enroll
subject name” every subject with failed
grade.*/

#include <stdio.h>

int main() {
  // Declaration
  char name[20];
  int mathGrade, scienceGrade, englishGrade, studentsAverage;
  const int NUM_SUBJECTS = 3;

  // Inputs
  printf("Enter your Name: ");
  scanf("%s", name);
  printf("Enter Math Grade: ");
  scanf("%i", &mathGrade);
  printf("Enter Science Grade: ");
  scanf("%i", &scienceGrade);
  printf("Enter English Grade: ");
  scanf("%i", &englishGrade);

  // Formula to get average
  studentsAverage = (mathGrade + scienceGrade + englishGrade) / NUM_SUBJECTS;
  // Output
  printf("Average: %i\n", studentsAverage);

  if (studentsAverage >= 75) {
    printf("Congratulations! You passed the semester.\n");
  } else {
    printf("You failed the semester.\n");
  }

  if (mathGrade < 75) {
    printf("You need to re-enroll Math subject.\n");
  }
  if (scienceGrade < 75) {
    printf("You need to re-enroll Science subject.\n");
  }
  if (englishGrade < 75) {
    printf("You need to re-enroll English subject.\n");
  }

  return 0;
}

