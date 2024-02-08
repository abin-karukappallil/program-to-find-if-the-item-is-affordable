/*
Problem Statement

You have a certain number of 100 rupee notes, 10 rupee notes and 1 rupee notes with you.
There is an item you want to buy whose price is given to you.
Write a program to find if the item is affordable, that is the price of the item is less than or equal to the current money you have
*/
#include <stdio.h>
void main() {
	float hundred,ten,one,price,sum;
    /*
    Input
    Four non negative integers. 
    The first input is an integer representing the number of 100 rupee notes.
    The second input is an integer representing the number of 10 rupee notes.
    The third input is an integer representing the number of 1 rupee notes.
    The fourth input is an integer representing the price of the item.
    */
	scanf("%f %f %f %f", &hundred,&ten,&one,&price);
	hundred = hundred * 100;
	ten = ten * 10;
	one = one * 1;
	sum = hundred + ten + one;
    /*
    Output
    You have to output 1 if the item is affordable.
    You have to output 0 if the item is not affordable.
    */

	if(sum>=price){
	printf("1");
	}
	else if(sum<price){
	printf("0");
	}
}