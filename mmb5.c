#include<stdio.h>
#include<stdlib.h>

#define n 2400
#define s 600

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
	for(int jj=0;jj<n;jj+= s){
        for(int kk=0;kk<n;kk+= s){
			for(int i=0;i<n;i++){
				for(int j = jj; j<((jj+s)>n?n:(jj+s)); j++){
					float temp = 0;
                    for(int k = kk; k<((kk+s)>n?n:(kk+s)); k++){
						temp += a[i][k]*b[k][j];
					}
					c[i][j] += temp;
				}
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
