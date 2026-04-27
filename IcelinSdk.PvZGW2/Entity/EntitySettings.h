#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>
#include <IcelinSdk.PvZGW2/Entity/ExecutionModeType.h>

namespace fb
{

/* TypeInfo (Array): 000000014283AA68
   RuntimeId:        0821
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11C1
   VfTable:          000000014220BFC0
   Address (Base):   00000001430B6E50
*/
#pragma pack(push, 8)
class EntitySettings : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  ExecutionModeType ExecutionMode; /* 0x0020 */
  FB_UINT32 OutOfEntityBusNetworkIdThreshold; /* 0x0024 */
  FB_FLOAT32 WorldLimit; /* 0x0028 */
  FB_BOOLEAN EditorGameViewEnable; /* 0x002C */
  FB_BOOLEAN SpawnSubLevelsFromLogic; /* 0x002D */
  char pad_002E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(EntitySettings) == 48);

}
