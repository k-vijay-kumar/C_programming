/*
 * It is mainly used to assign names to integral constants
 * macros(#define) only have global scope. but enum can have global/local scope
 * By default enum assigns its variables wit values starting from 0 in ascending order
 * This can be overwritten by user as per is needs
 * If a variable is assigned a value n, then its succeeding variables takes its next values in ascending order
 * Even that order can be altered by intervening and providing the values wherever required
 *
 */


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
    printf("Value of mon by default, where enum has all weedays starting from mon has its members: %d\n",mon);

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
    printf("Value of tue, where enum has all weedays starting from mon has its members and mon has assigned value 5: %d\n",tue2);

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
    printf("Value of thu, where enum has all weedays starting from mon has its members and mon has value 5 and wed has value 3: %d\n",thu3);
}

/*
Output:
Value of mon by default, where enum has all weedays starting from mon has its members: 0
Value of tue, where enum has all weedays starting from mon has its members and mon has assigned value 5: 6
Value of thu, where enum has all weedays starting from mon has its members and mon has value 5 and wed has value 3: 4
*/
