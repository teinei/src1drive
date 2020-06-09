/*
7.3b reading from a file
Dartmouth IMT -C programming
******************************
Unit 7.3 File operations in C
ii/b Reading from a file
******************************
version 3, functions are used
*/
#include <stdio.h>

int average(char* filename);

int main(void)
{
    // 
    char* filename = "studentGrades.txt";
    int av0 = average(filename);
    //    
    return 0;
}

int average(char* filename){
    //
    int ngrades = 0; 
    int  grade ; // avoid division by zero
    int sumgrades = 0;
    double average = 0.00;
    int checkempty;
    //
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
    //
    return average;
    //
}