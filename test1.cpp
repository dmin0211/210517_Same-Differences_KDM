
#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

bool visit[30];

int main(){
  int t=0;
  int number_size=0;
  cin>>t;
  for (int i = 0; i < t; ++i) {
    cin>>number_size;
    memset(visit,false,30);
    for (int j = 0; j < number_size; ++j) {
      char tmp,prev;
      if(j!=0) prev=tmp;
      cin>>tmp;
//      cout<<tmp<<"\t"<<int(tmp)<<"\t"<<int('A')<<endl;
      int temp = tmp-'A';
      if(visit[temp]) {
        if(prev==tmp) {
          if(j==number_size-1) cout<<"YES"<<endl;
          continue;
        }
        cout<<"NO"<<endl;
//        break;
        j=number_size;
        string temp;
        getline(cin,temp);
      }

      visit[temp]=true;
      if(j==number_size-1) cout<<"YES"<<endl;
    }

  }
}