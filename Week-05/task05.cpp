#include<iostream>
#include <windows.h>
using namespace std;

string name1, email1, address1, contact1, city1, province1, date1, detail1;
string name2, email2, address2, contact2, city2, province2, date2, detail2;
string name3, email3, address3, contact3, city3, province3, date3, detail3;
int  code1, code2, code3, option;

void gotoxy(int, int);
char getCharAtxy(short int x, short int y);
void printHeader();
void printOath();
void printMenu();
void complainant();
void officer();
void administrator();
void guidance();
void history();
void complaint();
void compMenu(int,int);
void menuConditions(int);
void policeCar();
void lines();

main()
{
    system("cls");
    //system("color 84");
    char k;

    gotoxy(60,20);
    cout << "Name of Police Officer: Fahad Nasir";
    gotoxy(60,21);
    cout << "His Police Identity Code: CP10039";
    gotoxy(60,22);
    cout << "Name of the Administrator: Shehzad Hassan";
    gotoxy(60,23);
    cout << "His Password: PK123456";
    gotoxy(60,25);
    cout << "Enter K to continue: ";
    cin >> k;
    if(k == 'K'){
        system("cls");
        printHeader();
        printOath();
        lines();
        printMenu();
        
    }

}

void printHeader()
{
    cout << endl;
    cout << "________________________________________________________________________________________________________________________________________________________________________";
    cout << endl;
    cout << endl;
    cout << "     ####### ###### ##    ## ##### #####     ###### ###### ####  #### ####### ##     ###### ## ###    ## ###### ######     ###### ###### #####  ###### ###### ##        "<<endl;
    cout << "      ##  ## ##  ## ##    ## ##    ##        ##     ##  ## ####  ####  ##  ## ##     ##  ## ## ####   ##   ##   ##         ##  ## ##  ## ##  ##   ##   ##  ## ##        "<<endl;
    cout << "      ##  ## ##  ## ##    ## ##    ##        ##     ##  ## ##  ##  ##  ##  ## ##     ##  ## ## ## ##  ##   ##   ##         ##  ## ##  ## ##  ##   ##   ##  ## ##        " <<endl;
    cout << "      ###### ##  ## ##    ## ##    #####     ##     ##  ## ##      ##  ###### ##     ###### ## ##  ## ##   ##   ######     ###### ##  ## #####    ##   ###### ##        " <<endl;
    cout << "      ##     ##  ## ##    ## ##    ##        ##     ##  ## ##      ##  ##     ##     ##  ## ## ##   ####   ##       ##     ##     ##  ## ##  ##   ##   ##  ## ##        " <<endl;
    cout << "      ##     ###### ##### ## ##### #####     ###### ###### ##      ##  ##     ###### ##  ## ## ##    ###   ##   ######     ##     ###### ##  ##   ##   ##  ## ######    " <<endl;
    cout << "________________________________________________________________________________________________________________________________________________________________________";
}

void printOath()
{
    gotoxy(0,13);
    cout << "-------------------------------------------------------WE SOLEMNLY, SINCERELY AND TRULY DECLARE AND AFFIRM THAT---------------------------------------------------------"; 
    gotoxy(0,15);
    cout << "--------------------------WE WILL FAITHFULLY DISCHARGE THE DUTIES OF THE OFFICE WITH FAIRNESS, INTEGRITY, DILLIGENCE AND IMPARTIALITY, AND THAT-------------------------";
    gotoxy(0,17);
    cout << "-----------------------------------WE WILL UPHOLD FUNDAMENTAL HUMAN RIGHTS AND ACCORD EQUAL RESPECT TO ALL PEOPLE, ACCORDING TO LAW.------------------------------------";
}

void lines()
{
    gotoxy(0,41);
    cout << "________________________________________________________________________________________________________________________________________________________________________" <<endl;
    gotoxy(0,42);
    cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------" <<endl;

}


void printMenu()
{
    gotoxy(70,22);
    cout << "-----------------------------";          
    gotoxy(70,24);
    cout << "      1. Complainant         ";
    gotoxy(70,26);
    cout << "      2. Police Officer      ";
    gotoxy(70,28);
    cout << "      3. Administrator       ";
    gotoxy(70,30);
    cout << "-----------------------------";

    int identity;
    gotoxy(70,33);
    cout<< "     Enter your identity: " ;
    cin >> identity;

    if(identity == 1){
        complainant();
    }
    if(identity == 2){
        officer();
    }
    if(identity == 3){
        administrator();
    }
}

