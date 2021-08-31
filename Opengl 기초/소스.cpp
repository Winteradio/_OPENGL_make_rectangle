#include "gl/glut.h"
#include "gl/gl.h"
#include <Windows.h>

/// 위글
/// wglCreateContext() : 랜더링 컨텍스트를 생성한다.
/// wglDeleteContext() : 랜더링 컨텍스트를 삭제한다.
/// wglMakeCurrent() : 현재 랜더링 컨텍스트를 설정한다.
/// wglGetProcAddress() : 확장함수 포인터를 리턴한다.
/// wglUseFontBitmaps() : 현재 선택된 GDI 폰트에 대해 오픈GL 디스플레이 리스트를 만든다.
/// wglUseFontOutlines() : 현재의 외각선 글꼴과 각 글리프들에 대한 디스플레이 리스트를 만든다.
/// 
/// GLUT
/// glutTimerFunc() : 지정된 시간후에 지정된 함수를 한번 호출한다. 다시 호출하려면 다시 이 함수를 호출해야한다.
/// 
/// 픽셀형식
/// ChoosePixelFormat() : 가장 근접한 픽셀형식을 결정한다.
/// SetPixelFormat() : 픽셀형식을 디바이스 컨텍스트에 설정헌다.
/// 
/// 화면출력
/// ChangeDisplaySetting() : 전체화면으로 바꾼다.
/// SwapBuffers() : 후면버펴를 전면버퍼로 바꾼다.
/// glClear() : 화면과 버퍼를 지운다.
/// glClearColor() : 화면 배경 색상을 설정한다.
/// 
/// 그리기
/// glBegin() : 기본도형 그리기를 시작한다.
/// glEnd() : 기본도형 그리기를 마친다.
/// glVertex[2,3,4][d,f,i,s][v]() : 정점을 지정한다.
/// glColor[3,4][b,d,f,i,s,f]() : 색을 지정한다.
/// 
/// 점
/// glPointSize() : 점의 크기를 변경한다.
/// 
/// 선
/// glLineWidth() : 선의 굵기를 변경한다.
/// glLineStipple() : 점선 패턴을 설정한다.
/// 
/// 다각형
/// glPolygonMode() : 전면, 후면의 다각형 그리기 방식(점,선,면 그리기)을 설정한다.
/// glCullFace() : 면을 제거한다.
/// glFrontFace() : 전면을 변경한다.
/// glEdgeFlag() : 변을 숨긴다. 정점 지정 중에 사용한다.
/// glPolygonStipple() : 다각형 패턴설정
/// 
/// 기타 도형 그리기
/// glRectf() : 사각형을 그린다
/// auxSolidCube() : 정육면체를 그린다.
/// auxSolidSphere() : 구를 그린다.
/// auxSolidTorus() : 토러스(원환)을 그린다.
/// 
/// 스테이트머신
/// 
/// 행렬
/// 
/// 스택
/// 
/// 조망변환
/// 
/// 모델링변환
/// 
/// 투영
/// 
/// 셰이딩
/// 
/// 조명
/// 
/// 깊이
/// 
/// 비트맵
/// 
/// 텍스쳐
/// 
/// 다중 텍스쳐링
/// 
/// 디스플레이 리스트
/// 
/// 정점배열

void display() {
    glPointSize(5.0f); // 정점의 size 조절
    glBegin(GL_POINTS); // Mode 선택
    glVertex2f(-0.5f, 0.5f);
    glVertex2f(0.5f, 0.5f);
    glVertex2f(-0.5f,-0.5f);
    glVertex2f(0.5f,-0.5f);
    glEnd();

    glFlush();

}

int main(int argc, char* argv[])

{
    HWND hWndConsole = GetConsoleWindow();
    ShowWindow(hWndConsole, SW_HIDE);

    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_RGBA);
    glutInitWindowSize(200, 200);
    glutCreateWindow("OpenGL Project");

    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}
