//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Zahra Maleki

#include<iostream>

using namespace std ;

int main(){
    int n , i , j ,t , h , s=0 , maxx , w ;
    cin>>n ;
    string x ;
    int num[n] ;
    int numx[100] ;
    for(i=0 ; i<n ; i++){
        num[i]=0 ;
        cin>>x ;
        for(h=0 ; h<x.length() ; h++){
            numx[h]=4 ;
        }
        for(w=0 ; w<x.length() ; w++){
            if(numx[w]==0){
                continue ;
            }
            numx[w]=1 ;
            for(j=0 ; j<x.length() ; j++){
                if(x[w]==x[j] && w!=j){
                    numx[j]=0 ;
                }
            }
        }
        if(w==x.length()-1){
            if(numx[w]!=0){
                numx[w]=1 ;
            }
        }
        for(t=0 ; t<x.length() ; t++){
            num[i] += numx[t] ;
        }

    }

    maxx = num[0] ;
    for(i=0 ; i<n ; i++){
        if(num[i]>maxx){
            maxx=num[i] ;
        }
    }
    cout<<maxx;
return 0 ;
}
