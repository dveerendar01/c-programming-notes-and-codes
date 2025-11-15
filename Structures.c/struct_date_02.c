#include<stdio.h>
typedef struct date { // struct date or DT
    int dd;
    int mm;
    int yyyy;
} date; //  for int, } date; or }; .. for typedef, } DT;
int compare(struct date d1, struct date d2)  { // if d1 is in the future, return 1; else return -1;
    if((d1.yyyy==d2.yyyy) && (d1.mm==d2.mm) && (d1.dd==d2.dd)) {
        return 0;
    }
    if(d1.yyyy > d2.yyyy) {
        return 1;
    }
    else if(d1.yyyy < d2.yyyy) {
        return -1;
    }
    else if(d1.mm > d2.mm) {
        return 1;
    }
    else if(d1.mm < d2.mm) {
        return -1;
    }
    else if(d1.dd > d2.dd) {
        return 1;
    }
    else {
        return -1;
    }
} 
int main() {
    struct date d1={12, 06, 2006};
    struct date d2={07, 03, 2008};
    printf("%d\n", compare(d1, d2));
    return 0;
}