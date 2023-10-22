#include<iostream>
#include<iomanip>
using namespace std;

void cargo(int);

main()
{
    int num; 
    cout << "Enter the count of cargo for transportation: ";
    cin >> num;

    cargo(num);
}

void cargo(int num)
{
    int tonnage, minibus = 0,truck = 0, train = 0;
    for(int x = 1; x <= num; x++ )
    {
        cout << "Enter the tonnage of cargo " << x << ": ";
        cin >> tonnage;    

        if(tonnage <= 3){
            minibus += tonnage;
        } else if(tonnage >3 && tonnage <= 11){
            truck += tonnage;
        } else {
            train += tonnage;
        }
    }

    float sum = minibus + truck + train;
    float p_minibus = (minibus/sum)*100;
    float p_truck = (truck/sum)*100;
    float p_train = (train/sum)*100;
    float average = ((minibus*200) + (truck*175) + (train*120))/sum;

    cout << fixed;
    cout << setprecision(2);
    cout << average << endl;
    cout << p_minibus << "%" << endl;
    cout << p_truck << "%" << endl;
    cout << p_train << "%" << endl;
}
 