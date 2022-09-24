#include<iostream>
#include<map>
using namespace std;
string city[7]= {"chennai","banglore","hyderbad","vizag","Goa","delhi","kolkata"};
string start,name,look_city;
int budget;


void chennai(){
    // string chennai[7]={"Ashoka","Park chennai","Itc grand","Novotel","Radisson blue","Hyaatresidency","Treebo"};
    map<string,int> hotels;
    map<string,int>::iterator itr;
    hotels = {{"Ashoka",1500},{"Parkchennai",2000},{"Itc grand",2300},{"Treebo",2500},{"Hyaatresidency",3000},{"Radisson blue",4000},{"Novotel",5000}};
    
    cout<<"Currently available hotels in chennai:"<<endl;
    for (itr = hotels.begin() ; itr != hotels.end() ; itr++)
    {
        if (itr->second <= budget)
        {
            cout<<itr->first<<endl;
        }
    }

    cout<<"Kindly, Type the hotel name from the above list"<<endl;
    string hotelName;
    cin>>hotelName;
    for (itr = hotels.begin() ; itr != hotels.end() ; itr++)
    {
        if (itr->first == hotelName)
        {
            cout<<"\nlaura-"<<endl;
            cout<<"How many days would you like to book hotel "<<itr->first<<", "<<name<<"?"<<endl;
            int days;
            cin>>days;
            cout<<"\nlaura-"<<endl;
            cout<<"Congratulations "<<name<<" i have Succesfully booked the hotel"<<endl;
            cout<<"The price is "<<itr->second*days<<endl;
            cout<<"It's been pleasure to assisting you, please enjoy the Stay!!";
            exit(0);
        }
    }
    cout<<"\nlaura-"<<endl;
    cout<<"Sorry "<<name<<", i didn't get that!!. Please type again hotel name from the above provided list"<<endl;
    chennai();
}
void banglore(){
    map<string,int> hotels;
    map<string,int>::iterator itr;
    hotels = {{"TheOberoi",1500},{"Ibisbanglore",2000},{"Leelapalace",2300},{"Kstdc",2500},{"Regenta inn",3000},{"Itcgardenia",4000},{"Welcomhotel",5000}};
    
    cout<<"Currently available hotels in banglore:"<<endl;
    for (itr = hotels.begin() ; itr != hotels.end() ; itr++)
    {
        if (itr->second <= budget)
        {
            cout<<itr->first<<endl;
        }
    }

    cout<<"Kindly, Type the hotel name from the above list"<<endl;
    string hotelName;
    cin>>hotelName;
    for (itr = hotels.begin() ; itr != hotels.end() ; itr++)
    {
        if (itr->first == hotelName)
        {
            cout<<"\nlaura-"<<endl;
            cout<<"How many days would you like to book hotel "<<itr->first<<", "<<name<<"?"<<endl;
            int days;
            cin>>days;
            cout<<"\nlaura-"<<endl;
            cout<<"Congratulations "<<name<<" i have Succesfully booked the hotel"<<endl;
            cout<<"The price is "<<itr->second*days<<endl;
            cout<<"It's been pleasure to assisting you, please enjoy the Stay!!";
            exit(0);
        }
    }
    cout<<"\nlaura-"<<endl;
    cout<<"Sorry "<<name<<", i didn't get that!!. Please type again hotel name from the above provided list"<<endl;
    banglore();
}
void hyderbad(){
    map<string,int> hotels;
    map<string,int>::iterator itr;
    hotels = {{"Holidayinn",1500},{"Tajbanjara",2000},{"Vivanta",2300},{"Trident",2500},{"Itckohinur",3000},{"Radissonblue",4000},{"Fab hotels",5000}};
    
    cout<<"Currently available hotels in hyderbad:"<<endl;
    for (itr = hotels.begin() ; itr != hotels.end() ; itr++)
    {
        if (itr->second <= budget)
        {
            cout<<itr->first<<endl;
        }
    }

    cout<<"Kindly, Type the hotel name from the above list"<<endl;
    string hotelName;
    cin>>hotelName;
    for (itr = hotels.begin() ; itr != hotels.end() ; itr++)
    {
        if (itr->first == hotelName)
        {
            cout<<"\nlaura-"<<endl;
            cout<<"How many days would you like to book hotel "<<itr->first<<", "<<name<<"?"<<endl;
            int days;
            cin>>days;
            cout<<"\nlaura-"<<endl;
            cout<<"Congratulations "<<name<<" i have Succesfully booked the hotel"<<endl;
            cout<<"The price is "<<itr->second*days<<endl;
            cout<<"It's been pleasure to assisting you, please enjoy the Stay!!";
            exit(0);
        }
    }
    cout<<"\nlaura-"<<endl;
    cout<<"Sorry "<<name<<", i didn't get that!!. Please type again hotel name from the above provided list"<<endl;
    hyderbad();
}
void vizag(){
    map<string,int> hotels;
    map<string,int>::iterator itr;
    hotels = {{"Dolpinhotels",1500},{"Townhouse",2000},{"Daspella",2300},{"Gateway",2500},{"Greenpark",3000},{"Richmond",4000},{"Pallagio",5000}};
    
    cout<<"Currently available hotels in vizag:"<<endl;
    for (itr = hotels.begin() ; itr != hotels.end() ; itr++)
    {
        if (itr->second <= budget)
        {
            cout<<itr->first<<endl;
        }
    }

    cout<<"Kindly, Type the hotel name from the above list"<<endl;
    string hotelName;
    cin>>hotelName;
    for (itr = hotels.begin() ; itr != hotels.end() ; itr++)
    {
        if (itr->first == hotelName)
        {
            cout<<"\nlaura-"<<endl;
            cout<<"How many days would you like to book hotel "<<itr->first<<", "<<name<<"?"<<endl;
            int days;
            cin>>days;
            cout<<"\nlaura-"<<endl;
            cout<<"Congratulations "<<name<<" i have Succesfully booked the hotel"<<endl;
            cout<<"The price is "<<itr->second*days<<endl;
            cout<<"It's been pleasure to assisting you, please enjoy the Stay!!";
            exit(0);
        }
    }
    cout<<"\nlaura-"<<endl;
    cout<<"Sorry "<<name<<", i didn't get that!!. Please type again hotel name from the above provided list"<<endl;
    vizag();
}
void Goa(){
    map<string,int> hotels;
    map<string,int>::iterator itr;
    hotels = {{"Oakfield",1500},{"Radissionblue",2000},{"Tridentcochin",2300},{"Ibiscochin",2500},{"Abadplaza",3000},{"Sidrahotel",4000},{"Marriottcochin",5000}};
    
    cout<<"Currently available hotels in Goa:"<<endl;
    for (itr = hotels.begin() ; itr != hotels.end() ; itr++)
    {
        if (itr->second <= budget)
        {
            cout<<itr->first<<endl;
        }
    }

    cout<<"Kindly, Type the hotel name from the above list"<<endl;
    string hotelName;
    cin>>hotelName;
    for (itr = hotels.begin() ; itr != hotels.end() ; itr++)
    {
        if (itr->first == hotelName)
        {
            cout<<"\nlaura-"<<endl;
            cout<<"How many days would you like to book hotel "<<itr->first<<", "<<name<<"?"<<endl;
            int days;
            cin>>days;
            cout<<"\nlaura-"<<endl;
            cout<<"Congratulations "<<name<<" i have Succesfully booked the hotel"<<endl;
            cout<<"The price is "<<itr->second*days<<endl;
            cout<<"It's been pleasure to assisting you, please enjoy the Stay!!";
            exit(0);
        }
    }
    cout<<"\nlaura-"<<endl;
    cout<<"Sorry "<<name<<", i didn't get that!!. Please type again hotel name from the above provided list"<<endl;
    Goa();
}
void delhi(){
    map<string,int> hotels;
    map<string,int>::iterator itr;
    hotels = {{"Prideplaza",1500},{"Novotel",2000},{"Radission",2300},{"Vivapalace",2500},{"Tajpalace",3000},{"Andaz",4000},{"Redcastle",5000}};
    
    cout<<"Currently available hotels in delhi:"<<endl;
    for (itr = hotels.begin() ; itr != hotels.end() ; itr++)
    {
        if (itr->second <= budget)
        {
            cout<<itr->first<<endl;
        }
    }

    cout<<"Kindly, Type the hotel name from the above list"<<endl;
    string hotelName;
    cin>>hotelName;
    for (itr = hotels.begin() ; itr != hotels.end() ; itr++)
    {
        if (itr->first == hotelName)
        {
            cout<<"\nlaura-"<<endl;
            cout<<"How many days would you like to book hotel "<<itr->first<<", "<<name<<"?"<<endl;
            int days;
            cin>>days;
            cout<<"\nlaura-"<<endl;
            cout<<"Congratulations "<<name<<" i have Succesfully booked the hotel"<<endl;
            cout<<"The price is "<<itr->second*days<<endl;
            cout<<"It's been pleasure to assisting you, please enjoy the Stay!!";
            exit(0);
        }
    }
    cout<<"\nlaura-"<<endl;
    cout<<"Sorry "<<name<<", i didn't get that!!. Please type again hotel name from the above provided list"<<endl;
    delhi();
}
void kolkata(){
    map<string,int> hotels;
    map<string,int>::iterator itr;
    hotels = {{"Itcroyal",1500},{"Theober",2000},{"Fairfield",2300},{"sonar",2500},{"Lbdresorts",3000},{"Vivantakolkata",4000},{"Fabexpress",5000}};
    
    cout<<"Currently available hotels in kolkata:"<<endl;
    for (itr = hotels.begin() ; itr != hotels.end() ; itr++)
    {
        if (itr->second <= budget)
        {
            cout<<itr->first<<endl;
        }
    }

    cout<<"Kindly, Type the hotel name from the above list"<<endl;
    string hotelName;
    cin>>hotelName;
    for (itr = hotels.begin() ; itr != hotels.end() ; itr++)
    {
        if (itr->first == hotelName)
        {
            cout<<"\nlaura-"<<endl;
            cout<<"How many days would you like to book hotel "<<itr->first<<", "<<name<<"?"<<endl;
            int days;
            cin>>days;
            cout<<"\nlaura-"<<endl;
            cout<<"Congratulations "<<name<<" i have Succesfully booked the hotel"<<endl;
            cout<<"The price is "<<itr->second*days<<endl;
            cout<<"It's been pleasure to assisting you, please enjoy the Stay!!";
            exit(0);
        }
    }
    cout<<"\nlaura-"<<endl;
    cout<<"Sorry "<<name<<", i didn't get that!!. Please type again hotel name from the above provided list"<<endl;
    kolkata();
}

