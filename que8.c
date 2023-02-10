# include<stdio.h>
void largest(int a){
  if(a%2==0){
    printf("%d is largest and even: \n",a);
  }else{
    printf("%d is largest and odd: \n",a);
  }
}
void smallest(int a){
   if(a%2==0){
    printf("%d is smallest and even: \n",a);
   }else{
    printf("%d is smallest and odd: \n",a);
   }
}
int main(){
    printf("2 February 2023\nAim:To find smallest and largest\nSumit Verma\n");
     int a,b,c;
     scanf("%d%d%d",&a,&b,&c);
     // largest number
      if(a>b){
        if(a>c){
          largest(a);
        }else{
          largest(c);
        }
      }else{
        if(b>c){
          largest(b);
        }else{
          largest(c);
        }
      }
      // smallest number
      if(a<b){
        if(a<c){
          smallest(a);
        }else{
          smallest(c);
        }
      }else{
        if(b<c){
          smallest(b);
        }else{
          smallest(c);
        }
      }

   return 0;
}