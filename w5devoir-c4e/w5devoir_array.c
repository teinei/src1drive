/*
v2 calculate average of weight, with array
*/
#include <stdio.h>
int main(void) {
    //
    int N, i;//c is case-sensitive
    double number;
    FILE* ifile;//a file pointer
    //
    char* fname="elephant_seal_data.txt";
    ifile = fopen(fname,"r");// r stands for reading
    //
    //
    int c=0;//counter of how many numbers
    //
    int filev=0;
    int ave=0,temp=0,total=0;
    int av1=0,av2=0,av3=0;
    //
    int weight[1000];
    //
    i=0;
    while(!feof(ifile)){ //end of file
        //
        filev=fscanf(ifile,"%d",&N);
        weight[i]=N;
        //
        if(filev==1){
            printf("I read %d from the file.\n",N);
            if(ave==0){
                //
                ave=N;
                //
            }else{
                //
                ave=(N+ave)/2.0;
                //
            }
            c++;
            i++;
            total=total+N;//total weights
            //
        }
        //
    }
    //
    //have to use an array
    /*
    int weight[c];
    //
    fclose(ifile);
    ifile = fopen(fname,"r");
    //
    for(int i=0;i<c;i++){
        //
        while(!feof(ifile)){ //end of file
        filev=fscanf(ifile,"%d",&N);
        //
            if(filev==1){
                //
                weight[i]=N;
                //
            }
        //
        }
        //
        //
    }
    */
    //
    //loop through the array and print values
    int wsize=sizeof(weight)/sizeof(weight[0]);
    printf("sizeof array %d ", wsize);//4000
    //
    int tmp=0,total3=0,av3b=0;
    printf("\n");
    printf("{");
    for(int i=0;i<wsize;i++){
        //
        printf("%d", weight[i]);
        if(i!=(wsize-1))printf(",");
        //
        if(av3!=0)av3=(weight[1]+av3)/2.0;
        else av3=weight[i];
        total3=total3+weight[i];
        //
    }
    printf("}");
    //
    av3b=total3/(double)c;
    //
    av2=total/(double)c;//calculate average by total over counter
    //
    printf("\n");
    //
    printf("\n average: [%d] \n", ave);
    printf("\n average total/counter: [%d] \n", av2);
    printf("\n average using array: [%d] \n", av3);
    printf("\n average using array and total3: [%d] \n", av3b);
    //
    printf("\nThere are %d numbers in the file.\n",c);
    //
    fclose(ifile);//close the file
    //
    return 0;
}