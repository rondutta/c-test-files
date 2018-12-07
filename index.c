#include<stdio.h>

struct mapper{
    float x;
    float y;
    float e;
};

struct mapper set[10];
struct mapper res[10];

int main(){
    int i,j=0;
    printf("\nEnter values for mapper");
    for(int i=0;i<10;i++){
     scanf("%f%f%f",&set[i].x,&set[i].y,&set[i].e);
     int temp = set[i].e;
     if(temp>=1){
         res[j].x = set[i].x;
         res[j].y = set[i].y;
         res[j].e = temp;
         j++;
     }
    }
    //return the resultant dataset as you want
    printf("The resultant set is\n");
    for(int i=0;i<10;i++)
     printf("%f%f%f",res[i].x,res[i].y,res[i].e);
    return 0;
}