#include<iostream>
using namespace std;

void patients(int);

main()
{
    int days; 
    cout << "Enter Number of days you visited Hospital: ";
    cin >> days;

    patients(days);
}

void patients(int days)
{
    int patient, treated = 0,untreated = 0, doctors = 7;
    for(int x = 1; x <= days; x++ )
    {
        cout << "Number of patients who visited hospital on Day " << x << ": ";
        cin >> patient;    

        if(x%3 == 0 && untreated > treated ){
            doctors ++;
        }
    
        if(patient <= doctors){
            treated = treated + patient;
        } else {
            treated = treated + doctors;
            untreated = untreated + (patient - doctors);
        }
    }

    cout << "Treated Patients: " << treated << endl;
    cout << "Untreated Patients: " << untreated;

}
 