#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p=0;
    int c=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>0){
            p=p+x;
        }
        else{
            if(p<1){
                c++;
            }
            else{
                p--;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}