/*
Suppose there is a staircase, which takes n steps to reach the top. 

Each time you can either climb 1 or 2 steps. 

In how many distinct ways can you climb to the top?
*/


    /*

    Obiviously,Solving staircases by Recursion,the O(n) is expontional,and the made lots of waste for repeat calculating.

    Thus,we shall use Iteration to replace Recursion.

    */
#include<IOSTREAM>
int climbStairs(int n) {

      if(n==0) return 0;

      if(n==1) return 1;

      int* dp = (int*)malloc(sizeof(int)*n);

      dp[0] =1;

      dp[1] =2;

      for(int i=0;i<n-2;i++) {

       dp[i+2]=dp[i]+dp[i+1];

      }

      return dp[n-1];

     }


