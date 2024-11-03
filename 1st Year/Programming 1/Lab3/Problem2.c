#include <stdio.h>
#define N 3
#define job_title_length 30 // Assume that each job string doesn't exceed 30

int main(){
  char job_titles[N][job_title_length];
  double salaryRanges[N][2];
  double averageSalaries[N];


  // Read job titles
  for (int i = 0; i < N; i++) {
    printf("Enter job title for job %d: ",i+1);
    scanf("%s",&job_titles[i]);
    printf("\n");
  }

  // Read salary ranges
  for(int i=0;i<N;i++){

    printf("Enter low and high salary: ");

    for(int j=0;j<2;j++){
      scanf(" %lf", &salaryRanges[i][j]);
      if ( salaryRanges[i][j] < 0) {
        printf("INVALID SALARY ONLY POSITIVE NUMBERS ARE ALLOWED, YOU WILL RESTART THE APP AS A PUNISHMENT >:( \n");
        return 0;
      }
    }
    printf("\n");
  }


  // Computes averageSalary
  double averageSalary;
  double sum;
  for (int i = 0; i < N; i++){
    sum = 0;
    for (int j = 0; j < 2; j++){ // computes (lowSalary+highSalary)
      sum+= salaryRanges[i][j];
    }
    averageSalary = (double) sum / 2.0;
    averageSalaries[i] = averageSalary;
  }


  // Print averageSalary array along with the job
  for(int i=0;i<N;i++){
    printf("Job %s 's low salary: %lf, high salary: %lf, average salary is: %lf \n", job_titles[i], salaryRanges[i][0],salaryRanges[i][1] ,averageSalaries[i]);
  }


  double highestSalary = averageSalaries[0];
  double lowestSalary = averageSalaries[0];
  for (int i = 0; i < N; i++) {
    if (averageSalaries[i] > highestSalary) {
      highestSalary = averageSalaries[i];
    }
    if (averageSalaries[i] < lowestSalary) {
      lowestSalary = averageSalaries[i];
    }
  }
  printf("Highest Average Salary is: %lf \n, Lowest Average Salary is: %lf \n", highestSalary, lowestSalary);
}