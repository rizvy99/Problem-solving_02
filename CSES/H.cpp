#include <iostream>
#include <sstream>
#include <vector>
#include<bits/stdc++.h>

using namespace std;
class calendar{
    int i,j,days,mm,mon,k,z,p,yy,r;
    int calen[5][7];
    public:
    void calen_call(void);
    void display(void);
};
int main(){
    system("cls");
    calendar c;
    c.calen_call();
    c.display();
    //getch();
}
void calendar :: calen_call(void)
{
    int month[12]={31,28,31,30,31,30,31,30,31,30,31};

    cout<<"give a year : ";
    cin>>yy;
    if(yy%4==0){
        if(yy%100==0)
        {
            if(yy%400==0){
                month[1]=29;
            }else{
                month[1]=28;
            }
        }else{
            month[1]=29;
        }
    }
    cout<<"give a month : ";
    cin>>mon;
    cout<<"Year :"<<yy<<endl;
    p=5;
    for(r=1999;r<yy;r++){
        if(r%4==0){
            if(r%100==0){
                if(r%400)
                p=p+2;
                else
                p++;
            }else{
                p=p+2;
            }
        }else
        p++;
        if(p==7){
            p=0;
        }
        if(p==0)p=1;
    }
    for(mm=0;mm<12;mm++){
        days=month[mm];
        k=0;
        for(z=0;z<7;z++)
        calen[0][z]=0;
        for(i=0;i<5;i++,p=0)
        for(j=p;j<7&&k<days;j++){
            calen[i][j]==k+1;
            k++;
            if(k==days && i==4&&j<7){
                for(p=j+1;p<7;p++)
                calen[i][p]=0;
            }
            if(k==days&&i==4&&j==6){
                j=-1;
            }
            if(k==days&&i==3&&j==6){
                for(p=0;p<7;p++)
                calen[4][p]=0;
            }
        }
        p=j;
        if(mm+1==mon)
        return;
    }
    void calendar::display(){
        cout<<
        for(i=0;i<7;i++){
            for(j=0;j<7;j++)
            cout<<"\t"<<calen[i][j];
            cout<<"\n\n";

        }
    }
    

}

