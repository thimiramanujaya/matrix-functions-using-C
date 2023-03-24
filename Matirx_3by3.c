#include<stdio.h>

int main() {
	
	int n, i, det[3], Det=0, neg_det[1];
	int Matrix[3][3];
	
	printf("Input 9 values for a Matrix :\n");
	
	for(n=0; n<3; n++) {
		for(i=0; i<3; i++) {
			scanf("%d", &Matrix[n][i]);
		}
		
	}
	printf("\n\n Your Martix :\n\n");
	
	for(n=0; n<3; n++) {
		for(i=0; i<3; i++) {
			printf("	%d  ", Matrix[n][i]);
		}
		printf("\n\n");
	}
	
	det[0] = (Matrix[1][1]*Matrix[2][2])- (Matrix[2][1]*Matrix[1][2]);
	printf(" det0 : %d \n",det[0]);
		
	neg_det[1] = (Matrix[0][1]*Matrix[2][2])- (Matrix[2][1]*Matrix[0][2]);
	det[1] = neg_det[1] * (-1);
	printf(" det1 : %d \n" , det[1]);
	
	det[2] = (Matrix[0][1]*Matrix[1][2])- (Matrix[1][1]*Matrix[0][2]);
	printf(" det2 : %d \n",det[0]);
		
	for(n=0; n<3; n++) {
		Det = Det + (Matrix[n][0]*det[n]);
	}	
	
	printf("\n\n Determinant of the 3by3 Matrix : %d",Det);
		
	 
}

	
	
