#include <iostream>

using namespace std;

class GpsCoordinate
{
	private:
		double m_lat;
		double m_lng;
		int* ptr;
		
	public:
		GpsCoordinate(double lat, double lng)
		{
			m_lat = lat;
			m_lng = lng;
			
			ptr = new int;
		}
		
		GpsCoordinate(GpsCoordinate& other) 
		{
			m_lat = other.m_lat;
			m_lng = other.m_lng;
			
			ptr = new int;
			*ptr = *(other.ptr);// flache kopie 
		}
};

int main()
{
	GpsCoordinate berlin(52.520,13.221);
	GpsCoordinate ostBerlin = berlin; // das will ich tun können!
	GpsCoordinate westBerlin(berlin); //same
	
	return 0;
}
