//problem1
void days2years(int &days,int &years) {
    int defDays=365;
    int *y=&years;
    int *d=&days;
    if(*d/defDays>0)
    {
        *y=*d/defDays;
        *d=*d%defDays;
    }
}

//problem2
double func(double*x, double*y) {
    *y=((11*(*x)*(*x)*(*x))/3)+5;
    return *y;
}

// problem3
int minsNewYear(int*hour, int*min)
{
    if(*hour==24)
    {
        return 0;
    }
    return (24-*hour-1)*60+60-*min;
}

// problem4
double probability(int*A,int*B)
{
    double a=*A;
    double b=*B;
    if(a>b)
    {
        return (7-a)/6;
    }
    return (7-b)/6;
}

// problem5
int presses(int*x)
{
    int count=0;
    int num=*x;
    for(int i=1;i<=9;i++)
    {
        int temp=i;
        for(int j=1;j<=4;j++)
        {
            count+=j;
            if(temp==num)
            {
                return count;
            }
            temp=temp*10+i;
        }
    }
}
#ifndef PROBLEMS_H
#define PROBLEMS_H

#endif //PROBLEMS_H
