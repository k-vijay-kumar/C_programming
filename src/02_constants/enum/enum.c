#include<stdio.h>

int main()
{
    enum days1
    {
        mon,
        tue,
        wed,
        thu,
        fri,
        sat,
        sun
    };

    enum days1 var1 = mon;
    printf("Value of mon by default, where enum has all weekdays starting from mon has its members: %d\n",var1);

    enum days2
    {
        mon2=5,
        tue2,
        wed2,
        thu2,
        fri2,
        sat2,
        sun2
    };

    enum days2 var2 = tue2;
    printf("Value of tue, where enum has all weekdays starting from mon has its members and mon has assigned value 5: %d\n",var2);

    enum days3
    {
        mon3=5,
        tue3,
        wed3=3,
        thu3,
        fri3,
        sat3,
        sun3
    };

    enum days3 var3 = thu3;
    printf("Value of thu, where enum has all weekdays starting from mon has its members and mon has value 5 and wed has value 3: %d\n",var3);
}

/*
Output:
Value of mon by default, where enum has all weedays starting from mon has its members: 0
Value of tue, where enum has all weedays starting from mon has its members and mon has assigned value 5: 6
Value of thu, where enum has all weedays starting from mon has its members and mon has value 5 and wed has value 3: 4
*/
