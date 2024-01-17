// Average 3

// Read four numbers (N1, N2, N3, N4), which one with 1 digit after the
//  decimal point, corresponding to 4 scores obtained by a student.
//  Calculate the average with weights 2, 3, 4 e 1 respectively,
//  for these 4 scores and print the message "Media: " (Average),
//  followed by the calculated result. If the average was 7.0 or more,
//  print the message "Aluno aprovado." (Approved Student). If the
//  average was less than 5.0, print the message: "Aluno reprovado."
//  (Reproved Student). If the average was between 5.0 and 6.9,
//  including these, the program must print the message
//  "Aluno em exame." (In exam student).

// In case of exam, read one more score. Print the message
//  "Nota do exame: " (Exam score) followed by the typed score.
//  Recalculate the average (sum the exam score with the previous
//  calculated average and divide by 2) and print the message
//  “Aluno aprovado.” (Approved student) in case of average 5.0 or more)
//  or "Aluno reprovado." (Reproved student) in case of average 4.9 or
//  less. For these 2 cases (approved or reproved after the exam)
//  print the message "Media final: " (Final average) followed by
//  the final average for this student in the last line.

// Input
// The input contains four floating point numbers that represent the
//  students' grades.

// Output
// Print all the answers with one digit after the decimal point.

// Input Sample	        Output Sample
// 2.0 4.0 7.5 8.0       Media: 5.4
// 6.4                   Aluno em exame.
//                       Nota do exame: 6.4
//                       Aluno aprovado.
//                       Media final: 5.9

// 2.0 6.5 4.0 9.0       Media: 4.8
//                       Aluno reprovado.

// 9.0 4.0 8.5 9.0       Media: 7.3
//                       Aluno aprovado.

#include <stdio.h>

int main() {
  double score[5], totalScore;
  int counter = 0, weights[] = {2, 3, 4, 1}, totalWeights = 10;

  scanf("%lf %lf %lf %lf", &score[0], &score[1], &score[2], &score[3]);

  for(counter; counter <= 4; counter++) {
    totalScore += score[counter] * weights[counter];
  }

  totalScore /= totalWeights;

  if(totalScore >= 7.0) {
    printf("Media: %.1lf\n", totalScore);
    printf("Aluno aprovado.\n");
    return 0;
  }

  if(totalScore < 5.0) {
    printf("Media: %.1lf\n", totalScore);
    printf("Aluno reprovado.\n");
    return 0;
  }

  printf("Media: %.1lf\n", totalScore);
  printf("Aluno em exame.\n");
  scanf("%lf", &score[4]);
  printf("Nota do exame: %.1lf\n", score[4]);

  totalScore = (totalScore + score[4]) / 2;

  if(totalScore >= 5.0) {
    printf("Aluno aprovado.\n");
  } else {
    printf("Aluno reprovado.\n");
  }
    printf("Media final: %.1lf\n", totalScore);

  return 0;
}