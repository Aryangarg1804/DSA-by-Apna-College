#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int> &prices){
    int maxProfit = 0,BestBuy = prices[0];
    for(int i=1;i<prices.size();i++){
        if(prices[i]>BestBuy){
            maxProfit = max(maxProfit,prices[i]-BestBuy);
        }
        BestBuy = min(BestBuy,prices[i]);
    }
    return maxProfit;
}

int main(){

    // leetcode - 121
    // Best time to buy and sell stock.
    int n;
    cout<<"Enter the length of the array : ";
    cin>>n;
    vector<int> prices;
    int a;
    for(int i=0;i<n;i++){
        cout<<"Enter element : ";
        cin>>a;
        prices.push_back(a);
    }
    cout<<maxProfit(prices)<<endl;

    
    return 0;
}