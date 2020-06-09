/*
7.3b reading from a file
Dartmouth IMT -C programming
******************************
Unit 7.3 File operations in C
ii/b Reading from a file
*/
#include <stdio.h>
int main(void)
{
    int ngrades = 0;
    int  grade ; // avoid division by zero
    int sumgrades = 0;
    double average = 0.00;
    int checkempty;

    char *filename = "studentGrades.txt";

    FILE * gradesfile = fopen(filename, "r");
    int data;
    data = fscanf(gradesfile, "%d", &checkempty);
    if (data == EOF)
    {
        printf("No data found!\n");
        return 1;
    }

    while (fscanf(gradesfile, "%d", &grade) != EOF)
    {
        ngrades++;
        sumgrades += grade;
    }

    average = sumgrades / (double) ngrades;
    printf("%.2lf\n", average);
    fclose(gradesfile);
    return 0;
}