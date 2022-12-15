#include <stdio.h>

void I(){
    
    
    char ma [6] [6] = {
                         {'1', '2', '3', '4', '5', '6'}
                        ,{'2', '3', '4', '5', '6', '7'}
                        ,{'3', '4', '5', '6', '7', '8'}
                        ,{'4', '5', '6', '7', '8', '9'}
                        ,{'5', '6', '7', '8', '9', '0'}
                        ,{'6', '7', '8', '9', '0', '1'}              
                     };
                     
    int fila = sizeof(ma)/sizeof(ma[0]);
    int columna = sizeof(ma[0])/sizeof(ma[0][0]);
    
         printf("Inicial\n");
  for (int fi = 0; fi < fila; fi++)
    {  
        for (int ci = 0; ci < columna; ci++)
        {
           
            if(ci==1)
                printf(" %c ", ma[fi][ci]);

            if(fi==2&&ci==2)
                printf(" %c ", ma[fi][ci]);
            
            if(fi==3&&ci==2)
                printf(" %c ", ma[fi][ci]);

            if(fi==1&&ci==3)
                printf(" %c ", ma[fi][ci]);

            if(fi==0&&ci==4)
                printf(" %c ", ma[fi][ci]);

            if(fi==4&&ci==3)
                printf(" %c ", ma[fi][ci]);
            
            if(fi==5&&ci==4)
                printf(" %c ", ma[fi][ci]);

            else
                printf(" ");
        }
        printf("\n");
    }
}

void main()
{
    I();
}