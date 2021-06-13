#include <stdio.h>
int main()
{
    double array[4] = {.30,.20,.05,.01};
    for(int i=0;i<4;i++){
        printf("%.2lf ",array[i]);
    }
    double sum=0;
    double nmbr = 0.40;
    double arry[3];
    int i=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            while(sum<nmbr){
                sum+=array[i];
                if(sum>nmbr){
                    sum-=array[i];
                }
                else{
                    arry[i]=array[i];
                    i++;
                }
            }
        }
        if(sum==nmbr){
            break;
        }
    }
    printf("\n");
    for(int i=0;i<3;i++){
        printf("%lf ",arry[i]);
    }
    return 0;
}
