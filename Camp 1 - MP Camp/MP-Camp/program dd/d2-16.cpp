#include <stdio.h>

int main(){
    int dis;
    float price = 0;
    scanf("%d", &dis);
    
    if (dis >= 1){
        price += 35;
        dis--;
    }
    else{
        price += 35 * dis;
        dis = 0;
    }

    if (dis > 0){
        float km = dis > 9 ? 9 : dis;
        price += km * 5.5;
        dis -= km;
    }

    if (dis > 0){
        float km = dis > 10 ? 10 : dis;
        price += km * 6.5;
        dis -= km;
    }

    if (dis > 0){
        float km = dis > 20 ? 20 : dis;
        price += km * 7.5;
        dis -= km;
    }

    if (dis > 0){
        float km = dis > 20 ? 20 : dis;
        price += km * 8;
        dis -= km;
    }

    if (dis > 0){
        float km = dis > 20 ? 20 : dis;
        price += km * 9;
        dis -= km;
    }

    if (dis > 0){
        price += dis * 10.5;
    }

    printf("%.2f", price);

    return 0;
}

