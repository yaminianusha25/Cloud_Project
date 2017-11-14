

#include "disk.h"
#include "stdio.h"
#include "time.h"
#include "pthread.h"



int p;
clock_t t1,t2;
float time_diff;

pthread_t th[4];
pthread_mutex_t m;

FILE *fp;
char store[100];
char ch11[]="yamini"
char ch12[]="anusha"
char arr1[1000];
char arr2[1000000];

for(i=0;i<1000;i++)
{
    char arr1[i]='l';
}

for(i=0;i<1000000;i++)
{
    char arr2[i]='d';
}

void *writeSeqone()
{
    fp=fopen("file1.txt","w+");
    
    fwrite(c,sizeof(char),1,fp);
};

void *writeSeqkilo()
{
    
    fp=fopen("file2.txt","w+");
    
    fwrite(arr1,sizeof(char),1000,fp);
};

void *writeSeqmega()
{
    fp=fopen("file2.txt","w+");
    
    fwrite(arr2,sizeof(char),100000,fp);
};

void *readSeqone()
{
    
    
    
};

void *readSeqkilo()
{
    
    
    
};

void *readSeqmega()
{
    
    
    
};



void *readRandomone()
{
    
    
    
};

void *readRandomkilo()
{
    
    
    
};

void *readRandommega()
{
    
    
    
};

void *writeRandomone()
{
    fp=fopen("file1.txt","w+");
    
    fseek( fp, 7, SEEK_SET );
    
    fwrite(ch12,sizeof(char),1,fp);
    
};

void *writeRandomkilo()
{
    fp=fopen("file2.txt","w+");
    
    fseek( fp, 10, SEEK_SET );
    
    fwrite(arr1,sizeof(char),1000,fp);
};

void *writeRandommega()
{
    fp=fopen("file3.txt","w+");
    
    fseek( fp, 20, SEEK_SET );
    
    fwrite(arr2,sizeof(char),100000,fp);
    
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
                    pthread_create(&th[i],NULL,&writeSeqone,NULL);
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
                    pthread_create(&th[i],NULL,&writeSeqone,NULL);
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
                    pthread_create(&th[i],NULL,&writeSeqkilo,NULL);
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
                    pthread_create(&th[i],NULL,&writeSeqkilo,NULL);
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
                    pthread_create(&th[i],NULL,&writeSeqmega,NULL);
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
                    pthread_create(&th[i],NULL,&writeSeqmega,NULL);
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
                    pthread_create(&th[i],NULL,&readRandomone,NULL);
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
                    pthread_create(&th[i],NULL,&readRandomone,NULL);
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
                    pthread_create(&th[i],NULL,&readRandomkilo,NULL);
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
                    pthread_create(&th[i],NULL,&readRandomkilo,NULL);
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
                    pthread_create(&th[i],NULL,&ReadWriteRandomMega(),NULL);
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
                
                break;
                
                
            
              case 13:
                
                
                    t1= clock();
                    
                    while(i<1)
                    {
                        pthread_create(&th[i],NULL,&ReadWriteoneSeq(),NULL);
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
                    
                case 14:
                
                    t1= clock();
                    
                    while(i<2)
                    {
                        pthread_create(&th[i],NULL,&ReadWriteoneSeq(),NULL);
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
                    
                    
                case 15:
                
                    t1= clock();
                    
                    while(i<1)
                    {
                        pthread_create(&th[i],NULL,&ReadWritekiloSeq(),NULL);
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
                    
                    
                    
                case 16:
                
                    t1= clock();
                    
                    while(i<2)
                    {
                        pthread_create(&th[i],NULL,&ReadWritekiloSeq(),NULL);
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
                    
                    
                case 17:
                
                    t1= clock();
                    
                    while(i<1)
                    {
                        pthread_create(&th[i],NULL,&ReadWritemegaSeq(),NULL);
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
                    
                    
                    
                case 18:
                
                
                    t1= clock();
                    
                    while(i<2)
                    {
                        pthread_create(&th[i],NULL,&ReadWritemegaSeq(),NULL);
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
                    
                    
                case 19:
                
                
                    t1= clock();
                    
                    while(i<1)
                    {
                        pthread_create(&th[i],NULL,&ReadRandomone(),NULL);
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
                    
                    
                case 20:
                
                
                    t1= clock();
                    
                    while(i<2)
                    {
                        pthread_create(&th[i],NULL,&ReadRandomone(),NULL);
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
                    
                    
                    
                case 21:
                
                
                    t1= clock();
                    
                    while(i<1)
                    {
                        pthread_create(&th[i],NULL,&ReadRandomThousand(),NULL);
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
                    
                    
                    
                case 22:
                
                    t1= clock();
                    
                    while(i<2)
                    {
                        pthread_create(&th[i],NULL,&ReadWriteRandomThousand(),NULL);
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
                    
                    
                    
                case 23:
                
                
                    t1= clock();
                    
                    while(i<1)
                    {
                        pthread_create(&th[i],NULL,&ReadWriteRandomMega(),NULL);
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
                    
                    
                case 24:
                
                
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
                    
                    break;
                    
                    
                default:
                    
                    break;
                
                
            default:
                
                break;
                
                
                
                
                
                
                
                
        }
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    



