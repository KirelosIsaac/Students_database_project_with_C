#include "file.h"

uint8 counter=0,i,j;
uint8 check;

struct student_type student_db[std_size];





//check if database is full
bool sdb_isfull(void)
{
    if(counter == std_size) return true;
    else return false;
}


//gives the number of entries in database
uint8 sdb_getusedsize(void)
{
    return counter;
}

//add entry
bool sdb_addentry()
{
    uint8 arr_1[3],c;
    uint32 arr_2[3];


    printf("\nplease enter the number of students you want to enter their data\n");
c:
    scanf("%d",&c);


    if(counter==0 && 3<=c && c<=std_size-counter)
    {
        for(j=0; j<c; j++)
        {
            printf("please enter number %d of %d student data\n",j+1,c);
            printf("Please,Enter the student ID\n");
            scanf("%d",&student_db[counter].student_id);
            printf("Please,Enter the student year\n");
            scanf("%d",&student_db[counter].student_year);

            for(i=0; i<3; i++)
            {
                printf("Please,Enter the course %d id\n",i+1);
                scanf("%d",&arr_1[i]);

k2:
                printf("Please,Enter the course %d grade\n",i+1);
                scanf("%d",&arr_2[i]);
                if(arr_2[i]>=0 && arr_2[i]<=100) continue;
                else
                {
                    printf("the grade must be between 0 and 100 try another grade\n");
                    goto k2;
                }
            }
            student_db[counter].course1_id=arr_1[0];
            student_db[counter].course1_grade=arr_2[0];

            student_db[counter].course2_id=arr_1[1];
            student_db[counter].course2_grade=arr_2[1];

            student_db[counter].course3_id=arr_1[2];
            student_db[counter].course3_grade=arr_2[2];

            counter++;
        }
        return true;
    }
    else if (counter==0 &&( 3>c || c>std_size-counter) )
    {
        printf("wrong number!\n please enter number between %d and %d\n",3,std_size-counter);
        goto c;
    }




    if(counter==1 && 2<=c && c<=std_size-counter)
    {
        for(j=0; j<c; j++)
        {
            printf("please enter %d of %d \n",j+1,c);
            printf("Please,Enter the student ID\n");
            scanf("%d",&student_db[counter].student_id);
            printf("Please,Enter the student year\n");
            scanf("%d",&student_db[counter].student_year);

            for(i=0; i<3; i++)
            {
                printf("Please,Enter the course %d id\n",i+1);
                scanf("%d",&arr_1[i]);

k3:
                printf("Please,Enter the course %d grade\n",i+1);
                scanf("%d",&arr_2[i]);
                if(arr_2[i]>=0 && arr_2[i]<=100) continue;
                else
                {
                    printf("the grade must be between 0 and 100 try another grade\n");
                    goto k3;
                }
            }
            student_db[counter].course1_id=arr_1[0];
            student_db[counter].course1_grade=arr_2[0];

            student_db[counter].course2_id=arr_1[1];
            student_db[counter].course2_grade=arr_2[1];

            student_db[counter].course3_id=arr_1[2];
            student_db[counter].course3_grade=arr_2[2];

            counter++;
        }
        return true;
    }
    else if(counter==1 && (2>c || c>std_size-counter))
    {
        printf("wrong number! please enter number between %d and %d\n",2,std_size-counter);
        goto c;
    }


    if(counter==2 && 1<=c && c<=std_size-counter)
    {
        for(j=0; j<c; j++)
        {
            printf("please enter %d of %d \n",j+1,c);
            printf("Please,Enter the student ID\n");
            scanf("%d",&student_db[counter].student_id);
            printf("Please,Enter the student year\n");
            scanf("%d",&student_db[counter].student_year);

            for(i=0; i<3; i++)
            {
                printf("Please,Enter the course %d id\n",i+1);
                scanf("%d",&arr_1[i]);

k4:
                printf("Please,Enter the course %d grade\n",i+1);
                scanf("%d",&arr_2[i]);
                if(arr_2[i]>=0 && arr_2[i]<=100) continue;
                else
                {
                    printf("the grade must be between 0 and 100 try another grade\n");
                    goto k4;
                }
            }
            student_db[counter].course1_id=arr_1[0];
            student_db[counter].course1_grade=arr_2[0];

            student_db[counter].course2_id=arr_1[1];
            student_db[counter].course2_grade=arr_2[1];

            student_db[counter].course3_id=arr_1[2];
            student_db[counter].course3_grade=arr_2[2];

            counter++;
        }
        return true;
    }
    else if(counter==2 &&  (1>c || c>std_size-counter))
    {
        printf("wrong number! please enter number between %d and %d\n",1,std_size-counter);
        goto c;
    }


    if(counter>=3 && 0<=c && c<=std_size-counter)
    {
        for(j=0; j<c; j++)
        {
            printf("please enter %d of %d \n",j+1,c);
            printf("Please,Enter the student ID\n");
            scanf("%d",&student_db[counter].student_id);
            printf("Please,Enter the student year\n");
            scanf("%d",&student_db[counter].student_year);

            for(i=0; i<3; i++)
            {
                printf("Please,Enter the course %d id\n",i+1);
                scanf("%d",&arr_1[i]);

k5:
                printf("Please,Enter the course %d grade\n",i+1);
                scanf("%d",&arr_2[i]);
                if(arr_2[i]>=0 && arr_2[i]<=100) continue;
                else
                {
                    printf("the grade must be between 0 and 100 try another grade\n");
                    goto k5;
                }
            }
            student_db[counter].course1_id=arr_1[0];
            student_db[counter].course1_grade=arr_2[0];

            student_db[counter].course2_id=arr_1[1];
            student_db[counter].course2_grade=arr_2[1];

            student_db[counter].course3_id=arr_1[2];
            student_db[counter].course3_grade=arr_2[2];

            counter++;
        }
        return true;
    }
    else if(counter>=3 && (0>c || c>std_size-counter))
    {
        printf("wrong number! please enter number between %d and %d\n",counter,std_size-counter);
        goto c;
    }
return false;
}


