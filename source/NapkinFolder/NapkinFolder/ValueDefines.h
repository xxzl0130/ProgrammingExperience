#pragma once
#include <cstdint>

/**
 * \brief ���붨�����16���ƹ�4λ����һλΪ�������ͣ�
 * ��һλaΪ״̬�루����״̬�룩��bΪ�쳣�룬cΪִ���룬
 * �ڶ�λ����״̬�壬34λΪ״̬���
 * ������state & CODE_TYPE_MASK�����жϴ�������
 */
enum CODE_DEFINE : uint16_t
{
    CODE_TYPE_MASK  = 0xf000,
    CODE_GROUP_MASK = 0x0f00,
    CODE_STATE_MASK = 0x00ff,
    CODE_TYPE_STATE = 0xA000,
    CODE_TYPE_ERROR = 0xB000,
    CODE_TYPE_EXEC  = 0xC000,
};

// PLC��ͨѶ��״̬
enum PLC_STATE : uint16_t
{
    PLC_INIT                = 0x2333,
    PLC_OK                  = 0xa501,
    PLC_PORT_ERROR          = 0xb501,
    PLC_CONNECT_FAILED      = 0xb502,
    PLC_STATE_ERROR         = 0xb503,
    PLC_COMMAND_ERROR       = 0xb504,
    PLC_CONNECT_ACK         = 0xa502,
};

// �����ˣ�ͨѶ��״̬
enum ROBOT_STATE : uint16_t
{
    ROBOT_INIT              = 0x2333,
    ROBOT_OK                = 0xa601,
    ROBOT_CONNECTED         = 0xa602,
    ROBOT_CONNECT_FAILED    = 0xb601,
    ROBOT_STATE_ERROR       = 0xb602,
    ROBOT_COMMAND_ERROR     = 0xb603,
    ROBOT_CONNECT_ACK       = 0xa602,
};

// ͼ���ȡ�봦��״̬
enum IMAGE_STATE : uint16_t
{
    IMAGE_INIT              = 0x2333,
    IMAGE_OK                = 0xa301,
    IMAGE_DEVICE_ERROR      = 0xb101,
    IMAGE_PARAM_ERROR       = 0xb103,
    IMAGE_COMPUTE_ERROR     = 0xb102,
    IMAGE_RESULT_ERROR      = 0xb104,
    IMAGE_SOLVED            = 0xa104,
};

// ϵͳ����״̬
enum RUNNING_STATE : uint16_t
{
    STATE_RESETTING         = 0xa101,   // ��λ��
    STATE_READY             = 0xa102,   // ׼��ok
    STATE_SOLVED            = 0xa103,   // ������ɣ�������
    STATE_TRANSMITTED       = 0xa104,   // �������
    STATE_NO_IMAGE          = 0xb101,   // ��������޷�ȡ��ͼ��
    STATE_NO_NAPKIN         = 0xb102,   // ����������޲���
    STATE_NAPKIN_ERROR      = 0xb103,   // ���������������󣨴ε�Ʒ���ϣ�
    STATE_OFFSET_ERROR      = 0xb104,   // �������������ƫ��������
    STATE_TRANSMIT_ERROR    = 0xb105,   // ����ʧ�ܣ�������δ��Ӧ

    STATE_ROBOT_READY       = 0xa201,
    STATE_ROBOT_ERROR       = 0xb201,

    STATE_CAMERA_READY      = 0xa301,
    STATE_CAMERA_ERROR      = 0xb301,
};

enum MODBUS_FUNCTION_CODE : uint8_t
{
    MODBUS_QUERY    = 0x0a,
    MODBUS_EXECUTE  = 0x0b,
};

enum MODBUS_ADDRESS_CODE : uint8_t
{
    RUNNING_STATE_ADDR      = 0x01,
    ROBOT_STATE_ADDR        = 0x02,
    CAMERA_STATE_ADDR       = 0x03,
    HOLDER_STATE_ADDR       = 0x04,
    EXECUTE_ADDR            = 0x11,
};

enum MODBUS_EXECUTE_CODE : uint16_t
{
    EXECUTE_SHOOT           = 0xc101,   // ����
    EXECUTE_WAIT            = 0xc102,   // ����
    EXECUTE_CHECK_CONNECT   = 0xc103,   // �������
    EXECUTE_CHECK_STANDARD  = 0xc104,   // ����׼ͼ��
    EXECUTE_SYSTEM_SHUTDOWN = 0xc105,   // ϵͳ�ػ�
};