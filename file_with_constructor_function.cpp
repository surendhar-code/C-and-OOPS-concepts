#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout("Media.txt");

    char name[30];
    int cost;
    cout<<"Enter the name of the media \n"<<endl;
    cin>>name;
    fout<<name;
    fout<<'\n';
    cout<<"Enter the cost \n";
    cin>>cost;
    fout<<cost<<'\n';
    fout.close();

    ifstream fin("Media.txt");
    char line[30];

    while(fin.getline(line,30))
        cout<<line;

    fin.close();
    return 0;

}

