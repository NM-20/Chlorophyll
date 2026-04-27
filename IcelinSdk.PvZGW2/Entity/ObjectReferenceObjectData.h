#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialReferenceObjectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A708
   RuntimeId:        07EB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0986
   VfTable:          000000014220C2B0
   Address (Base):   00000001430D7E70
*/
#pragma pack(push, 16)
class ObjectReferenceObjectData : public SpatialReferenceObjectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(ObjectReferenceObjectData) == 160);

}
