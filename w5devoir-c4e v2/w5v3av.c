/*
v2 of array, v3 overall
functions are coded
*/
//struct of array of arraysize

/*
7.3b reading from a file
Dartmouth IMT -C programming
******************************
Unit 7.3 File operations in C
ii/b Reading from a file
******************************
version 4, functions are used - in a make-able file
*/
#include <stdio.h>

int average(char* filename);
void file2array(char* filename);

int main(void)
{
    // 
    char* filename = "elephant_seal_data.txt";
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
    printf("{");//jo code
    while (fscanf(gradesfile, "%d", &grade) != EOF)
    {
        if(ngrades!=0)printf(",");//jo code
        ngrades++;
        sumgrades += grade;
        //jo code
        printf("%d",grade);
        //jo code
    }
    printf("}");//jo code
    printf("\n");//jo code

    average = sumgrades / (double) ngrades;
    printf("%.2lf\n", average);
    fclose(gradesfile);
    //
    return average;
    //
}
    