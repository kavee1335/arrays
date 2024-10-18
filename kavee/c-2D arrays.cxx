//arrays in c - 2D arrays
# include<stdio.h>
int main(){
    int i,j ;
    int scores[2][3]={{50,60,70},{80,90,10}};
    for(i=0 ;i<3;i++){
        for(j=0;j<3;j++){
            printf("scores[%d][%d]=%d\n",i,j,scores [i][j]);
        }
    }
    return 0;
}