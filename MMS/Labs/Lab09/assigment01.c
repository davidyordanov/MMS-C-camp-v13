#include <stdio.h>

int getWoodForCut(int *arr, int N, int K){
    int sumWood = 0;
    for (int i = 0; i < N; i++){
        if (heights[i]>k){
            sumWood+=(heights[i]-K);
        }
        return sumWood;
        
    }
    
}

int main(){
int N,arr[1000000], B, maxHeight = -1;
scanf("%d", &N);
for (int i = 0; i < N; i++){
    scanf("%d", &heights[i]);
    if(maxHeight<heights[i]){
        maxHeight = heights[i];
    }
}
scanf("%d",&B);
for (int j = maxHeight; j >0 &&curWood<B; j--){
    cutWood =getWoodForCut(heights,N,j);
}
scanf("%d\n",j);


}
