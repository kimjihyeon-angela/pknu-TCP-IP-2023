#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void timeout(int sig)
// 시그널이 발생했을 때 호출되어야 할 함수 정의(시그널핸들러)
{
	if(sig==SIGALRM)
		puts("Time out!");

	alarm(2);	
	// 2초 간격으로 SIGALRM 시그널을 반복 발생시키기 위해 
	// 시그널 핸들러 내 alarm 함수 호출
}
void keycontrol(int sig)
// 시그널이 발생했을 때 호출되어야 할 함수 정의(시그널 핸들러)
{
	if(sig==SIGINT)
		puts("CTRL+C pressed");
}

int main(int argc, char *argv[])
{
	int i;
	signal(SIGALRM, timeout);   // 시그널 SIGALRM에 대한 시그널 핸들러 등록
	signal(SIGINT, keycontrol); // 시그널 SIGINT에 대한 시그널 핸들러 등록
	alarm(2); 									// 시그널 SIGALRM의 발생을 2초 뒤로 예약

	for(i=0; i<3; i++)
	{
		puts("wait...");
		sleep(100);
		/*
		시그널의 발생과 시그널 핸들러의 실행을 확인하기 위해 
		100초간 3회의 대기시간갖도록 반복문 내에서 sleep 함수 호출
		총 300초, 대략 5분 정도 지나야 프로그램이 종료된다는 계산 나옴
		but, 실제 실행 시간은 10초가 걸리지 않음
		=> 프로세스가 잠들어 있는 상태에서 함수가 호출될 수 없음
		  따라서 시그널이 발생하면 시그널에 해당하는 시그널 핸들러의 호출을 위해
		  sleep 함수의 호출로 블로킹 상태에 있던 프로세스가 깨어남
		  한번 깨어나면 sleep 함수의 호출문에서 요구하는 시간이 지나지 않아도 
		  다시 잠들지 않음
		*/
	}
	return 0;
}
