#include<iostream>
using namespace std;
class date
{
private:
    int day,month,year;
public:
    date(int d, int m,int y)
    {
        day=d;
        month=m;
        year=y;
        if(month>12||month<1)
            month=1;
        setd();

    }
    setd()
    {
        cout<<"enter the day to set"<<endl;
        cin>>day;
        setm();
    }
    setm()
    {
        cout<<"enter the month to set"<<endl;
        cin>>month;
        sety();
    }
    sety()
    {
        cout<<"enter the year to set"<<endl;
        cin>>year;
        display();
    }
    display()
    {
        cout<<"the date is: " <<day<<"/"<<month<<"/"<<year<<endl;
    }
};


int main()
{
    int month,year,day;
    cout<<"input the day month and year respectivly"<<endl;
    cin>>day>>month>>year;
    date d1(day,month,year);

}
