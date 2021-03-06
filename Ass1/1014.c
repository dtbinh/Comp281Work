/* Student ID  : 200882675
 * Student Name: Michael Chadwick
 * Task No.    : 1014 - Circumference/Area of Circles
 * RunID       : 14213
 * Result      : Wrong Answer
 * Side Note   : It does output the correct answer, but OJ doesn't like it.
 */

#include<stdio.h>

const float PI      = 3.14;                 //constant float for pi
      int   cirOne  = 0, cirTwo = 0;        //input  variables
      float areaSum = 0.0, circumSum = 0.0; //output variables

int main(void) {

    scanf("%d %d", &cirOne, &cirTwo);         //obtain   input
    //printf("%d %d", cirTwo, cirOne);        //testing  purposes
    for(cirOne; cirOne <= cirTwo; ++cirOne) { //loop for adding to the sums

        areaSum   = areaSum   + (cirOne * cirOne * PI)  ; //sum           loop
	circumSum = circumSum + (cirOne * (2     * PI) ); //circumference loop

    }

    printf("%f\n%f", areaSum, circumSum); //output text
	return 0;

}
