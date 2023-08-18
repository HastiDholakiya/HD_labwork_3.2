#include<iostream>
using namespace std;

class Hotel{
	private:
		int hotel_id;
		string hotel_name;
        string hotel_type; 
        int hotel_rating; 
        static string hotel_location; 
        int hotel_establish_year;
        int hotel_staff_quantity;
        int hotel_room_quantity;
        
    public:
    	setData(){
    		cout << "Enter hotel id : ";
    		cin >> this->hotel_id;
    		cout << "Enter hotel name : ";
    		cin >> this->hotel_name;
    		cout << "Enter hotel type : ";
    		cin >> this->hotel_type;
    		cout << "Enter hotel rating : ";
    		cin >> this->hotel_rating;
    		cout << "Enter hotel establish year : ";
    		cin >> this->hotel_establish_year;
    		cout << "Enter hotel staff quantity : ";
    		cin >> this->hotel_room_quantity;
    		cout << "Enter hotel room quantity : ";
    		cin >> this->hotel_room_quantity;
		}
		getData1(){
			cout << "Id : " << this->hotel_id << endl;
			cout << "Name : " << this->hotel_name << endl;
			cout << "Type : " << this->hotel_type << endl;
			cout << "Rating : " << this->hotel_rating << endl;
	    }  
	    
		getData2(){
			
			cout << "Establish year : " << this->hotel_establish_year << endl;
			cout << "Staff quantity : " << this->hotel_room_quantity << endl;
			cout << "Room quantity : " << this->hotel_room_quantity << endl;
		}
		
		getLocationInfo(){
			cout << "Location : " << hotel_location << endl;
			
		}
        
};

string Hotel::hotel_location = "Surat";

int main()
{
	int n,i;
	
	cout << "How many hotel in surat : ";
	cin >> n;
	
	Hotel h[n];
	
	for(i=0;i<n;i++)
	{
		h[i].setData();
	}
	for(i=0;i<n;i++)
	{
		h[i].getData1();
		h[i].getLocationInfo();
		h[i].getData2();
	}
	
	return 0;
}
