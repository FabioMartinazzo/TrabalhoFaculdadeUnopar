#ifndef LOCAL_H
#define LOCAL_H

class Local {
	private : 
		int _latitude;
		int _longitude;

	public : 
		Local(int latitude, int longitude);
		Local();
		int GetLatitude();
		int GetLongitude();
};

#endif
