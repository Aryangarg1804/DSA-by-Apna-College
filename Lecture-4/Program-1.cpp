#include<iostream>
using namespace std;
int main(){

    /*
    Pattern
    */

    // square pattern.
    // int n;
    // cout<<"Enter your number : ";
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }



    // int n;
    // cout<<"Enter your number : ";
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }



    // int n;
    // cout<<"Enter your number : ";
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<(char)(65+j)<<" ";
    //     }
    //     cout<<endl;
    // }


    // int n;
    // cout<<"Enter your number : ";
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     char ch = 'A';
    //     for(int j=0;j<n;j++){
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }



    // int n;
    // cout<<"Enter your number : ";
    // cin>>n;
    // int num=1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }



    // int n;
    // cout<<"Enter your number : ";
    // cin>>n;
    // char ch = 'A';
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }



    // Triangle pattern.
    // int n;
    // cout<<"Enter Your number : ";
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }



    // int n;
    // cout<<"Enter your number : ";
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<i+1<<" ";
    //     }
    //     cout<<endl;
    // }



    // int n;
    // cout<<"Enter your number : ";
    // cin>>n;
    // char ch ='A';
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<(char)(ch+i)<<" ";
    //     }
    //     cout<<endl;
    // }



    // int n;
    // cout<<"Enter your number : ";
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<j+1<<" ";
    //     }
    //     cout<<endl;
    // }



    // Reverse triangle pattern.
    // int n;
    // cout<<"Enter your number : ";
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j>0;j--){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }



    // int n;
    // cout<<"Enter your number : ";
    // cin>>n;
    // char ch = 'A';
    // for(int i=0;i<n;i++){
    //     for(int j=i;j>=0;j--){
    //         cout<<(char)(ch+j)<<" ";
    //     }
    //     cout<<endl;
    // }



    // Floyd's Triangle pattern.
    // int n;
    // cout<<"Enter your number : ";
    // cin>>n;
    // int num=1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }



    // int n;
    // cout<<"Enter your number : ";
    // cin>>n;
    // char ch = 'A';
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<(char)(ch++)<<" ";
    //     }
    //     cout<<endl;
    // }



    // int n;
    // cout<<"Enter your number : ";
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     // spaces
    //     for(int j=0;j<i;j++){
    //         cout<<"  ";
    //     }
    //     // number
    //     for(int k=0;k<n-i;k++){
    //         cout<<i+1<<" ";
    //     }
    //     cout<<endl;
    // }



    // int n;
    // cout<<"Enter your number : ";
    // cin>>n;
    // char ch = 'A';
    // for(int i=0;i<n;i++){
    //     // spaces
    //     for(int j=0;j<i;j++){
    //         cout<<"  ";
    //     }
    //     // number
    //     for(int k=0;k<n-i;k++){
    //         cout<<ch<<" ";
    //     }
    //     ch++;
    //     cout<<endl;
    // }



    // Pyramid pattern
    // int n;
    // cout<<"Enter Your number : ";
    // cin>>n;
    // int k= 2*n-2;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<k;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<=i;j++){
    //         cout<<j+1<<" ";
    //     }
    //     for(int j=i;j>0;j--){
    //         cout<<j<<" ";
    //     }
    //     k-=2;
    //     cout<<endl;
    // }



    // Hollow Diamand pattern.
    // int n;
    // cout<<"Enter your Number : ";
    // cin>>n;
    // int k=2*n-2;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<k;j++){
    //         cout<<" ";
    //     }
    //     cout<<"* ";
    //     if(i!=0){
    //         for(int j=0;j<4*i-2;j++){
    //             cout<<" ";
    //         }
    //         cout<<"* ";
    //     }
    //     k-=2;
    //     cout<<endl;
    // }
    // k=2;
    // for(int i=n-1;i>0;i--){
    //     for(int j=0;j<k;j++){
    //         cout<<" ";
    //     }
    //     cout<<"* ";
    //     if(i!=1){
    //         for(int j=0;j<4*i-6;j++){
    //             cout<<" ";
    //         }
    //         cout<<"* ";
    //     }
    //     k+=2;
    //     cout<<endl;
    // }



    // Butterfly pattern.
    // int n;
    // cout<<"Enter your number : ";
    // cin>>n;
    // int k = 4*n-4;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     for(int j=0;j<k;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     k-=4;
    //     cout<<endl;
    // }
    // k=0;
    // for(int i=n;i>0;i--){
    //     for(int j=0;j<i;j++){
    //         cout<<"* ";
    //     }
    //     for(int j=0;j<k;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<i;j++){
    //         cout<<"* ";
    //     }
    //     k+=4;
    //     cout<<endl;
    // }





    return 0;
}