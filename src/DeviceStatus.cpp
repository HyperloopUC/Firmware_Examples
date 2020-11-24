//Includes--------------------------------------------------------------------
#include "DeviceStatus.h"
#include "SuManager.h"

DeviceStatus::DeviceStatus(uint16_t suId){
    
    if(suId >= SuId_DeviceStatus && suId < SuId_SuIdCount){
        SuId = suId; 
    }

    InstanceId = sizeof(uint16_t);
    Status = Status_Ok;
}

void DeviceStatus::Initialize(uint16_t suId){

    if(suId >= SuId_DeviceStatus && suId < SuId_SuIdCount){
        SuId = suId;
    }
    
    InstanceId = sizeof(uint16_t);
    Status = Status_Ok;
}

uint16_t DeviceStatus::GetSuId(){

   return SuId;  
}

uint16_t DeviceStatus::GetInstanceId(){

    return InstanceId;
}

uint16_t DeviceStatus::GetStatus(){

    return Status;
}

void DeviceStatus::GetSuId(uint16_t* suId){

    if(suId != nullptr){
        *suId = SuId;
    }
}

void DeviceStatus::GetInstanceId(uint16_t* instanceId){

    if(instanceId != nullptr){
        *instanceId = InstanceId;
    }
}

void DeviceStatus::GetStatus(uint16_t* status){

    if(status != nullptr){
        *status = Status;
    }
}

bool DeviceStatus::IsError(){

    if(Status != Status_Ok){
        return true;
    }

    return false;
}

bool DeviceStatus::IsSuId(){

    if(SuId >= SuId_DeviceStatus && SuId < SuId_SuIdCount){
        return true;
    }

    return false;
}

void DeviceStatus::SetStatus(SuStatus status){

    if(status >= Status_Ok && status < Status_Count){
        Status = status;
    }
}
