//
// Created by ROG on 24-9-4.
//
#include <stdio.h>
int main(){

    int hour1, minute1;
    int hour2, minute2;

    scanf("%d %d",&hour1,&minute1);
    scanf("%d %d", &hour2,&minute2);

    int hour = hour1-hour2;
    int minute = minute1 - minute2;

    if(minute1<minute2){
        minute +=60;
        hour--;
    }
    printf("时差为%d小时%d分钟",hour,minute);
}


//#include <stdio.h>
//
//int main() {
//    int hour1, minute1;
//    int hour2, minute2;
//
//    // 读取第一个时间
//    scanf("%d %d", &hour1, &minute1);
//    // 读取第二个时间
//    scanf("%d %d", &hour2, &minute2);
//
//    // 计算小时差
//    int hour = hour1 - hour2;
//    // 计算分钟差
//    int minute = minute1 - minute2;
//
//    // 如果分钟差为负数，调整小时和分钟
//    if (minute < 0) {
//        minute += 60;
//        hour--;
//    }
//
//    // 打印结果
//    printf("Time difference: %d hours and %d minutes\n", hour, minute);
//
//    return 0;
//}
