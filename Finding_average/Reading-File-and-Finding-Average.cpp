#include <stdio.h>
#include <stdlib.h>

//Taking average of the given data
// by ChronoX

FILE *fptr; //we declared the pointer of file

float find_average(int arr[], int count){ //array, and the count of numbers
	float sum = 0, avg=0;
	
	for (int j = 0; j<=count; j++){
		sum = sum + arr[j];
	}
	avg = sum / count;
	return avg;
}

int main(void){
	
		fptr = fopen("C:\\data.txt","r"); //we opened the file for read
		int num[5000];
		int howmanynumbers = 0;
		
		for(int i = 0; i<5000; i++){
			fscanf(fptr,"%d",&num[i]);	
			
			if (feof(fptr)){ //We are controling end of the file 
				printf("End of the file");
				break; //If its end of the file we are terminating loop
				
			}
			howmanynumbers++; //We are counting how many number do we have
			
		}
		
		
		for(int i = 0; i<howmanynumbers; i++){ //We are controlling that array has the correct numbers
			printf("%d.number is = %d\n",i+1,num[i]);
		}
		
		printf("Total number count = %d\n",howmanynumbers);
		
		printf("Average is = %f",find_average(num,howmanynumbers)); //passing the num array to function
		
		fclose(fptr); //we closed the file
}
