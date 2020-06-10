/*
https://courses.edx.org/courses/course-v1:Dartmouth_IMTx+DART.IMT.C.07+2T2018/discussion/forum/b9abd58bf81ca3a473efc0c75ae38a9966731b25/threads/5dfe43227febe5095200277a
*/

#include <stdio.h>

int main(void)
{
    int n = 0;
    double grade, mygrade;
    int found = 0;
    char *filename = "gradeComparison.txt";
    double checkempty;
    FILE *sections = fopen(filename, "r");

    int data;
    data = fscanf(sections, "%lf", &checkempty);
    if (data == EOF)
    {
        printf("No data found!\n");
        return 1;
    }

    while (fscanf(sections, "%lf", &grade) != EOF)
    {
        if (n == 0)
            mygrade = grade;
        n++;
        if (mygrade < grade)
        {
            found = 1;
            n++;
            break;
        }
    }

    if (found)
        printf("No %d\n", n);
        
    else
        printf("Yes\n");
    fclose(sections);
    return 0;
}
