//
//  Test.c
//  
//
//  Created by Venkat Rudraraju on 2/1/16.
//
//

#include "stdio.h"
#include "stdlib.h"
#include "pthread.h"
#include "time.h"



int p;
clock_t t1,t2;
float time_diff;

pthread_t th[4];
pthread_mutex_t m;


float a=1.7f;
float b=10.0f;

int c=10;
int d=5;




void *funcflo()
{
   // pthread_mutex_lock(&m);
    float res1;
    float l=1.0;
    for(l;l<10000000;l+=1.0)
    {
        res1=a*b+a/b+(a-b);
    }

   // pthread_mutex_unlock(&m);
    
    return 0;
};



void *funcin()
{
   // pthread_mutex_lock(&m);
    int res2;
    int t=0;
    for(t;t<10000000;t++)
    {
        res2=c*d+c/d+(c-d);
    }
   
    //pthread_mutex_unlock(&m);
    
    return 0;
};




int main(int argc, char *argv[])
{
    
    int d=12;
    
    int i=0;
    int j=0;
    
    int ch = atoi(argv[1]);
        
    //printf("Enter the number of threads:");
    //scanf("%d",&ch);
    
    switch(ch)
    {
        case 1:
            t1= clock();
            
            while(i<1)
            {
                pthread_create(&th[i],NULL,&funcflo,NULL);
		i++;
            }
                               
            while(j<1)
            {
                pthread_join(th[j],NULL);
		j++;
            }
            
            
            
            
            t2= clock();
            time_diff=((double)(t2-t1)/CLOCKS_PER_SEC);
            printf("%f",time_diff);
            // printf("Hello World");
            
            break;
            
        case 2:
                t1= clock();
            
            while(i<2)
            {
                pthread_create(&th[i],NULL,&funcflo,NULL);
		i++;
            }
                                          
            
            while(j<2)
            {
                pthread_join(th[j],NULL);
                j++;
            }
            
            
            
            t2= clock();
                time_diff=((double)(t2-t1)/CLOCKS_PER_SEC);
            
            printf("%f",time_diff);
            
            
            break;
            
            
        case 3:
            t1= clock();
        
            while(i<4)
            {
                pthread_create(&th[i],NULL,&funcflo,NULL);
                i++;
                
            }
            
            
            while(j<4)
            {
                pthread_join(th[j],NULL);
                j++;
            }
            
            
            
            t2= clock();
            time_diff=((double)(t2-t1)/CLOCKS_PER_SEC);
            
            printf("%f",time_diff);
            
            break;
            
            
            
        case 4:
            t1= clock();
        
            while(i<1)
            {
                pthread_create(&th[i],NULL,&funcin,NULL);
		i++;
                
            }
            
            
            while(j<1)
            {
                pthread_join(th[j],NULL);
		j++;
            }
            
            
            
            t2= clock();
            time_diff=((double)(t2-t1)/CLOCKS_PER_SEC);
            
            
            printf("%f",time_diff);
            
            break;
            
            
        case 5:
            t1= clock();
            
            while(i<2)
            {
                pthread_create(&th[i],NULL,&funcin,NULL);
                i++;
                
            }
            
            
            while(j<2)
            {
                pthread_join(th[j],NULL);
                j++;
            }
            
            
            
            t2= clock();
            time_diff=((double)(t2-t1)/CLOCKS_PER_SEC);
            
            
            printf("%f",time_diff);
            
            break;
            
            
            
        case 6:
            t1= clock();
            
            while(i<4)
            {
                pthread_create(&th[i],NULL,&funcin,NULL);
                i++;
                
            }
            
            
            while(j<4)
            {
                pthread_join(th[j],NULL);
                j++;
            }
            
            
            
            t2= clock();
            time_diff=((double)(t2-t1)/CLOCKS_PER_SEC);
            
            
            printf("%f",time_diff);
            
            break;
            
        
         
        default:
            
            break;
            
            
       
            
    
    
    
    

}
}
