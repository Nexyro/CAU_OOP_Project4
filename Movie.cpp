#include "Movie.h"

Movie::Movie() {}

Movie::Movie(string title, string summary, string rating, string grade, string picture_url)
{
	this->title = title;
	this->summary = summary;
	this->rating = rating;
	this->grade = grade;
	this->pictureUrl = pictureUrl;
}

Movie::~Movie() {}