void complainant()
{
    system("cls");
    printHeader();

    gotoxy(20,15);
    cout << "WELCOME TO POLICE-COMPLAINTS PORTAL. We are here for providing you assistance in reporting your concerns and ensuring that";
    gotoxy(20,16);
    cout << "your complaint is taken seriously and handled efficiently. If you have any questions or need any assistance, please do not"; 
    gotoxy(20,17);
    cout << "hesitate to contact our support team. We're here to help you. We are committed to provide you clear, prompt, and empathetic";
    gotoxy(20,18);
    cout << "assistance. Our comprehensive user guides are available to help you navigate the process with confidence. If you encounter";
    gotoxy(20,19);
    cout << "challenges or uncertainties, please don't hesitate to reach out to us. Your concerns matter and it is our responsibilty to";
    gotoxy(20,20);
    cout << "assist you in resolving them effectively and efficiently." <<endl;

    compMenu(20,24);

    gotoxy(57,30);
    cout << "Enter your required option from the above menu: ";
    cin >> option;

    menuConditions(option);
}

void compMenu(int x,int y)
{
    gotoxy(x,y);
    cout << "---------------------------------------------------------------------------------------------------------------------------";
    gotoxy(x,y+1);
    cout << "|         1. User Guidance           2. Your Complaint Detail           3. File a Complaint           4. Home Page        |";
    gotoxy(x,y+2);
    cout << "---------------------------------------------------------------------------------------------------------------------------" << endl;

}

void menuConditions(int option) 
{
    if(option == 1){
        system("cls");
        compMenu(21,2);
        guidance();
    }
    if(option == 2){
        system("cls");
        compMenu(21,2);
        history();
    }
    if(option == 3){
        system("cls");
        compMenu(21,2);
        complaint();
    }
    if(option == 4){
        system("cls");
        printHeader();
        printOath();
        lines();
        printMenu();
    }
}

void guidance()
{
    int x = 22, y = 9;
    gotoxy(21,7);
    cout << "||  USER GUIDANCE  ||"; 

    gotoxy(x,y);
    cout << "- Initiating a Complaint: " <<endl; 
    gotoxy(x+3,y+1);
    cout << "Click on 'File a Complaint' in the menu to initiate the complaint process."<<endl;
  
    gotoxy(x,y+3);
    cout << "- Complainant Information: ";
    gotoxy(x+3,y+4);
    cout << "Provide your personal information as accurately as possible.  This includes your full name,  contact number,  email address,"<<endl;
    gotoxy(x+3,y+5);
    cout << "and any other required details. Rest assured, your information will be kept confidential."<<endl;
  
    gotoxy(x,y+7);
    cout << "- Incident Details: "<<endl;
    gotoxy(x+3,y+8);
    cout << "Describe the incident or complaint in detail. Include relevant information such as date, time, location, and any individuals"<<endl;
    gotoxy(x+3,y+9);
    cout << "involved. Be as clear and specific as possible to assist us in understanding your concern."<<endl;
  
    gotoxy(x,y+11);
    cout << "- Confidentiality: "<<endl;
    gotoxy(x+3,y+12);
    cout << "Rest assured that your personal information and complaint details will be kept confidential, and only authorized personnel will"<<endl; 
    gotoxy(x+3,y+13);
    cout << "have access to them."<<endl;

    gotoxy(x,y+15);
    cout << "- Review and Confirmation: "<<endl;
    gotoxy(x+3,y+16);
    cout << "review the information you've provided to ensure accuracy. Once you're satisfied,  submit your complaint. You will receive a"<<endl; 
    gotoxy(x+3,y+17);
    cout << "confirmation message or email with a unique reference number for your complaint."<<endl;
  
    gotoxy(x,y+19);
    cout << "- Feedback and Follow-Up: "<<endl;
    gotoxy(x+3,y+20);
    cout << "If you have questions or need updates on your complaint's status, don't hesitate to reach out to our support team."<<endl;
  
    gotoxy(x,y+22);
    cout << "- Patience: "<<endl;
    gotoxy(x+3,y+23);
    cout << "Investigations may take time, but we're committed to resolving your complaint thoroughly and fairly."<<endl;

    gotoxy(x,y+25);
    cout << "By following these step-by-step instructions and guidance, you can file a complaint effectively and confidently using the Police"<<endl;     
    gotoxy(x,y+26);
    cout << "Complaint Management System. Your cooperation and clear communication are essential in helping us address your concerns promptly"<<endl; 
    gotoxy(x,y+27);
    cout << "and professionally"<<endl;

    gotoxy(x+27,y+32);
    cout << "If you want to go to another page, enter the required option: ";
    cin >> option;

    menuConditions(option);
}

