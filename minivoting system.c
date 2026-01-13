#include<stdio.h>
int main(){
int vote;
  int a=0, b=0 ,c=0;

   printf(--mini voting system--\n);
   printf(vote 1 for a, 2 for b, 3 for c (enter done for finish)\n);
    
     do{
        printf("enter voote: ");
        scanf("%d", &vote);
         
        if (vote==1)a++;
        else if (vote==2)b++;
        else if (vote==)c++;
     }while(vote!=0);
      
     printf("\nfinal voets-> a:%d, b:%d, c:%d\n",a,b,c);

     if (a > b && a > c) printf("winner is candidate a\n");
    else if (b > a && b > c) printf("winner is candidate b\n");
    else if (c > a && c > b) printf("winner is candidate c\n");
    else printf("No winner or a tie.\n");

    return 0;
}


















