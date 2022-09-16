#include <stdio.h>
#define ROW 3
#define COL 4
void OuputArray(int arr2[][COL]); 
void MatSort(int **arr);
 
int main()
{
 	int arr[ROW][COL] = 
 	{ {10,5,8,1}, 
  	  {9,2,6,4}, 
  	  {7,12,11,3},
 	};
     int* p[4];
     p[0] = arr[0];
     p[1] = arr[1];
     p[2] = arr[2];
     p[3] = arr[3];
 	MatSort(p);
    OuputArray(arr);
 	return 0;
}

void MatSort(int **arr){
    int *pt = &arr[0][0];
    int size = ROW*COL;  
 	int i, j,tem;
 	for (i=0; i < size; i++)  
 	{
  		for (j=0; j < size-i-1; j++) 
  		{ 
   			if(*(pt+j) > *(pt+j+1))
			{
			    tem = *(pt+j+1);
			    *(pt+j+1) = *(pt+j);
			    *(pt+j) = tem;
			}
		}
	}
}

void OuputArray(int arr2[][COL])
{
	 int i,j,k=1;
	 for (i=0; i<ROW; i++)
	 {
	  	for (j=0; j<COL; j++)
	  	{ 
	   		printf("%3d ",arr2[i][j]);
	   		if ( k%COL==0 )
	    			printf("\n"); 
	   		k++;
	  	}
	 }
}