void history()
{
    gotoxy(25,9);
    cout << "YOUR COMPLAINT DETAIL: " << endl;
    gotoxy(67,12);
    cout << "To view your complaint detail, enter code.";
    int code;
    gotoxy(77,13);
    cout << "Your four-digit code: ";
    cin >> code;

    if(code == code1){
        gotoxy(67,15);
        cout << "Here is complete detail of your complaint."<<endl;

        gotoxy(25,17);
        cout << "Your Personal Information: " << endl;

        gotoxy(22,19);
        cout << "---------------------------------------------------------------------------------------------------------------------------";

        gotoxy(22,20);cout << "| Name";
        gotoxy(41,20);cout << "| Email Address";
        gotoxy(69,20);cout << "| Contact Number";
        gotoxy(92,20);cout << "| Home Address";
        gotoxy(118,20);cout <<"| City";
        gotoxy(131,20);cout <<"| Province   |";

        gotoxy(22,21);
        cout << "---------------------------------------------------------------------------------------------------------------------------";

        gotoxy(22,22);cout << "| " << name1;
        gotoxy(41,22);cout << "| " <<  email1;
        gotoxy(69,22);cout << "| " <<  contact1;
        gotoxy(92,22);cout << "| " <<  address1;
        gotoxy(118,22);cout << "| " <<  city1;
        gotoxy(131,22);cout << "| " <<  province1;
        gotoxy(144,22);cout << "|";

        gotoxy(22,23);
        cout << "---------------------------------------------------------------------------------------------------------------------------";

        gotoxy(25,25);
        cout << "Detail of the incident: " << endl;
        gotoxy(25,26);
        cout << detail1;
    
    }
    
    if(code == code2){
        gotoxy(67,15);
        cout << "Here is complete detail of your complaint."<<endl;

        gotoxy(25,17);
        cout << "Your Personal Information: " << endl;

        gotoxy(22,19);
        cout << "---------------------------------------------------------------------------------------------------------------------------";

        gotoxy(22,20);cout << "| Name";
        gotoxy(41,20);cout << "| Email Address";
        gotoxy(69,20);cout << "| Contact Number";
        gotoxy(92,20);cout << "| Home Address";
        gotoxy(118,20);cout <<"| City";
        gotoxy(131,20);cout <<"| Province   |";

        gotoxy(22,21);
        cout << "---------------------------------------------------------------------------------------------------------------------------";

        gotoxy(22,22);cout << "| " << name2;
        gotoxy(41,22);cout << "| " <<  email2;
        gotoxy(69,22);cout << "| " <<  contact2;
        gotoxy(92,22);cout << "| " <<  address2;
        gotoxy(118,22);cout << "| " <<  city2;
        gotoxy(131,22);cout << "| " <<  province2;
        gotoxy(144,22);cout << "|";

        gotoxy(22,23);
        cout << "---------------------------------------------------------------------------------------------------------------------------";

        gotoxy(25,25);
        cout << "Detail of the incident: " << endl;
        gotoxy(25,26);
        cout << detail2;
    
    }
        if(code == code3){
        gotoxy(67,15);
        cout << "Here is complete detail of your complaint."<<endl;

        gotoxy(25,17);
        cout << "Your Personal Information: " << endl;

        gotoxy(22,19);
        cout << "---------------------------------------------------------------------------------------------------------------------------";

        gotoxy(22,20);cout << "| Name";
        gotoxy(41,20);cout << "| Email Address";
        gotoxy(69,20);cout << "| Contact Number";
        gotoxy(92,20);cout << "| Home Address";
        gotoxy(118,20);cout <<"| City";
        gotoxy(131,20);cout <<"| Province   |";

        gotoxy(22,21);
        cout << "---------------------------------------------------------------------------------------------------------------------------";

        gotoxy(22,22);cout << "| " << name3;
        gotoxy(41,22);cout << "| " <<  email3;
        gotoxy(69,22);cout << "| " <<  contact3;
        gotoxy(92,22);cout << "| " <<  address3;
        gotoxy(118,22);cout << "| " <<  city3;
        gotoxy(131,22);cout << "| " <<  province3;
        gotoxy(144,22);cout << "|";

        gotoxy(22,23);
        cout << "---------------------------------------------------------------------------------------------------------------------------";

        gotoxy(25,25);
        cout << "Detail of the incident: " << endl;
        gotoxy(25,26);
        cout << detail3;
    
    }
    gotoxy(60,30);
    if(code != code1){if(code != code2){if(code != code3){ 
        gotoxy(76,15);
        cout << "Sorry! No such record found."; 
        gotoxy(60,18);
    }}}

    cout << "If you want to go to another page, enter the required option: ";
    cin >> option;

    menuConditions(option);
}

