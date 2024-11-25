#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i, max ,min;
    printf("entrer n\n"); //n est mis pour la taille
    scanf("%d",&n);
    int t[n];
    for(i=0;i<n;i++){
        printf("entrer un nombre\n");
        scanf("%d",&t[i]);
    }// recherche du max et du min
    max=t[0];
    for(i=1;i<n;i++){// pour le max
        if(t[i]>max){
            max=t[i];
        }min=t[0];
         if(min>t[i]){
            min=t[i];
    }
    printf("le max est %d et le min est %d\n",max,min);

        }
        return 0;
    }


