#include<stdio.h>

int main() {
	
	int n, i, det;
	int Matrix[2][2];
	
	printf("Input 4 values for a Matrix :\n");
	
	for(n=0; n<2; n++) {
		for(i=0; i<2; i++) {
			scanf("%d", &Matrix[n][i]);
		}
		
	}
	printf("\n\n Your Martix :\n\n");
	
	for(n=0; n<2; n++) {
		for(i=0; i<2; i++) {
			printf("	%d  ", Matrix[n][i]);
		}
		printf("\n");
	}
	
	printf("\n\n Transpose Matrix ->\n\n");
	
	for(i=0; i<2; i++) {
		for(n=0; n<2; n++) {
			printf("	%d  ", Matrix[n][i]);
		}
		printf("\n");
	}
	
	det = ((Matrix[0][0])*(Matrix[1][1])) - ((Matrix[0][1])*(Matrix[1][0]));
	
	printf("\n\n Determinant of the 2by2 Matrix : %d\n\n",det);
	
	printf(" Inverse Martix ->\n\n");
	
	printf("	( 1/%d )", det);
	
	for(n=1; n>=0; n--) {
		printf("  [  %d ", Matrix[n][1]);
		
		printf("	   -%d ] ", Matrix[0][n]);
		printf("\n");
		
		break;
	}
	
	printf("	          [ -%d", Matrix[1][0]);
		
	printf("	    %d ]", Matrix[0][0]);
	printf("\n");
	
	
	
}
