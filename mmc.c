#include<stdio.h>
#include<stdlib.h>

#define n 2400

float a[n][n];
float b[n][n];
float c[n][n];

void fillMatrix(){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j]=rand()/(float)rand();
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			b[i][j]=rand()/(float)rand();
		}
	}
}

void fillC(){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			c[i][j]=0.0;
		}
	}
}

void matrixMultiply(){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				c[j][i]+=a[j][k]*b[k][i];
			}
		}
	}
}

void printMatrix(){
	printf("\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%f\t",c[i][j]);
		}
		printf("\n");
	}
}


int main()
{
	printf("Matrices cuadradas de %dx%d",n,n);
	
	fillMatrix();
	fillC();
	matrixMultiply();
	//printMatrix();
	
	return 0;
}
