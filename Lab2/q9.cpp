#include<iostream>
#include<string>
using namespace std;
class CricketPlayer
{
    string playerName;
    int matchesPlayed;
    int totalRuns;
public:
    void accept()
    {
        cout<<"Enter Player Name: ";
        cin.ignore();
        getline(cin, playerName);
        cout<<"Enter Matches Played: ";
        cin>>matchesPlayed;
        cout<<"Enter Total Runs Scored: ";
        cin>>totalRuns;
    }
    float calculateAverage()
    {
        if(matchesPlayed==0)
            return 0;
        return (float)totalRuns/matchesPlayed;
    }
    void displayReport()
    {
        float avg=calculateAverage();
        cout<<"\n--- Player Report ---"<<endl;
        cout<<"Player Name: "<<playerName<<endl;
        cout<<"Matches Played: "<<matchesPlayed<<endl;
        cout<<"Total Runs: "<<totalRuns<<endl;
        cout<<"Batting Average: "<<avg<<endl;
        cout<<"Performance: ";
        if(avg>=50)
            cout<<"Excellent";
        else if(avg>=35)
            cout<<"Good";
        else if(avg>=20)
            cout<<"Average";
        else
            cout<<"Poor";
        cout<<endl;
    }
};

int main()
{
    CricketPlayer p;
    p.accept();
    p.displayReport();
    return 0;
}