/*
v2 of array, v3 overall
functions are coded
*/
//struct of array of arraysize
struct arraySized{
    //
    int size;
    int weight_array;
};

//function to calculate average of an array of int
double* array_average_and_size(int* array);
struct arraySized file_to_array(char* filename);
int counter(int* array);

#include <stdio.h>
int main(void) {
    //
    int tmp_weight, i;//c is case-sensitive
    //double number;
    //FILE* ifile;//a file pointer
    //
    char* fname="elephant_seal_data.txt";
    //ifile = fopen(fname,"r");// r stands for reading
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
    //loop through the array and 
    //print array values
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
    //fclose(ifile);//close the file
    //
    //the following lines in main are used for 
    //testing functions
    //int* test1= file_to_array("test file name");//
    //
    return 0;
}

struct arraySized file_to_array(char* filename){
    //test pointers and args
    char* local_fname = filename;
    int tmp_weight=0,ave=0,av1=0,av2=0,av3=0,av3b=0,total=0,counter0=0,i=0,filev=0;
    int counter=0;
    int weightL[10000];
    int* weight_pointer;
    //
    //
    printf("file name is \"%s\"\n", filename);
    printf("file name is \"%s\"\n", local_fname);
    //
    FILE* ifile;//a file pointer
    ifile = fopen(local_fname,"r");// r stands for reading
    //
    //
    i=0;//int to contol loop
    while(!feof(ifile)){ //end of file
    //
        filev=fscanf(ifile,"%d",&tmp_weight);
        weightL[i]=tmp_weight;
        //
        if(filev==1){
            printf("I read %d from the file.\n",tmp_weight);
            if(ave==0){
                ave=tmp_weight;
            }else{
                ave=(tmp_weight+ave)/2.0;
            }
            counter0++;
            i++;
            total=total+tmp_weight;//total weights
        }
        //
    }
    //
    int real_weight[counter0];
    //
    for(int i=0;i<counter0;i++){
        //
        real_weight[i] = weightL[i];
    }
    //
    fclose(ifile);
    //
    //weight_pointer=&real_weight[0];
    struct arraySized weight_struct;
    weight_struct.size=counter0;
    weight_struct.weight_array=real_weight;
    //
    //b
    return weight_struct;
}