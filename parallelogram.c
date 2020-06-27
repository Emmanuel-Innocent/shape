#include <stdio.h>
int main(void){
    int x, y, t, foundX, foundY;
    int n=9;
    int arr[n-2];  //forbidden set
    int m = 1;
    int k=0;
    while (k<(n-2) && m<=(n-2)){
        *(arr+k) = m;
        printf("%d\n", m);
        k++;
        m++;
    }
    // ***  to generate the tuple states  ***   //
    for (x=0; x<n; x++){
        for (y=0; y<n; y++){
            foundX = 0;
            foundY = 0;
            //   ***check if the current state is in the forbidden set (arr)***   //
            for (t=0; t<(n-2); t++){
                if (x== *(arr+t)){
                    foundX = 1;
                    break;               
                }
            }
            for (t=0; t<(n-2); t++){
                if (y== *(arr+t)){
                    foundY = 1;
                    break;               
                }
            }
            //   *** execute the desired task at the current state   ***   //
            if (foundX && foundY){
                printf("  ");
            }else{
                printf("* ");
            }
            if (y==(n-1)){
                puts(" ");
            }
        }
    }
}