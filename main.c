/*=======================================================
Program: MinMax
Objectives: รับข้อมูลจำนวนเต็มบวก จำนวนไม่เกิน 10 ค่า
  หากใส่ข้อมูลที่มีค่าน้อยกว่าหรือเท่ากับ 0 จะหยุดรับข้อมูล
  จากนั้นโปรแกรมจะแสดงจำนวนข้อมูลที่รับมา ค่าสูงสุด และ ค่าต่ำสุด
Input: data จำนวนไม่เกิน 10 ค่า
Output: n (จำนวนข้อมูล), max (ค่าสูงสุด) และ min (ค่าต่ำสุด)
Programmer: Panupong Sornkhom (panupongs@nu.ac.th)
Version: 1.0
Date : 2020-07-30
========================================================*/
#include <stdio.h>
#include <limits.h>

int main(void) {
  /* Variable declaration */
  int data, counter = 0, min = INT_MAX, max = 0;

  /* Loop for read and process data */
  while (counter<10) {
    /* Read data */
    printf("Enter data %d: ",counter+1);
    scanf("%d",&data);

    /* data validation */
    if (data <=0 )        // if data is invalid
      break;              // end loop  
    
    if (data < min)       // if found new min value
      min = data;         // let min = new min value

    if (data > max)       // if found new max value
      max = data;         // let max = new mzx value

    counter++;            // update counter value
  }                                   // end while (counter < 10)

  /* Show result */
  printf("n = %d, max = %d, min = %d\n",counter,max,min);
  return 0;
}