//delete entry
void sdb_deleteentry(uint8 id)
{
    for(i=0; i<std_size; i++)
    {
        if(student_db[i].student_id==id)
        {
            for(j=i; j<std_size-1; j++)
            {
                student_db[j]=student_db[j+1];
            }
            counter--;
            return true;
        }
    }
    printf("Id not exist to be deleted!\n");
}


//read entry
bool sdb_readentry(uint8 id)
{
    for(i=0; i<counter; i++)
    {
        if(student_db[i].student_id==id ){
            printf("\nthe student id is %d\n",student_db[i].student_id);
            printf("the student year is %d\n",student_db[i].student_year);

            printf("\nthe student course %d id is %d\n",1,student_db[i].course1_id);
            printf("the student course %d grade is %d\n",1,student_db[i].course1_grade);

            printf("\nthe student course %d id is %d\n",2,student_db[i].course2_id);
            printf("the student course %d grade is %d\n",2,student_db[i].course2_grade);

            printf("\nthe student course %d id is %d\n",3,student_db[i].course3_id);
            printf("the student course %d grade is %d\n",3,student_db[i].course3_grade);

            return true;
            }

        }

    return false;

}

//get list
void sdb_getlist(uint8 *count,uint8 *list)
{
    printf("\nthe list of IDs is\n");
    for(i=0; i<*count; i++)
    {
        printf("%d\n",*(list+(sizeof(struct student_type)*i/4)));

    }
    printf("\n");
}


//check is entered id exists
bool sdb_isidexists(uint8 id)
{
    for(i=0; i<std_size; i++)
    {
        if(student_db[i].student_id==id)
            return true;
    }
    return false;
}


void sdb_app()
{
    uint8 x=-1;

    do
    {

        printf("1. To add entry, enter 1\n");
        printf("2. To get used size in database, enter 2\n");
        printf("3. To read student data, enter 3 \n");
        printf("4. To get the list of all student IDs, enter 4\n");
        printf("5. To check is ID is existed, enter 5 \n");
        printf("6. To delete student data, enter 6\n");
        printf("7. To check is database is full, enter 7\n");
        printf("8. To exit ,enter 0\n");
        scanf("%d",&x);
        if(x!=0 && x<=7 && x>0)
        {
            sdb_action(x);
        }
        else if( x!=0 ) printf("you entered wrong number! try again\n\n");

    }
    while(x!=0);
}

void sdb_action(uint8 choice)
{
    uint8 y,z,a;
    switch(choice)
    {
    case 1:
        printf("\nis added ?\n%d\n\n",sdb_addentry());
        break;
    case 2:
        printf("\nused size is\n%d\n\n",sdb_getusedsize());
        break;
    case 3:
        printf("\nplease enter the student id to read\n");
        scanf("%d",&y);
        printf("is the id exists?\n%d\n\n",sdb_readentry(y));
        break;
    case 4:
        sdb_getlist(&counter, &student_db[0]);
        break;
    case 5:
        printf("\nplease enter the student id to check if exists\n");
        scanf("%d",&z);
        printf("is the id exists?\n%d\n\n",sdb_isidexists(z));
        break;
    case 6:
        printf("\nplease enter the student id to delete\n");
        scanf("%d",&a);
        sdb_deleteentry(a);
        printf("\n");
        break;
    case 7:
        printf("\nis full?\n%d\n\n",sdb_isfull());
        break;
    case 0:


    }
}






