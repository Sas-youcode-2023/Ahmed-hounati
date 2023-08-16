#include <stdio.h>
#include <stdlib.h>

int main(){


float  S , M , N , T[20] ;
int i, plus, moins;
float MAX;
float MIN;
int pos1 , pos2;


printf("veuillez saisir les notes  \n ");

       for(i=0;i<20;i++){
N = 0;
printf("veuillez saisir la note numero  %d : ",i+1);
scanf("%f",&T[i]);
       	N++;
		if(T[i]<0||T[i]>20)

		break;

		 }

 	 S=0;
	  for(i=0;i<10;i++){
	  S=S+T[i];
}
     M=S/N;
     printf("la somme des notes est %.2f \n",S);

printf("la moyenne des notes est %.2f \n",M);

for(i=0;i<10;i++){
	if(T[i]>M){
printf(" \n %.2f est superieure a la moyenne \n",T[i]);
	}
	else if(T[i]<M){
printf(" \n %.2f est inferieure a la moyenne \n",T[i]);
	}
	else
printf("  \n %.2f est egale a la moyenne \n",T[i]);
}

for(i=0;i<10;i++){
	if(T[i]>M){
		plus++;}

		else
			moins++;

}

printf(" le nombre des notes superieure a la moyenne est %d \n",plus);
printf(" le nombre des notes inferieur a la moyenne est %d \n" , moins);

     MAX=T[0];
     MIN=T[0];
     pos1 = 0;
     pos2 = 0;
     for(i=1;i<10;i++){
     	if(T[i]>MAX){
     		MAX = T[i];
     		 pos1=i+1;
	     }

     }
      for(i=1;i<10;i++){
     if(T[i]<MIN){
     		MIN = T[i];
     		 pos2=1+i;
	     }

     }

printf("la note maximume est %.f est la position dans le tableau est %d \n",MAX,pos1);
printf("la note minimum est %.f est la position dans le tableau est %d",MIN,pos2);


     return 0 ;
}
