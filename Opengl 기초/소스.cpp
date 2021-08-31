#include "gl/glut.h"
#include "gl/gl.h"
#include <Windows.h>

/// ����
/// wglCreateContext() : ������ ���ؽ�Ʈ�� �����Ѵ�.
/// wglDeleteContext() : ������ ���ؽ�Ʈ�� �����Ѵ�.
/// wglMakeCurrent() : ���� ������ ���ؽ�Ʈ�� �����Ѵ�.
/// wglGetProcAddress() : Ȯ���Լ� �����͸� �����Ѵ�.
/// wglUseFontBitmaps() : ���� ���õ� GDI ��Ʈ�� ���� ����GL ���÷��� ����Ʈ�� �����.
/// wglUseFontOutlines() : ������ �ܰ��� �۲ð� �� �۸����鿡 ���� ���÷��� ����Ʈ�� �����.
/// 
/// GLUT
/// glutTimerFunc() : ������ �ð��Ŀ� ������ �Լ��� �ѹ� ȣ���Ѵ�. �ٽ� ȣ���Ϸ��� �ٽ� �� �Լ��� ȣ���ؾ��Ѵ�.
/// 
/// �ȼ�����
/// ChoosePixelFormat() : ���� ������ �ȼ������� �����Ѵ�.
/// SetPixelFormat() : �ȼ������� ����̽� ���ؽ�Ʈ�� �������.
/// 
/// ȭ�����
/// ChangeDisplaySetting() : ��üȭ������ �ٲ۴�.
/// SwapBuffers() : �ĸ���츦 ������۷� �ٲ۴�.
/// glClear() : ȭ��� ���۸� �����.
/// glClearColor() : ȭ�� ��� ������ �����Ѵ�.
/// 
/// �׸���
/// glBegin() : �⺻���� �׸��⸦ �����Ѵ�.
/// glEnd() : �⺻���� �׸��⸦ ��ģ��.
/// glVertex[2,3,4][d,f,i,s][v]() : ������ �����Ѵ�.
/// glColor[3,4][b,d,f,i,s,f]() : ���� �����Ѵ�.
/// 
/// ��
/// glPointSize() : ���� ũ�⸦ �����Ѵ�.
/// 
/// ��
/// glLineWidth() : ���� ���⸦ �����Ѵ�.
/// glLineStipple() : ���� ������ �����Ѵ�.
/// 
/// �ٰ���
/// glPolygonMode() : ����, �ĸ��� �ٰ��� �׸��� ���(��,��,�� �׸���)�� �����Ѵ�.
/// glCullFace() : ���� �����Ѵ�.
/// glFrontFace() : ������ �����Ѵ�.
/// glEdgeFlag() : ���� �����. ���� ���� �߿� ����Ѵ�.
/// glPolygonStipple() : �ٰ��� ���ϼ���
/// 
/// ��Ÿ ���� �׸���
/// glRectf() : �簢���� �׸���
/// auxSolidCube() : ������ü�� �׸���.
/// auxSolidSphere() : ���� �׸���.
/// auxSolidTorus() : �䷯��(��ȯ)�� �׸���.
/// 
/// ������Ʈ�ӽ�
/// 
/// ���
/// 
/// ����
/// 
/// ������ȯ
/// 
/// �𵨸���ȯ
/// 
/// ����
/// 
/// ���̵�
/// 
/// ����
/// 
/// ����
/// 
/// ��Ʈ��
/// 
/// �ؽ���
/// 
/// ���� �ؽ��ĸ�
/// 
/// ���÷��� ����Ʈ
/// 
/// �����迭

void display() {
    glPointSize(5.0f); // ������ size ����
    glBegin(GL_POINTS); // Mode ����
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
