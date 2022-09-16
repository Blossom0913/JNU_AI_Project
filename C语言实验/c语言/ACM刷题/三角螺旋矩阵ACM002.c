#include<stdio.h>

int main()
{
    int N,value,row,col,dir,i,j, n;
    while(scanf("%d",&N)!=EOF)
    {   
        int tri[24][24]={0};
         row = col = 1;
         value = 1;
         for(;value<=N;++value)
            tri[row++][col]=value;
         row = N;
         col =2 ;
         value = N+1;
         for(;value<=2*N-1;++value)
             tri[row][col++] = value;
         row = N-1;
         col = N-1;
         value = 2*N;
         for(;value<=3*N-3;++value)
             tri[row--][col--] = value;
         row = 2;
         col = 2;
         value = 3*N-2;
         dir = 1;
         while(value<=N*(N+1)/2)
         {
              if(1==dir)
              {
                 if((0==tri[row+1][col]))
                   tri[++row][col] = value;
                 else
                 {
                     dir = 2;
                     tri[row][++col] = value;
                 }
              }
              else if(2==dir)
              {
                   if((0==tri[row][col+1]))
                     tri[row][++col] = value;
                   else
                   {
                       dir = 3;
                       tri[--row][--col] = value;
                   }
              }
              else
              {
                    if((0==tri[row-1][col-1]))
                      tri[--row][--col] = value;
                    else
                    {
                        dir=1;
                        tri[++row][col] = value;
                    }
              }
              ++value;
         }
         row = 1;
         for(;row<=N;++row)
         {  
             col = 1;
            for(;col<=row;++col)
            {   
                printf("%d",tri[row][col]);
                if(!(row==N&&col==row))
                  {printf(" ");}
                tri[row][col] = 0;
            }
         }
         printf("\n");
    }
    return 0;
}