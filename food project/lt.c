#include<stdio.h>
#include<stdlib.h>
#define x 1024
int main()
{
    char *file = " ";
    char *filename ="lab.txt";
    FILE *input_file= fopen(filename,"r");
    char Y [ x];
    char *token;
    if(input_file == NULL)
    {
        fprintf(stderr,"acan not open file %s\n",filename);

    }
    else
    {
        while (fgets(Y,x,input_file)!= NULL)
        {
            /* code */
            token=strtok(Y, file);
            while (token!= NULL)
            {
                printf("%s\n",token);
                token=strtok(NULL,file);
            }
            
        }
        
    }
    
    
}