void complaint()
{
    string another;
    int x = 23, y = 18;
    gotoxy(70,9);
    cout << "POILICE COMPLAINT FORM";
    gotoxy(21,10);
    cout << "____________________________________________________________________________________________________________________________" << endl;

    gotoxy(55,14);
    cout << "Provide the following requirements to file your complaint.";
    
    gotoxy(x,y);
    cout << "Enter Your Name: ";
    cin >> name1;
    gotoxy(x,y+2);
    cout << "Enter Your Email Adress: ";
    cin >> email1;
    gotoxy(x,y+4);
    cout << "Enter Your Contact Number: ";
    cin >> contact1;
    gotoxy(x,y+6);
    cout << "Enter Your Home Address: ";
    cin >> address1;
    gotoxy(x,y+8);
    cout << "Enter Your City: ";
    cin >> city1;
    gotoxy(x,y+10);
    cout << "Enter Your Province: ";
    cin >> province1;
    gotoxy(x,y+12);
    cout << "Enter the Date: ";
    cin >> date1;
    gotoxy(x,y+14);
    cout << "Enter a four-digit code: ";
    cin >> code1;
    gotoxy(x,y+16);
    cout << "Enter the Incident Details Such As When and What happened: " <<endl;
    gotoxy(x+4,y+18);
    cin >> detail1;

    gotoxy(x,y+20);
    cout << "Your complaint has been filed successfully. Proper Action will be taken and you will be informed of the progress soon." <<endl;
    gotoxy(x,y+21);
    cout << "File another Complaint (Yes or No): ";
    cin >> another;

   if(another == "Yes"){
        system("cls");
        compMenu(21,2);
        gotoxy(70,9);
        cout << "POILICE COMPLAINT FORM";
        gotoxy(21,10);
        cout << "____________________________________________________________________________________________________________________________" << endl;

        gotoxy(55,14);
        cout << "Provide the following requirements to file your complaint.";
        
        gotoxy(x,y);
        cout << "Enter Your Name: ";
        cin >> name2;
        gotoxy(x,y+2);
        cout << "Enter Your Email Adress: ";
        cin >> email2;
        gotoxy(x,y+4);
        cout << "Enter Your Contact Number: ";
        cin >> contact2;
        gotoxy(x,y+6);
        cout << "Enter Your Home Address: ";
        cin >> address2;
        gotoxy(x,y+8);
        cout << "Enter Your City: ";
        cin >> city2;
        gotoxy(x,y+10);
        cout << "Enter Your Province: ";
        cin >> province2;
        gotoxy(x,y+12);
        cout << "Enter the Date: ";
        cin >> date2;
        gotoxy(x,y+14);
        cout << "Enter a four-digit code: ";
        cin >> code2;
        gotoxy(x,y+16);
        cout << "Enter the Incident Details Such As When and What happened: " <<endl;
        gotoxy(x+4,y+18);
        cin >> detail2;
        


        gotoxy(x,y+20);
        cout << "Your complaint has been filed successfully. Proper Action will be taken and you will be informed of the progress soon." <<endl;
        gotoxy(x,y+21);
        cout << "File another Complaint (Yes or No): ";
        cin >> another;

    if(another == "Yes"){
        system("cls");
        compMenu(21,2);
        gotoxy(70,9);
        cout << "POILICE COMPLAINT FORM";
        gotoxy(21,10);
        cout << "____________________________________________________________________________________________________________________________" << endl;

        gotoxy(55,14);
        cout << "Provide the following requirements to file your complaint.";
        gotoxy(x,y);
        cout << "Enter Your Name: ";
        cin >> name3;
        gotoxy(x,y+2);
        cout << "Enter Your Email Adress: ";
        cin >> email3;
        gotoxy(x,y+4);
        cout << "Enter Your Contact Number: ";
        cin >> contact3;
        gotoxy(x,y+6);
        cout << "Enter Your Home Address: ";
        cin >> address3;
        gotoxy(x,y+8);
        cout << "Enter Your City: ";
        cin >> city3;
        gotoxy(x,y+10);
        cout << "Enter Your Province: ";
        cin >> province3;
        gotoxy(x,y+12);
        cout << "Enter the Date: ";
        cin >> date3;
        gotoxy(x,y+14);
        cout << "Enter a four-digit code: ";
        cin >> code3;
        gotoxy(x,y+16);
        cout << "Enter the Incident Details Such As When and What happened: " <<endl;
        gotoxy(x+4,y+18);
        cin >> detail3;

        gotoxy(x,y+22);
        cout << "Your complaint has been filed successfully. Proper Action will be taken and you will be informed of the progress soon.";
  
    }
   }

    gotoxy(x+26,y+24);
    cout << "If you want to go to another page, enter the required option: ";
    cin >> option;

    menuConditions(option);
}

