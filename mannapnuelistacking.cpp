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
stack somestack;


int f(int x)
{
if(x>=12)
{
return x-1;
}
else
return f(f(x+2));
}

int main()
{
cout<<"n=";cin>>n;
somestack.push((n+2)-3);
int direction=1;
int old;
while (somestack.whathight()>=1) {
    cout<<endl<<somestack.whathight();
if (direction==1)
            {
            somestack.pop(&old);
            somestack.push(old);
            somestack.push(old-1);
                                        if (old==1) direction=0;}
                                        else
                                        {
                                            if(n >= 12)
                                            {
                                               somestack.pop(&old);
                                               somestack.pop(&old);
                                               somestack.push(n-1);
                                               somestack.pop(&old);
                                            }
                                            else{
                                                somestack.pop(&old);
                                                somestack.push(f(n+2));
                                                somestack.pop(&old);
                                            }

                                        }

                                                     }
cout<<endl<<" Compute = "<<old;
return 0;}

int stack::pop(int *old)
{if  (isempty()) { return 0;}
 *old=S[top];
 top--;
 return 1;}
