#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[]){
    FILE* fp;
    fp=fopen(argv[1],"r");
    if (argc<3 || fp==NULL)
    {
        exit(-1);
    }



    return 0;
}