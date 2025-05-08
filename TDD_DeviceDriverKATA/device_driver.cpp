#include "device_driver.h"

DeviceDriver::DeviceDriver(FlashMemoryDevice* hardware) : m_hardware(hardware)
{
}

int DeviceDriver::read(long address)
{
    // TODO: implement this method properly
    int value = (int)(m_hardware->read(address));

    return value;
}

void DeviceDriver::write(long address, int data)
{
    // TODO: implement this method

    int value = (int)(m_hardware->read(address));

    m_hardware->write(address, (unsigned char)data);
}