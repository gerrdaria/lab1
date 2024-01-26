#include<stdio.h>
int inv(int, int *);

int main(){
  int abs = 0;
  int n = 0;
  int flag =1;
  int * fl = &flag;
  printf ("удалить нули из кода\n");
  if(!scanf("%d/n",&n)){
    printf("ERROR\n");
    return 0;
  }
  if(n < 0){
    n = n * -1;
    abs = 1;
  }
  int p = inv(inv(n, fl), fl);
  if(abs == 1){
    p = p * -1;
  }
  printf("ваше число без нулей:%d\n", p);
  return 0; 
}





int inv(int n, int * flag){
int r=0;
int caunter = 0;
while(n){
int k=n%10;
if(k!=0){
r=r*10;
r=r+k;
n=n/10;
}
else{
caunter=caunter+1;
n=n/10;
}
}

if(*flag == 1){
printf("Количество нулей:%d\n", caunter);
*flag = 0;
}
return r;
}
