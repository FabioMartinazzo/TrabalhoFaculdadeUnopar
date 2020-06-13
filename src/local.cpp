#include <local.h>

Local::Local(int latitude, int longitude) {
	this->_latitude = latitude;
	this->_longitude = longitude;
}

Local::Local() {
	this->_latitude = 0;
	this->_longitude = 0;
}

int Local::GetLatitude() {
	return this->_latitude;
}

int Local::GetLongitude() {
	return this->_longitude;
}