void officer()
{
    system("cls");
    printHeader();
    string name, code;
    int y = 22;

    gotoxy(23,15);
    cout << "To verify your identity, enter your name and your police identity code.";

    gotoxy(65,20);
    cout << "-------------------------------------------";
    gotoxy(65,26);
    cout << "--------------------------------------------";
    gotoxy(65,22);
    cout << "      Your Name: ";
    cin >> name;
    gotoxy(65,24);
    cout << "      Your Police Identity Code: ";
    cin >> code;

    if(code == "CP10039"){

        system("cls");
        printHeader();

        gotoxy(25,13);
        cout << "Welcome Officer! " <<endl;

        gotoxy(25,17);
        cout << "Personal Information of the Complainant:";
    
        gotoxy(22,19);
        cout << "---------------------------------------------------------------------------------------------------------------------------";

        gotoxy(22,20);cout << "| Name";
        gotoxy(41,20);cout << "| Email Address";
        gotoxy(69,20);cout << "| Contact Number";
        gotoxy(92,20);cout << "| Home Address";
        gotoxy(118,20);cout <<"| City";
        gotoxy(131,20);cout <<"| Province   |";

        gotoxy(22,21);
        cout << "---------------------------------------------------------------------------------------------------------------------------";

        gotoxy(22,y+3);
        cout << "---------------------------------------------------------------------------------------------------------------------------";

        gotoxy(22,y);cout << "| " << name1;
        gotoxy(41,y);cout << "| " <<  email1;
        gotoxy(69,y);cout << "| " <<  contact1;
        gotoxy(92,y);cout << "| " <<  address1;
        gotoxy(118,y);cout << "| " <<  city1;
        gotoxy(131,y);cout << "| " <<  province1;
        gotoxy(144,y);cout << "|";

        gotoxy(22,y+1);cout << "| " << name2;
        gotoxy(41,y+1);cout << "| " <<  email2;
        gotoxy(69,y+1);cout << "| " <<  contact2;
        gotoxy(92,y+1);cout << "| " <<  address2;
        gotoxy(118,y+1);cout << "| " <<  city2;
        gotoxy(131,y+1);cout << "| " <<  province2;
        gotoxy(144,y+1);cout << "|";

        gotoxy(22,y+2);cout << "| " << name3;
        gotoxy(41,y+2);cout << "| " <<  email3;
        gotoxy(69,y+2);cout << "| " <<  contact3;
        gotoxy(92,y+2);cout << "| " <<  address3;
        gotoxy(118,y+2);cout << "| " <<  city3;
        gotoxy(131,y+2);cout << "| " <<  province3;
        gotoxy(144,y+2);cout << "|";


        if(getCharAtxy(25,22) != ' '){

            gotoxy(34,15);
            cout << "Following are the details of the complaints that are assigned to you. Take proper actions in this regard.";

            gotoxy(25,27);
            cout << "Details of the Incident of the First Complaint: ";
            gotoxy(25,28);
            cout << detail1;

            if(getCharAtxy(25,23) != ' '){
                gotoxy(25,32);
                cout << "Details of the Incident of the Second Complaint: ";
                gotoxy(25,33);
                cout << detail2;
            }

            if(getCharAtxy(25,24) != ' '){
                gotoxy(25,37);
                cout << "Details of the Incident of the Third Complaint: ";
                gotoxy(25,38);
                cout << detail3;
            }

        }

        if(getCharAtxy(25,22) == ' '){
            gotoxy(62,30);
            cout << "You have not assigned any complaints yet."; 
            gotoxy(42,31);
            cout << "For any other information, contact the administrator through the contact number 03120044419.";
        }
    }

    if(code != "CP10039"){ gotoxy(77,28);cout << "Wrong Code Entered!";}
    
    gotoxy(62,y+20);
    cout << "If you want to go back to the Home Page, enter 4 : ";
    cin >> option;

    menuConditions(option);
}