int main(){
    cout<<"laura- "<<endl;
    cout<<"Hi, I'm laura Your Assistant to Book Hotel with ease."<<endl;
    cout<<"Say, hi to Start your booking Process (or) bye to end"<<endl;
    cin>>start;
    if (start == "bye" || start == "Bye")
    {
        cout<<"Bye, It's been pleasure to assisting You!!";
        exit(0);
    }
    if (start == "hi" || start == "Hi")
    {
        cout<<"\nlaura- "<<endl;
        cout<<"Alright. Lets, Start your booking process"<<endl;
        cout<<"Kindly share your name."<<endl;
        cin>>name;
        cout<<"\nlaura- "<<endl;
        cout<<"Thanks for the information, "<<name<<endl;
        cout<<"Currently we are only Supporting following Cities: "<<endl;
        cout<<"chennai\nbanglore\nhyderbad\nvizag\nGoa\ndelhi\nkolkata"<<endl;
        cout<<"May I know the city which you are looking for hotel."<<endl;
        cin>>look_city;
        if (look_city != "chennai"&&look_city != "banglore"&&look_city != "hyderbad"&&look_city != "vizag"&&look_city != "Goa"&&look_city != "delhi"&&look_city != "kolkata")
        {
            cout<<"\nlaura- "<<endl;
            cout<<"Sorry, Current we are not supporting the City, you are requested."<<endl;
            exit(0);
        }
        cout<<"\nlaura- "<<endl;
        cout<<"Kindly, provide your budget to get best possible hotels for you per day(1500 - 5000)"<<endl;
        cin>>budget;
        if (budget < 1500 && budget > 5000)
        {
            cout<<"\nlaura- "<<endl;
            cout<<"Sorry "<<name<<" I cannot find any hotel based on your Budeget"<<endl;
            cout<<"I'm happy to assist you, have a great day!"<<endl;
            exit(0);
        }
        cout<<"\nlaura- "<<endl;
        cout<<"Kindly wait, Checking availabilty of hotels in "<<look_city<<"....."<<endl;

        if (look_city == "chennai")
        {
            chennai();
            exit(0);
        }
        if (look_city == "banglore")
        {
            banglore();
            exit(0);
        }
        if (look_city == "hyderbad")
        {
            hyderbad();
            exit(0);
        }
        if (look_city == "vizag")
        {
            vizag();
            exit(0);
        }
        if (look_city == "Goa")
        {
            Goa();
            exit(0);
        }
        if (look_city == "delhi")
        {   
            delhi();
            exit(0);
        }
        if (look_city == "chennai")
        {
            kolkata();
            exit(0);
        }

    }
    
    return 0;
}