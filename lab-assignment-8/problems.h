//problem1
void delete11(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    {
        if(v[i]%11==0)
        {
            v.erase(v.begin()+i);
        }
    }
}
//problem2
void insertMany(vector<int>&v, int a, int b)
{
    if(v.size()%2==0)
    {
        for(int i=0;i<a;i++)
        {
            v.emplace(v.begin()+v.size()/2,b);
        }
    }else
    {
        for(int i=0;i<a;i++)
        {
            v.emplace(v.begin()+v.size()/2+1,b);
        }
    }
}
//problem3
int* allocateAndSet(int a, int b) {
    if (a > b) {
        return nullptr;
    }
    int size = b - a + 1;
    int* arr = new int[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = a + i;
    }

    return arr;
}

void deallocate(int*& arr) {
    delete[] arr;
    arr = nullptr;
}
#ifndef PROBLEMS_H
#define PROBLEMS_H

#endif //PROBLEMS_H
