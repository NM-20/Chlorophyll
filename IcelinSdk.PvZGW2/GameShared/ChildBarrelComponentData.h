#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/ChildComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284CB90
   RuntimeId:        109A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D16
   VfTable:          00000001422674F0
   Address (Base):   00000001430D6EB0
*/
#pragma pack(push, 16)
class ChildBarrelComponentData : public ChildComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0100 */
#pragma pack(pop)

static_assert(sizeof(ChildBarrelComponentData) == 256);

}
