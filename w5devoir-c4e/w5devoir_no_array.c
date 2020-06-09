/*
v1 calculate average of weight, without array
*/
#include <stdio.h>
int main(void) {
    //
    int N, i;
    double number;
    FILE* ifile;//a file pointer
    //
    char* fname="elephant_seal_data.txt";
    ifile = fopen(fname,"r");// r stands for reading
    //
    //fscanf(ifile,"%d",&N);
    //printf("There are %d numbers in the file.\n",N);
    //
    //
    //int c =getc(ifile);//
    /*
    do{
        //
        fscanf(ifile,"%lf",&number);
        printf("I read %lf from the file.\n",number);
        //
    }while(!feof(ifile));
    */
    //
    int c=0;//counter of how many numbers
    int filev=1;//fscanf(ifile,"%d",&N);//value read from file
    int endbool=1;//end of file
    //printf("\n [%d] \n",endbool);
    //
    int ave=0,temp=0,total=0;
    int av1=0,av2=0;
    //
    while(!feof(ifile)){ //end of file
        //
        filev=fscanf(ifile,"%d",&N);
        //
        if(filev==1){
            printf("I read %d from the file.\n",N);
            if(ave==0){
                //
                ave=N;
                //printf("\n average: [%d] \n", ave);
                //
            }else{
                //
                ave=(N+ave)/2.0;
                //printf("\n average: [%d] \n", ave);
                //
            }
            c++;
            total=total+N;
            //printf("\n average: [%d] \n", ave);
            //
            //endbool=feof(ifile);
        }
        //
    }
    //
    av2=total/(double)c;//
    //
    printf("\n average: [%d] \n", ave);
    printf("\n average total/counter: [%d] \n", ave);
    //
    printf("\nThere are %d numbers in the file.\n",c);
    //
    //printf("\ntypeof(%d)\n",feof(ifile));
    //printf("\ntypeof(%d)\n",fscanf(ifile,"%d",&N));
    //
    fclose(ifile);//close the file
    //
    return 0;
}