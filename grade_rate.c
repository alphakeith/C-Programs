#include <stdio.h>

int main() 
{
  // Declaration
  char name[20];
  int mathGrade, progGrade, computingGrade, studentsAverage;
  const int NUM_SUBJECTS = 3;

  // Inputs
              printf("Enter your Name: ");
     scanf("%s", name);
  printf("Enter Math Grade: ");
  scanf("%i", &mathGrade);
  printf("Enter Intro to Programming Grade: ");
  scanf("%i", &progGrade);
  printf("Enter Intro to Computing Grade: ");
  scanf("%i", &computingGrade);

    // Formula to get average
  studentsAverage = (mathGrade + progGrade + computingGrade) / NUM_SUBJECTS;

   // Output
  printf("Average: %i\n", studentsAverage);

   switch(studentsAverage){
        case 90 ... 100:
          printf("Outstanding"); 
          break;
        case 80 ... 89:
          printf("Exellent"); 
          break;
        case 75 ... 79:
          printf("Good"); 
          break;
        case 0 ... 74:
          printf("Failed"); 
          break;
        default:
          printf("Invalid");
    }

  return 0;
}