void administrator()
{
    system("cls");
    printHeader();
    string username, password;
    int y = 24;

    gotoxy(23,15);
    cout << "To verify your identity, first login.";

    gotoxy(65,20);
    cout << "-------------------------------------------";
    gotoxy(65,26);
    cout << "--------------------------------------------";
    gotoxy(65,22);
    cout << "         Your Name: ";
    cin >> username;
    gotoxy(65,24);
    cout << "         Password: ";
    cin >> password;

    if(password == "PK123456"){

        system("cls");
        printHeader();

        gotoxy(25,13);
        cout << "Welcome Sir!  " <<endl;

        gotoxy(25,19);
        cout << "Personal Information of the Complainant:";
    
        gotoxy(22,21);
        cout << "---------------------------------------------------------------------------------------------------------------------------";

        gotoxy(22,22);cout << "| Name";
        gotoxy(41,22);cout << "| Email Address";
        gotoxy(69,22);cout << "| Contact Number";
        gotoxy(92,22);cout << "| Home Address";
        gotoxy(118,22);cout <<"| City";
        gotoxy(131,22);cout <<"| Province   |";

        gotoxy(22,23);
        cout << "---------------------------------------------------------------------------------------------------------------------------";

        gotoxy(22,y+3);
        cout << "---------------------------------------------------------------------------------------------------------------------------";

        gotoxy(22,y);cout << "| " << name1;
        gotoxy(41,y);cout << "| " <<  email1;
        gotoxy(69,y);cout << "| " <<  contact1;
        gotoxy(92,y);cout << "| " <<  address1;
        gotoxy(118,y);cout << "| " <<  city1;
        gotoxy(131,y);cout << "| " <<  province1;
        gotoxy(144,y);cout << "|";

        gotoxy(22,y+1);cout << "| " << name2;
        gotoxy(41,y+1);cout << "| " <<  email2;
        gotoxy(69,y+1);cout << "| " <<  contact2;
        gotoxy(92,y+1);cout << "| " <<  address2;
        gotoxy(118,y+1);cout << "| " <<  city2;
        gotoxy(131,y+1);cout << "| " <<  province2;
        gotoxy(144,y+1);cout << "|";

        gotoxy(22,y+2);cout << "| " << name3;
        gotoxy(41,y+2);cout << "| " <<  email3;
        gotoxy(69,y+2);cout << "| " <<  contact3;
        gotoxy(92,y+2);cout << "| " <<  address3;
        gotoxy(118,y+2);cout << "| " <<  city3;
        gotoxy(131,y+2);cout << "| " <<  province3;
        gotoxy(144,y+2);cout << "|";


        if(getCharAtxy(25,24) != ' '){

            gotoxy(60,16);
            cout << "Here are all the complaints that have been filed yet.";
            gotoxy(42,17);
            cout << "All these have been assigned to the police officer Fahad Nasir with the code CP10039";

            gotoxy(25,29);
            cout << "Details of the Incident of the First Complaint: ";
            gotoxy(25,30);
            cout << detail1;

            if(getCharAtxy(25,25) != ' '){
                gotoxy(25,34);
                cout << "Details of the Incident of the Second Complaint: ";
                gotoxy(25,35);
                cout << detail2;
            }

            if(getCharAtxy(25,26) != ' '){
                gotoxy(25,39);
                cout << "Details of the Incident of the Third Complaint: ";
                gotoxy(25,40);
                cout << detail3;
            }
        }

        if(getCharAtxy(25,24) == ' '){
            gotoxy(62,30);
            cout << "No complaint has been filed yet."; 
            gotoxy(42,31);
            cout << "You may contact the Officer Fahad Nasir with code CP10039 for any details.";
        }
    }

    if(password != "PK123456"){ gotoxy(77,28);cout << "Wrong Password!";}
    
    gotoxy(59,y+19);
    cout << "If you want to go back to the Home Page, enter 4 : ";
    cin >> option;

    menuConditions(option);
}

void policeCar()
{
    cout << "          __               " << endl;
    cout << "       __|__|__            " << endl;
    cout << "      /    --  \\          " << endl;
    cout << " ____/    |__|  \\________ " << endl;
    cout << "{     ooo     ooo        C}" << endl;
    cout << "{____o . o __o . o_______C}" << endl;
    cout << "      ooo     ooo          " << endl;
}

void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar: ' ';
}

