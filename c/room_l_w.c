#include<stdio.h>
void main(){
int room_length;
int room_width;
int table_length;
int table_width;
printf("enter length of room");
scanf("%d", room_length);
printf("enter width of room");
scanf("%d", room_width);
printf("enter length of table");
scanf("%d", table_length);
printf("enter width of table");
scanf("%d", table_width);
if(room_length>0 && room_width>0 && table_length>0 && table_width>0){
if(table_length<room_length && table_width<room_width){
printf("table can fit here");
}
}
}