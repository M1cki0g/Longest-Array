#include <stdio.h>
#include <stdlib.h>

int main()
{int t,l,r,i=0,j,k=0;

    scanf("%d",&t);

    while(t--){
int tab[2];
        scanf("%d %d",&l,&r);

        while(l+i<=r){
            k++;
            i+=k;
        }

        printf("%d\n",k);
     k=0;
     i=0;
    }

    return 0;
}
