#include <stdio.h>
struct friends{
  char name[10];
  int riqi;
  char h[18];
}; 
int main(){
    int n;
    scanf("%d",&n);
    struct friends p[n],t;
    int i,j;
    for(i=0;i<n;i++){
      scanf("%s",p[i].name);
      scanf("%d",&p[i].riqi);
      scanf("%s",p[i].h);
    }
    for(i=0;i<n-1;i++){
      for(j=i+1;j<n;j++){
      if(p[i].riqi>p[j].riqi){
        t=p[i],p[i]=p[j],p[j]=t;}
      }
    }
    for(i=0;i<n;i++){
      printf("%s %d %s\n",p[i].name,p[i].riqi,p[i].h);}
    return 0;
 }
