#include <stdio.h>
#include <stdlib.h>

struct sensor {
    char soilnutrients[100];
    float phlevel;
    char pestactivity[100];
};

struct weather {
    float temprature;
    float rainfall;
    char windpattern[100];
};

struct crop {
    char croptype[100];
    char growthstage[100];
    float expectedyeild;
    struct weather* cast;
};

struct equipment {
    char opstatus[100];
    float fuellevel;
    char activityschedule[100];
    struct sensor* sensors;
    int sensor_count;
};

struct field {
    char gps[100];
    char health[100];
    char moisturelevel[100];
    struct crop* crops;
    int crop_count;
    struct equipment* eqarray;
    int equipment_count;
};

struct regionalhubs {
    struct field* fields;
    int field_count;
    char yieldprediction[100];
    char resourcedistribution[100];
    char emergencyresponseplan[100];
};

struct centralanalyticsserver {
    struct regionalhubs* regional;
    int regional_count;
    char crophealth[100];
    float irrigationeffeciency;
    char equipmentoptimization[100];
};

int main() {
    struct centralanalyticsserver server;
    server.regional_count = 2;
    server.regional = (struct regionalhubs*)malloc(server.regional_count * sizeof(struct regionalhubs));
    for (int i = 0; i < server.regional_count; i++) {
        server.regional[i].field_count = 1;
        server.regional[i].fields = (struct field*)malloc(server.regional[i].field_count * sizeof(struct field));
        for (int j = 0; j < server.regional[i].field_count; j++) {
            server.regional[i].fields[j].crop_count = 1;
            server.regional[i].fields[j].crops = (struct crop*)malloc(server.regional[i].fields[j].crop_count * sizeof(struct crop));
            server.regional[i].fields[j].equipment_count = 1;
            server.regional[i].fields[j].eqarray = (struct equipment*)malloc(server.regional[i].fields[j].equipment_count * sizeof(struct equipment));
            for (int k = 0; k < server.regional[i].fields[j].equipment_count; k++) {
                server.regional[i].fields[j].eqarray[k].sensor_count = 1;
                server.regional[i].fields[j].eqarray[k].sensors = (struct sensor*)malloc(server.regional[i].fields[j].eqarray[k].sensor_count * sizeof(struct sensor));
            }
        }
    }
    return 0;
}
