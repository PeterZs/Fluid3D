// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� THRUSTWRAPPER_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// THRUSTWRAPPER_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef THRUSTWRAPPER_EXPORTS
#define THRUSTWRAPPER_API __declspec(dllexport)
#else
#define THRUSTWRAPPER_API __declspec(dllimport)
#endif


// �����Ǵ� ThrustWrapper.dll ������
THRUSTWRAPPER_API void WINAPI GPUSortThrustUint(void* dev_ptr, unsigned numElements, OPTIONAL void* output_ptr = NULL);
THRUSTWRAPPER_API void WINAPI GPUSortThrustDouble(void* dev_ptr, unsigned numElements, OPTIONAL void* output_ptr = NULL);