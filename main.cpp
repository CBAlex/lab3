#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace std;

int main()
{
    int re,i=0,out=0;
    vector<int> input(20),output(20);
    
    ifstream fin;
    fin.open("file.in.txt",ios::in);
    
    while(fin>>re)
        {
            input.at(i)=re;
            i=i+1;
        }
    fin.close();
    
    sort(input.begin(),input.end());
    
    for(i=0;i<20;i++)
        {
            output.at(i)=input.at(19-i);
        }   

    for(i=0;i<5;i++)
        {
            out=out+output.at(i);
        }   
    cout<<out<<endl;
    return 0;


}
