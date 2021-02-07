/*************************************************************
 * File: velocity.cpp
 * Author: Yiqi Wang
 *
 * Description: cpp file for bullet
 *************************************************************/

#include "velocity.h"


 /*********************************************
  * Velocity Class
  *********************************************/
Velocity::Velocity(float x, float y)
{
	setDx(x);
	setDy(y);
}


/*********************************************
 * Velocity Class: setter
 *********************************************/
void Velocity::setDx(float x)
{
	this->x = x;
}
/*********************************************
 * Velocity Class: setter
 *********************************************/
void Velocity::setDy(float y)
{
	this->y = y;
}
/*********************************************
 * Velocity Class: getter
 *********************************************/
float Velocity::getDx() const
{
	return this->x;
}
/*********************************************
 * Velocity Class: getter
 *********************************************/
float Velocity::getDy() const
{
	return this->y;
}
