#include<stdio.h>
#define ROWS 9
#define COLUMNS 9
void main(){
    int row,column,product[ROWS][COLUMNS];
    int i,j;
    printf("     MULTIPLICATION TABLE \n\n");
    printf("     ");
    for(j=1;j<=COLUMNS;j++)
    printf("%4d",j);
    printf("  \n");
    printf("------------------------------\n");
    for(i=0;i<ROWS;i++){
        row=i+1;
        printf("      %2d |    ",row);
        for(j=1;j<=COLUMNS;j++){
            column=j;
            product[i][j]=row*column;
            printf("%4d",product[i][j]);
        }
        printf("\n");
    }
    
}