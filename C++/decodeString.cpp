#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string decode(string s){

    string ans="";
    for(int i=0;i<s.size();i++){
        if(s[i]!=']'){
            ans.push_back(s[i]);
        }
        else{
            //1.Extract str from result
            string str="";
            while(!ans.empty() && ans.back()!='['){
                str.push_back(ans.back());
                ans.pop_back();
            }

            //2.Reversing the str
            reverse(str.begin(),str.end());

            //3.Remove last char from result which is '['
            ans.pop_back();
            //4.Extract num from ans;
            string num="";
            while(!ans.empty() && (ans.back()>='0' && ans.back()<='9')){
                    num.push_back(ans.back());
                    ans.pop_back();
            }

            //5.Reverse num 
            reverse(num.begin(),num.end());

            //6.Convert the string to integer
            int number=stoi(num);
            
            //7.Inserting str in result in number times;
            while(number){
                ans+=str;
                number--;
            }
        }
    }
    return ans;
}

int main(){
    string str;
    cout<<"Enter the string"<<endl;
    cin>>str;
    cout<<"The decoded massage is: "<<decode(str)<<endl;


    return 0;


}
/*OUTPUT*/
/*Enter the string
1[b]
The decoded massage is: b*/
/*Enter the string
3[b2[ca]]
The decoded massage is: bcacabcacabcaca*/