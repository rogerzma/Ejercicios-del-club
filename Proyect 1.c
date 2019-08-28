#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int xc=0,yc=0,zc=0,x,y,z;
    while(n--){
        scanf("%d",&x);
        scanf("%d",&y);
        scanf("%d",&z);
        xc+=x;
        yc+=y;
        zc+=z;
              }
              if(xc==0 && yc==0 && zc==0)
              {
                  printf("Yes");
              }
              else
              {
                  printf("No");
              }
    return 0;
}
