//
// Created by hengxin on 10/21/21.
//

#include <stdio.h>
int main() {
  /**
   * Name and gender
   */
  char first_name[5];
  char last_name[3];
  char gender;

  /**
   * Birthday
   */
  int birth_year;
  int birth_month;
  int birth_day;
  char weekday[10];

  /**
   * Scores
   */
  int c_score;
  int music_score;
  int medicine_score;

  /**
   * Statistics
   */
  double mean;
  double standard_deviation;
  int rank;

  /**
   * Tayu lo
   * M
   * 1957-7-20
   * Tuesday
   * 40 100 80
   * 10% 73.3 24.94
   */
  scanf("%4s %2s %c %d-%d-%d %9s %d %d %d %d %% %lf %lf",
        first_name, last_name, &gender,
        &birth_year, &birth_month, &birth_day, weekday,
        &c_score, &music_score, &medicine_score,
        &rank, &mean, &standard_deviation);

  printf("%s %s \t %c \n"
         "%.2d-%d-%d, %.3s.\n"
         "C = %d \t Music = %d \t Medicine = %d\n"
         "Mean = %.1f \t SD = %.2f \t Top = %d%%\n",
         first_name, last_name, gender,
         birth_month, birth_day, birth_year, weekday,
         c_score, music_score, medicine_score,
         mean, standard_deviation, rank);

  return 0;
}

