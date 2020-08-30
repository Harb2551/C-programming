#include <stdio.h>

double average(int a[],int size){
	double sum = 0;
	int i;
	for (i=0;i<size;i++){
		sum += a[i];
	}
	return sum/size;
}

int max(int a[],int size){
   int i,max = 0;
   for (i=0;i<size;i++){
   	 if (a[i]>max){
   	 	max = a[i];
   	 }
   }
   return max;
}

int main(){
	FILE *fp1,*fp2;
	int num,i;
    fp1 = fopen("make.txt","r");
	fp2 = fopen("answer-hw3.txt","w");
	fscanf(fp1,"%d",&num);
	int a[num];
	if (fp1 == NULL){
		printf("file not found");
	}
	else{
	  for (i=0;i<num;i++){
		fscanf(fp1,"%d",&a[i]);
	  }
	  for (i=0;i<num;i++){
		printf("%d\n",a[i]);
	  }
	  for (i=0;i<num;i++){
	  	fprintf(fp2,"%d\n",a[i]);
       }
	  fprintf(fp2,"The average is %lf",average(a,num));
	  fprintf(fp2,"\nThe greatest element is %d",max(a,num));
	  printf("The average is %lf",average(a,num));
	  printf("\nThe greatest element is %d",max(a,num));
        }
}