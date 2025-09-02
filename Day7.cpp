#include<iostream>
using namespace std;


Dynamic Intialializer


class Bankdeposit{
    int principal;
    int years;
    float interestrate;
    float returnvalue;
    public:
        Bankdeposit(){}
        Bankdeposit(int p,int y,float r);
        Bankdeposit(int p,int y,int r);
        void show();
};
Bankdeposit :: Bankdeposit(int p,int y,float r){
    principal = p;
    years = y;
    interestrate = r;
    returnvalue = principal;
    for(int i = 0;i<y;i++){
        returnvalue = returnvalue * (1+interestrate);
    }
}
Bankdeposit :: Bankdeposit(int p,int y,int r){
    principal = p;
    years = y;
    interestrate = (float(r)/100);
    returnvalue = principal;
    for(int i = 0;i<y;i++){
        returnvalue = returnvalue * (1+interestrate);
    }

}
void Bankdeposit :: show(){
    cout<<endl<<"Principal amount was "<<principal<<endl<<". Return value after "<<years<<" years is "<<returnvalue<<endl;
}
int main(){
    Bankdeposit bd1,bd2,bd3;
    int p, y;
    float r;
    int R;
    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = Bankdeposit(p,y,r);
    bd1.show();
    
    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = Bankdeposit(p,y,R);
    bd2.show();
    return 0;
}


Destructor


int count = 0;

class num{
    public:
        num(){
            count++;
            cout<<"This is the time when constructor is called for object member"<<count<<endl;
        }
        ~num(){
            cout<<"This is  the time when my destructor is called for object number"<<count<<endl;
            count--;
        }
};
int main(){
    cout<<"We are inside the main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2,n3;
        cout<<"Exiting this block";
    }
    cout<<"Back to main"<<endl;
    return 0;
}