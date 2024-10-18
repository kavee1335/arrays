// arrys in c -ID arrays
# include<stdio.h>
int main( ){
	int i;
	int (scores)[5]={20,30,40,50,60};
	for(i=0; i<5; i++){
	    printf("scores[%d]=%d\n",i, scores[i]);
	}
	return 0;
	
}