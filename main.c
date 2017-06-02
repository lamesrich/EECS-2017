/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: adminUser
 *
 * Created on June 1, 2017, 5:33 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    int *nums;
    nums= calloc(200,sizeof(int));
    int i=0;
    int a, b, c, d, e, f, t,sz, ct=0, ct2=0, Y, lia, lib, lic;
    t=5;
    sz=50;
    a=47;
    b=49;
    c=97;
    d=99;
    e=198;
    f=199;

    lia=(b-a);
    lib=(d-c);
    lic=(f-e);

    for(i=0; i<100; i++)
    {
        *(nums+i)=1;
        printf("%7d", *(nums+i));
    }
     
    if((a+t)<=b)
    {
        printf("\ndoing normal thangs\n");    
    }
    else if((a+t)>b)
    {
       
        printf("\nWe currently have %d seats left in section A\n", lia);
        printf("Will you like to expand your tickets to another section\n");
        printf("enter 1 (yes) and 2 (no)\nOutside 2nd if\n");
        Y=1;
        printf("lia = %d\n", lia);
        printf("lib = %d\n", lib);
        printf("lic = %d\n", lic);
        printf("t -lib = %d\n", (t-lib));
        if(Y==1)
        {
            printf("\n2nd if\n");
            if(lia<=0)
            {
                if(lib<t && lic>=(t-lib))/*some seats are available but not all*/
                {
                    printf("3rd if\nt = %d", t);
                    printf("\nlib = %d\n", lib);
                    printf("t - lib = %d", (t-lib));
                    printf("\nlic = %d",lic);
                    /*SeatSelB(lib);
                    SeatSelC(t-lib);*/
                }
                if(lib<=0 && lic>=t)
                {
                    printf("\n4th if no seats left in b\nt = %d", t);
                    printf("\nlib = %d\n", lib);
                    printf("seats in c only");
                }
            }
            if(lia>0)
            {
                if(lia<t && lib>=(t-lia))/*some seats are available but not all*/
                {
                    printf("6th if\nt = %d", t);
                    printf("\nlia = %d\n", lia);
                    printf("t -lia = %d", (t-lia));
                    printf("\nlib = %d\n", lib);
                    printf("seats in a and b only");
                    /*SeatSelB(lib);
                    SeatSelC(t-lib);*/
                }
                if(lia<t && lic>=(t-lia))
                {
                    printf("\n7th if no seats left in b\nt = %d", t);
                    printf("\nlic = %d\n", lic);
                    printf("seats in a and c only");
                }
               
            }
            if(lia<=0 && lib<=0 && lic<=0)
            {
                printf("\n8th if no seats left in b and c\nt = %d", t);
                printf("\ncompletely booked");
            }
            if((lib+lic+lia)<t)
            {
                printf("\n9th if no seats left in b and c\nt = %d", t);
                printf("\ncompletely booked");
            }
            if((lib+lic+lia)>=t)
            {
                printf("\n10th if\nt = %d", t);
                printf("\nlia = %d\n", lia);
                printf("lib - lia = %d", abs(lib-lia));
                printf("\nlib - lia - lic = %d\n", abs(abs(lib-lia)-lic));
            }
            
        }
       /*  if()
        {
        }
        if()
        {
        }*/
    }
 
    else
    {
        printf("sorry for the inconvenience we are booked\n");
    }

   
    printf("\n\n%d after free\n\n", i);
    for(i=0; i<200; i++)
    {
        
        printf("%7d", *(nums+i));
    }
    free(nums);
    return 0;
}

