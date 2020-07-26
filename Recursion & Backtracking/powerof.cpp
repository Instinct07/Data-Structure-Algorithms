#include <iostream>
using namespace std;

int power(int a,int b){    // T(n) = O(b)
    int ans;
    if(b==0){
        return 1;
    }
    else if (a==0)
    {
        return 0;
    }
    else
    {
        ans = a * power(a, b - 1);
    }

    return ans;
}

double fastpower(double a,int b){      //this is a very efficient way to slove this problem
                                     
                                      // T(n) = O(log b) 
    

   if(b==0) return 1.0;
   if(b==1) return a;
   if(a==0) return 0.0;
   
    if (b<0){                    /* handling if b is negative */
        a=1/a;
        b=-b; 
    }
    
   double smallpower = fastpower(a, b / 2);
   smallpower *= smallpower;
   if(b & 1)
   {
       return a * smallpower;
   }
   

    return smallpower;
}


int main(){
    int a,b;
    cin>>a>>b;
    //cout<<power(a,b);
    cout<<fastpower(a,b);
    return 0;
}