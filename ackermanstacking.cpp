#include<iostream>
using namespace std;
class stack
{
  public:
      stack() {top = 0;}
      int push(int value)
      {
           if (top+1<=maxsize)  {
                top++;
                S[top]=value;
                return 1;}
        return 0;}
        int pop(int *old);
        int whathight() {return top;}
        int isempty() { return (top<1);}
        private :
        int top;
        int S[100];
        int maxsize=100;
};

int n;
int m;
int value = 11;
stack somestack;

int submannapnueli(int x, int y)
{
//if(x>=12)
//return x-1;
//else
//return submannapnueli(submannapnueli(x+2));
}


int main()
{
cout<<"n= ";cin>>n;
cout<<"m= ";cin>>m;
somestack.push(n);
int direction=1;
int oldval1;
int oldval2;
while (somestack.whathight()>=1) {
    cout<<endl<<somestack.whathight();
    if (direction==1)
            {
            somestack.pop(&oldval1);
            somestack.push(oldval1);
            somestack.push(m);
            somestack.pop(&oldval2);
                                            if(m == 0)
                                            {
                                            somestack.push(n-1);
                                            somestack.pop(&oldval1);
                                            somestack.push(m);
                                            somestack.pop(&oldval2);
                                            return 1;
                                            }
                                            if(m>0 && n==0)
                                            {
                                            somestack.push(n+1);
                                            somestack.pop(&oldval1);
                                            somestack.push(m-1);
                                            somestack.pop(&oldval2);
                                            return 1;
                                            }
                                            }


                                                     }
cout<<" Compute = "<<oldval1 << " " << oldval2;
return 0;}

int stack::pop(int *old)
{if  (isempty()) { return 0;}
 *old=S[top];
 top--;
 return 1;}
