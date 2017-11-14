
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "time.h"
#include "pthread.h"

int p;
clock_t t1,t2;
float time_diff;

pthread_t th[4];
pthread_mutex_t m;

char *str;

    
void *ReadWriteoneSeq()

{
    char src[100]="Brake system comes into picture when the train exceeds the current segment’s speed.";
        

      str = (char *) malloc(1000);
        
        //for(int t=0;t<100000;t++)
        //{
    
         memcpy(str,src,1);
    
        //}
     
        free(str);
        
        return 0;
    };
    
    
    
    void *ReadWritekiloSeq()
    {
    str = (char *) malloc(1000);
        
    char *arr;
        
    arr = (char *) malloc(1000);
    
    
    
    for(int i=0;i<1000;i++)
    {
        *arr='a';
    }
    
        for(int t=0;t<1000000;t++)
        {
            
            memcpy(str,arr,1000);
            
        }
    
    free(str);
        free(arr);
    
    return(0);
    };
    
    
    void *ReadWritemegaSeq()
    {
        char *src;
        str = (char *) malloc(1000000);
        src = (char *) malloc(1000000);
        
        
        
        for(int i=0;i<1000000;i++)
        {
            *src='c';
        }
        
        for(int t=0;t<100000;t++)
        {
            
            memcpy(str,src,1000000);
            
        }
        
        free(str);
        free(src);
        
        return(0);
    };
    
    

   void *ReadWriteRandomone()
    {
        
       str = (char *) malloc(1000000);
        
        
        int r;
        
        char *radd;
        
        char randchar;
        
        
        srand(time(NULL));
        
        

        for(int t=0;t<100000;t++) //read write 1 B randomly
        {
            r=rand()%26;
            
            r=r+97;
            
            randchar=(char) r;
        
            radd=&randchar;
            
            *radd='k';
            
            memcpy(str,radd,1);
            
        }
        
        free(str);
        
        
        
    };
    
    void *ReadWriteRandomThousand()
    {
        
        
        
        str = (char *) malloc(1000000);
        
        
        int r;
        
        char *radd;
        
        char randchar;
        
        
        srand(time(NULL));
        
        
        for(int g=0;g<1000000;g++)
        {
        for(int t=0;t<1000;t++)  //Read write 1KB  randomly
        {
            r=rand()%26;
            
            r=r+97;
            
            randchar=(char) r;
            
            radd=&randchar;
            
            *radd='k';
            
            memcpy(str,radd,1);
            
        }
        }
        
        free(str);
        

        
    };
    void *ReadWriteRandomMega()
    {
        
        
        str = (char *) malloc(1000000);
        
        
        int r;
        
        char *radd;
        
        char randchar;
        
        
        srand(time(NULL));
        
        
        for(int g=0;g<1000000;g++)
        {
        for(int t=0;t<1000000;t++) //Read Write 1MB randomly
        {
            r=rand()%26;
            
            r=r+97;
            
            randchar=(char) r;
            
            radd=&randchar;
            
            *radd='k';
            
            memcpy(str,radd,1);
            
        }
        }
        
        free(str);
        
        
        
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
                    pthread_create(&th[i],NULL,&ReadWriteoneSeq,NULL);
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
                
           /* case 2:
                t1= clock();
                
                while(i<2)
                {
                    pthread_create(&th[i],NULL,&ReadWriteoneSeq,NULL);
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
                
                while(i<1)
                {
                    pthread_create(&th[i],NULL,&ReadWritekiloSeq,NULL);
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
                
                
                
           case 4:
                t1= clock();
                
                while(i<2)
                {
                    pthread_create(&th[i],NULL,&ReadWritekiloSeq,NULL);
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
                
                
            case 5:
                t1= clock();
                
                while(i<1)
                {
                    pthread_create(&th[i],NULL,&ReadWritemegaSeq,NULL);
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
                
                
                
            case 6:
                t1= clock();
                
                while(i<2)
                {
                    pthread_create(&th[i],NULL,&ReadWritemegaSeq,NULL);
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
            
            
            case 7:
            t1= clock();
            
            while(i<1)
            {
                pthread_create(&th[i],NULL,&ReadWriteRandomone,NULL);
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
                
                
            case 8:
                t1= clock();
                
                while(i<2)
                {
                    pthread_create(&th[i],NULL,&ReadWriteRandomone,NULL);
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
                
                
                
            case 9:
                t1= clock();
                
                while(i<1)
                {
                    pthread_create(&th[i],NULL,&ReadWriteRandomThousand,NULL);
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
                
                
                
            case 10:
                t1= clock();
                
                while(i<2)
                {
                    pthread_create(&th[i],NULL,&ReadWriteRandomThousand,NULL);
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
                
                
                
            case 11:
                t1= clock();
                
                while(i<1)
                {
                    pthread_create(&th[i],NULL,&ReadWriteRandomMega,NULL);
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
                
                
            case 12:
                t1= clock();
                
                while(i<2)
                {
                    pthread_create(&th[i],NULL,&ReadWriteRandomMega,NULL);
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
                
                break;*/
                
            
            default:
            
                break;
                
                
                
        
        }
    }
    
    
    
    


    

