#include<iostream>
#include<string>
using namespace std;


int longestCommomn1(string str,int k){
    int start=0;
    int end=0;
    int zero_count=0;
    int max_length=0;
    for(;end<str.length();end++){
        if(str[end]=='0'){
            zero_count++;
        }

        while (zero_count>k)
        {
            if(str[start]=='0') zero_count--;
            start++;
        }
        max_length=max(max_length,end-start+1);
        
    }
        return max_length;
}

int main(){
    string str;
    cout<<"Enter the binaray string"<<endl;
    cin>>str;

    int k;
    cout<<"Enter the value of k"<<endl;
    cin>>k;
    cout<<"ans= "<<longestCommomn1(str,k)<<endl;

    return 0;
}

/*OUTPUT*/
/*Enter the binaray string
0001101011
Enter the value of k
2
ans= 7*/