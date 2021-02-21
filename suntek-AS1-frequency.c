#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int i,len,a0=0,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0;
char a[1000];
scanf("%[^\n]",a);
len=strlen(a);
for(i=0;i<len;i++){
    if(a[i]=='0'){
a0++;
    }
    if(a[i]=='1'){
a1++;
    }
    if(a[i]=='2'){
a2++;
    }
    if(a[i]=='3'){
a3++;
    }
    if(a[i]=='4'){
a4++;
    }
    if(a[i]=='5'){
a5++;
    }
    if(a[i]=='6'){
a6++;
    }
    if(a[i]=='7'){
a7++;
    }
if(a[i]=='8'){
a8++;
    }
    if(a[i]=='9'){
a9++;
    }
    
}

printf("%d %d %d %d %d %d %d %d %d %d",a0,a1,a2,a3,a4,a5,a6,a7,a8,a9);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

