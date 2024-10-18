//arrays in C - 3D arrays
#include<stdio.h>
int main( ){
int i,j,k ;
int scores[2][2][3] = { {{10,20,30},{40,49,60}},{{70,80,90}}};  
for (i=0;i<2;i++) {
    for(j=0;j<2;j++){
       for(k=0;k<3;k++){
            printf("scores[%d][%d][%d]=%d\n",i,j,k, scores[i][j][k]);
        }
    }
}
return 0;

}


