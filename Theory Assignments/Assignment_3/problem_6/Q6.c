#include<stdio.h>
#include<stdlib.h>
struct feild{
	char gps[100];
	char health[100];
	char moisturelevel[100];
	struct crop* crops;
	struct equipment* eqarray;
};
struct crop{
	char croptype[100];
	char growthstage[100];
	float expectedyeild;
	struct weatherforecast* cast;
};
struct weather{
	float temprature;
	float rainfall;
	char windpattern[100];
};
struct equipment{
	char opstatus[100];
	float fuellevel;
	char activityschedule[100];
	struct sensor* sensors;
};
struct sensor{
	char soilnutrients[100];
	float phlevel;
	char pestactivity[100];
};
struct regionalhubs{
	struct feild* feilds;
	char yieldprediction[100];
	char resourcedistribution[100];
	char emergencyresponseplan[100];
};
struct centralanalyticsserver{
	struct regionalhubs* regional;
	char crophealth[100];
	float irrigationeffeciency;
	char equipmentoptimization[100];
};
