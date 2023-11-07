#include <stdio.h>
int main()
int ar[]={4,1,-10,55,2,-5};
size_tn = sizeof(ar[0]/sizeof(ar[0]});
int *pCur = ar;
for(int i = 0;i<(n-1);++i)
        {
        int *pMin = pCur;
        int *ptmp = pCur + 1;
        for(int j = i+1 ; j < n; ++j)
{
        if(*pTmp < *pMin)
        pMin = pTmp;
        pTmp++;
}
        int tmp = *pMin;
        *pMin = *pCur;
        *pCur = tmp;
        pCur++;
}

return 0;
}
