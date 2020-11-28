#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("Countries.txt");

    fout<<"India\n";
    fout<<"America\n";
    fout<<"Dubai\n";
    fout.close();

    fout.open("Capitals.txt");
    fout<<"New Delhi\n";
    fout<<"Washington\n";
    fout<<"Abu dhabi\n";
    fout.close();

    ifstream fin;
    fin.open("Countries.txt");
    char lines[100];
    while(fin.getline(lines,100))
        cout<<lines<<'\n';
    fin.close();

    fin.open("Capitals.txt");

    while(fin.getline(lines,100))
        cout<<lines

        <<'\n';
    fin.close();
    return 0;
}
