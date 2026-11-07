#include <stdio.h>
int main(){
    int a,b;
    printf("Enter your Two Numbers: ");
    scanf("%d %d",&a,&b);

    printf("Addition=%d ",a+b);
    printf("\nSubstraction=%d",a-b);
    printf("\nMultiflication=%d",a*b);

    if(b!=0){
      printf("\nDivision=%.2f",(float) a/b);
      printf("\nReminder=%d",a%b);
    }
    else{
      printf("In This Case Division and Reminder is not Possible.You Entered Invalid Number.Please Try Again");
    }

    return 0;
    
}