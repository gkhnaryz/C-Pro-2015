#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

char reverse( char *, int);
int second (int dizi[], int elemanSayisi);

int main(){
int u;
int counter=0;


while(1) {


printf("\n0:Exit\n");
printf("1:Solving the mathematical equation\n");
printf("2:Drawing the diamond shape\n");
printf("3:Printing keybord inputs in reverse\n");
printf("4:Finding the second smallest element\n");
printf("5:Distinct random number generation\n");
printf("6:Student's name\n");


printf("\nPlease enter your selection: ");
scanf("%d",&u);

if(u==0)
 break;

 if(u==1) {

 float N,R,S,k,i,j;
float sonuc1=1,sonuc2=0,sum=0;
printf("\nThis program solves a eqation: \n \n");



printf("Please enter positive N,R,S numbers :");
scanf("%f %f %f",&N,&R,&S);


while(1)
 {

if (N <=0 || R <=0 || S <=0 ) {
printf("At least one of entered numbers is negative.\nPlease enter positive N,R,S numbers:  ");
scanf("%f %f %f",&N,&R,&S);
}

else break;

}


for(k=1;k<=R;k++) {
 sonuc1=sonuc1*((3*k*k*k+5)/(k*k));
              }

for(j=1;j<=S;j++) {
sonuc2=sonuc2+((sqrt(3*j*j*j+j+2))/(2*j));
             }

for(i=1;i<=N;i++){
sum=sum+(sonuc1/sonuc2);
            }


printf("Result is : %.2f\n",sum);

}
if(u==2){

int i,j,k,n;

printf("\nThis program  prints the diamond shape: \n");

printf("\nEnter an odd positive number for line number: ");
scanf("%d",&n);

while(1)
 {

if (n%2==0) {
printf("Your number is not odd. Please enter  an odd positive  new number: ");
scanf("%d",&n);
}

else if (n<=0) {
printf("Your number is negative. Please enter an odd positive new number: ");
scanf("%d",&n);
}



else break;

}

for(i=1; i<=(n+1)/2; ) {

for(k=1; (n+1)/2-i+1>=k; k++)

printf(" ");

for(j=1; j<2*i; j++)

printf("*");

printf("\n");

          i++;
                     }
if(2*i-1>=n)
{
for(i=(n+1)/2-1; i>=1; i--)
                     {
for(k=1; (n+1)/2-i+1>=k; k++)

printf(" ");

for(j=1; j<2*i; j++)

printf("*");

printf("\n");
                   }
}

    }

if(u==3)  {



    int  x,i ;
    char b;

    char *a= (char *) malloc ( sizeof(int)*100);


    printf("Reverse sentence program:  \n");


	printf("\nEnter a sentence: ");
    scanf("%c",&b);//Ekraný bekletmek için
 	gets(a);

	x = strlen(a);
    reverse(a,x);
    printf("\n");


}

if(u==4){
int array[1000], n, c, d, swap;

  int i=0, temp, counter=0, flag=1;

  int sonuc;

  printf("Please enter numbers. When you are finished   entering, press -1 buton: \n");

  while(flag==1) {

   scanf("%d", &temp);

  if(temp!= -1) {

   array[i]= temp;
   counter++;

  }

  else flag=0;

   i=i+1;
  }

sonuc=second(array,counter);

printf("The second smallest element of the array is:  %d \n", sonuc);



}

if(u==5){
int i;
    int j;
    int array[20];
    int flag;

    srand(time(NULL));

    for(i=0;i<20;i++)
    {
        array[i] = 1+rand() % 20;
        flag = 0;

        for(j=0; j<=(i-1); j++)
            {
                if (array[i] == array[j])
                {
                    flag = 1;
                    i--;
                }

            }
    }

 for(i=0; i<20; i++)
    {
        printf("%d ", array[i]);

}

   printf("\n");
}


if(u==6){
printf("\nGizem Irmak \n No:130316039\n");
printf("\nMemis Gokhan Aryiz \n No:130316045\n");

}



}





return 0;

}




char reverse( char *temp,  int length)
{


	if (0 <= length) {

     printf("%c", *(temp+length-1));

     length=length-1;

	reverse(temp, length) ;
	}


}



int second (int dizi[], int elemanSayisi)
{
     int temp;
     int i, j;

     for (i=1; i<elemanSayisi; i++)
     {
         for (j=0; j<elemanSayisi-i; j++)
         {
             if(dizi[j] > dizi[j+1])
             {
                        temp = dizi [j];
                        dizi [j] = dizi [j+1];
                        dizi [j+1] = temp;
             }
         }
     }

    return (dizi[1]);
}
