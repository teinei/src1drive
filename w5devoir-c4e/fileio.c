#include <stdio.h>
int main(void) {
    //
    int N, i;
    double number;
    FILE* ifile;//a file pointer
    //
    char* fname="eg.txt";
    ifile = fopen(fname,"r");// r stands for reading
    //
    fscanf(ifile,"%d",&N);
    printf("There are %d numbers in the file.\n",N);
    //
    for(i=0;i<N;i++){
        //
        fscanf(ifile,"%lf",&number);
        printf("I read %lf from the file.\n",number);
        //
    }
    //
    fclose(ifile);//close the file
    //
    return 0;
}