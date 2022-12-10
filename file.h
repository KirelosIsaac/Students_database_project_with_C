
#ifndef FILE_H_INCLUDED   // means if its not defined then define it
#define FILE_H_INCLUDED


#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

#define std_size 10
//#define true 1
//#define false 0


typedef int uint8;
typedef char Int8;
typedef unsigned short uint16;
typedef short int16;
typedef unsigned int uint32;

typedef float f32;

void sdb_getdata(void);
bool sdb_isfull(void);
uint8 sdb_getusedsize(void);
bool sdb_addentry();
void sdb_deleteentry(uint8 );
bool sdb_readentry(uint8 );
void sdb_getlist(uint8* ,uint8* );
bool sdb_isidexists(uint8 );
void sdb_app(void);
void sdb_action(uint8 );


struct student_type
{
    uint32 student_id;
    uint32 student_year;

    uint32 course1_id;
    uint32 course1_grade;

    uint32 course2_id;
    uint32 course2_grade;

    uint32 course3_id;
    uint32 course3_grade;

};












#endif // FILE_H_INCLUDED

