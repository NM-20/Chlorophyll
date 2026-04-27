#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863E48
   RuntimeId:        2181
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D2A
   VfTable:          0000000142352D28
   Address (Base):   00000001430E6A00
*/
#pragma pack(push, 16)
class MechanicalDeviceComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(MechanicalDeviceComponentData) == 112);

}
