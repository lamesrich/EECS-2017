/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   lab8.c
 * Author: Richemond Louidor
 * Assignment: Lab8
 * Created on May 27, 2017, 12:23 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SZ 200
static int seatingChart [SZ] = {0};

static int A_s =0;
static int A_e =50;

static int B_s =50;
static int B_e =100;

static int C_s =100;
static int C_e =200;



void Menu();
void SeatSelA();
void SeatSelB();
void SeatSelC();
void Itinerary();//(int cusSeats [], int sz, int price);


int main(int argc, char** argv) 
{
    
    Menu();
    return 0;
}
/************************* Menu ***********************************************
*   displays menu
*   gets user input 
*/
void Menu()
{
   int userInput=0;
    
    printf("\t\tPlease type\n\t1 for section A, $50/ticket\n\t");
    printf("2 for section B, $70/ticket\n\t");
    printf("3 for section C, $80/ticket\n\t0 to exit\n\tInput: ");
    //scanf("%d", &userInput); 
    userInput=1;
    
    while(userInput != 0)
    {        
        switch(userInput)
        {
            case 1:
                printf("Case 1 activates\n");
                SeatSelA();
                break;
            case 2:
                printf("Case 2 activates\n");
                SeatSelB();
                break;
            case 3:
                printf("Case 3 activates\n");
                SeatSelC();
                break;
            default:
                printf("\n\tWrong input\n\tTry again\n\tInput:");
        }
        userInput=0;
        //scanf("%d", &userInput); 
    }/*end of while loop*/
}/*end of Menu()*/

/**********************************SeatSelA**************************************
* determines user seats
* generate random seats in section 
*/
void SeatSelA()
{

    int tickets=0; 
    int i=0;
    int seatSel=0;
    static int ct=0;
   
    
   
    printf("A How many tickets: \n");
    /*scanf("%d", &tickets);*/
    printf("A before while  \n");
    tickets=50;
    
        
    while(tickets>0 && A_s<A_e)
    {
        seatingChart[A_s]=1;  


        A_s++;
        tickets--;
    }
   /* if(ct==0)
    {
        ct++;
       SeatSelB();
       
    }*/
    
    printf("");
   printf("\nA print whole array \n\n");
    
    for(i=0; i<200; i++)
    {
        printf("%4d", seatingChart[i]);
    }
    
    printf("\n\n");
    
}/*End of Seatsel()*/


/**********************************SeatSelB**************************************
* determines user seats
* generate random seats in section 
*/
void SeatSelB()
{
    srand(time(0));
    int tickets=0; 
    float cost=80.00;
    int i=0;
    int seatSel=0;
    
    static int secBStart=50;
    static int secBEnd=100;
    int ct=0;
    printf("B How many tickets: \n");
    /*scanf("%d", &tickets);*/
    printf("B before while  \n");
    tickets=1;
    int custSeats[tickets];
    int size=tickets;
    printf("\nB tickets = %d", tickets);
    
    
    while(tickets>0 && B_s<B_e)
    {
        printf("\nB while loop");
        
        seatingChart[B_s+10]=B_s;
        custSeats[i]=B_s;
        i++; /* customer seating ticket incrementor*/
        B_s++;
        tickets--;
        
    }
    printf("\nend of while\n\n");
    // Itinerary(custSeats, size);
    SeatSelA();
}/*End of Seatsel()*/


/**********************************SeatSelC**************************************
* determines user seats
* generate random seats in section 
*/
void SeatSelC()
{
    srand(time(0));
    int tickets=0;   
    float cost=70.00;
    int i=0;
    int seatSel=0;
    
    static int secCStart=100;
    static int secCEnd=200;
    int ct=0;
    printf("How many tickets: \n");
    /*scanf("%d", &tickets);*/
    printf("before while  \n");
    tickets=50;
    printf("\ntickets = %d", tickets);
    
    for(i=secCStart; i<secCEnd; i++)
    {
         seatingChart[i]=1;            

    }
    
    printf("\ncounter = %d\n\n", ct);
    
    for(i=secCStart; i<secCEnd; i++)
    {
        printf("%4d", seatingChart[i]);
    }
    
    printf("\n\n");
}/*End of Seatsel()*/
void Itinerary()//(int cusSeats [], int sz, int price)
{
    int i=0;
    const int sz=5;
    int total=0;
    int price =0;
    int cusSeats[5]={50, 100, 63, 18, 10};
    int ct=0;
    printf("\n\n\nPrinting Itinerary\n");   
    while(ct < sz)
    {
         ct++;
        if(cusSeats[i]<50)
        {
            price =50;
            printf("Ticket %d\nSection A\nSeat: %d\nPrice $%d.00\n\n",ct, cusSeats[ct], price);
        }
        if(cusSeats[ct]<100 && cusSeats[ct]>50)
        {
            price =60;
            printf("Ticket %d\nSection B\nSeat: %d\nPrice $%d.00\n\n",ct, cusSeats[ct], price);
        }
        if(cusSeats[ct]>=100)
        {
            price =70;
            printf("Ticket %d\nSection C\nSeat: %d\nPrice $%d.00\n\n",ct, cusSeats[ct], price);
        }
       
        total = total + price;
        i++;
    }/*end of while*/
    
     printf("Total due: $%d.00\n\n", total);
}/*end of Itinerary function*/