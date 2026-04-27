#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/PhysicsActionData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851AE8
   RuntimeId:        14D2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C7F
   VfTable:          000000014227EFC8
   Address (Base):   00000001430DB6F0
*/
#pragma pack(push, 8)
class WindPhysicsActionData : public PhysicsActionData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 ResistanceFactor; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(WindPhysicsActionData) == 32);

}
