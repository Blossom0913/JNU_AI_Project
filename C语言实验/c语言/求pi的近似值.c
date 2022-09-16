 #include<stdio.h>
 int main(){
     int sign=-1;
     double i=1.0,pi=0.0,pai;
     do
        {
            sign=-sign;
            pi=pi+sign/i;
            i=i+2.0;
        }while(sign/i<-0.000001||sign/i>0.000001);
    pai=pi*4;
    printf("PI/4 is %lf\n",pi);
    printf("PI is %lf",pai);
 }