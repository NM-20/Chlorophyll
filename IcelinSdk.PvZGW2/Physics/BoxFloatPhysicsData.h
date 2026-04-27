#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/FloatPhysicsData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851B28
   RuntimeId:        14D6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11FC
   VfTable:          000000014227F038
   Address (Base):   00000001430DB690
*/
#pragma pack(push, 8)
class BoxFloatPhysicsData : public FloatPhysicsData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class FloatPhysicsActionData) BoxActionData; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BoxFloatPhysicsData) == 32);

}
