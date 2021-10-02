#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int x;
        scanf("%d",&x);
        switch(x%4){
            case 0:
                printf("\nNorth");
                break;
            case 1:
                printf("\nEast");
                break;
            case 2:
                printf("\nSouth");
                break;
            case 3:
                printf("\nWest");
                break;
        }
    }
    return 0;
}
