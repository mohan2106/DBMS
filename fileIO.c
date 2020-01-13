#include<stdio.h>
#include<stdlib.h>

char ch[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1246ehg7f";


int main(){
    FILE *fp;
    fp = fopen("i10k.txt","w");
    
    fclose(fp);
    return 0;
}
