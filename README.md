# pknu-TCP-IP-2023
## 리눅스 환경에서 TCP/IP 학습

## Day 01
- TCP/IP에서 가장 중요한 함수
  - socket, bind, listen, accept
- socket 함수는 무조건 필요
- connect 함수 호출 필요
- 코드 작성방법
  - nano 실행할 파일 명
  - nano edit 화면 뜸
  - nano edit 화면에서 코드 작성 후 저장 (ctrl + s | ctrl + o)
  - nano edit 화면 나가기 (ctrl + x)
  - 리눅스 기반에서 실행하기
- 리눅스 기반에서 실행하기
  - gcc [실행할 파일 명] -o [실행파일 명]
  - ./실행파일 명
- 리눅스 기본 명령어
  - 폴더(디렉토리) 생성 : mkdir
  - 폴더 및 파일 삭제 : rm -fr| -rf[삭제할 폴더명 | 파일]
  - 현재 폴더 확인 : ls
    - 구체적인 폴더 확인 : ls -l
    - 숨김파일도 출력 : ls -a
  - 현재 위치 확인 : pwd
  - 기본 편집기 : nano
  - 폴더 이동 : cd [이동할 폴더 명]
    - ./ : 현재 폴더
    - ../ : 상위 폴더로 이동
  - 컴파일 : gcc [파일 명] -o [실행파일 명]
  - 종료 명령어 : sudo shutdown
 
## Day 02
- 하나의 서버와 하나의 클라이언트만 서로 공유할 수 있도록 만들기
- 같은 공유기를 쓰고 있는 사람의 server를 받아보기

## Day 03
- 하나의 서버와 여러사람들과 공유 할 수 있는 server 만들기
