#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

    int n;
    cout<<"Enter no of question"<<endl;
    cin>>n;
    int p;
    cout<<"Enter marks for right answer"<<endl;
    cin>>p;
    int q;
    cout<<"Enter the negetive marks for wrong answer"<<endl;
    cin>>q;

    unordered_set<int>s;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            int correct=i;
            int incorrect=j;
            int unattend=n-(i+j);

            if(unattend>=0){
                int score=p*correct+q*incorrect;
                s.insert(score);
            }
            else{
                break;
            }
        }

    }
    cout<<"Total Score: "<< s.size()<<endl;
    return 0;
}


/*OUTPUT*/
/*Enter no of question
2
Enter marks for right answer
1
Enter the negetive marks for wrong answer
-1
Total Score: 5*/