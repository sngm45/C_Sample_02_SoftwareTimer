/**********************************************************
 * @file U_Timer.cpp
 * @brief timer function
 * @author ngmrsng
 * @date 2016/08/08
 *********************************************************/

#include <U_Timer.h>

/*********************************************************/
void StartTimer(int id, int fireTime)
{

}

/*********************************************************/
void StopTimer(int id)
{

}


/*********************************************************/
void main_loop(LPVOID *	pParam)
{
	HANDLE hMutex = (HANDLE)pParam;
	while(1){	
		//mutex で  count1 を保護
		WaitForSingleObject(hMutex,INFINITE);
		count1=0;
		ReleaseMutex(hMutex);

		count2=0;
	}
}