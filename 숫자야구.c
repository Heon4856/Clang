
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, const char * argv[]) {
    // insert code here...
    int ans[3];
    srand(time(0));
    int random =0;
    for (int i =0; i<3; i++){
        int ran_num =rand()%10;
        if(i >0){
        for (int k = 0; k<i; k++){
            if (ans[k] == ran_num){
                ans[k] = rand()%10;
                k--;
            };
                
        }}
        ans[i] = ran_num;
    }
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2 ,&num3);
    
    int input_num [3];
    
    input_num[0] = num1;
    input_num[1] = num2;
    input_num[2] = num3;
    
    int strike = 0;
    
    for (int a =0; a<3; a++){
        if(input_num[a]== ans[a]){
            strike++;
        }
    }
    int ball = 0;
    for(int idx=0;idx<3;idx++){
        for(int z=0;z<3;z++){
            if(idx!=z && ans[idx] == input_num[z]){
                ball++;
            }
        }
        
    }
    printf("스트라이크 %d, 볼 %d \n", strike,ball);
    if(strike ==0 && ball==0){
        printf("아웃입니다");
    };
    printf("%d %d %d", ans[0],ans[1], ans[2]);
    return 0;
}
