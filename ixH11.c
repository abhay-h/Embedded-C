    #include<reg51.h>  
    sbit x= P3^0;  
    sbit y= P3^1;  
    void display1();  
    void display2();  
    void delay();  
    void main()  
    {  
    unsigned char m[10]={0?40,0xF9,0?24,0?30,0?19,0?12,0?02,0xF8,0xE00,0?10};  
    unsigned int i,j;  
    ds1=ds2=0;  
    while(1)  
    {  
    for(i=0,i<20;i++)  
    display1();  
    display2();  
    }  
    }  
    void display1()  
    {  
    x=1;  
    y=0;  
    P2=m[ds1];  
    delay();  
    x=1;  
    y=0;  
    P2=m[ds1];  
    delay();  
    }  
    void display2()  
    {  
    ds1++;  
    if(ds1>=10)  
    {  
    ds1=0;  
    ds2++;  
    if(ds2>=10)  
    {  
    ds1=ds2=0;  
    }  
    }  
    }  
    void delay()  
    {  
    unsigned int k;  
    for(k=0;k<30000;k++);  
    }  
