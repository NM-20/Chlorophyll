#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014283C270
   RuntimeId:        099A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0ACA
   VfTable:          0000000142212030
   Address (Base):   00000001430EED40
*/
#pragma pack(push, 8)
class CompareFloatRangeEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_FLOAT32 Value; /* 0x001C */
  FB_FLOAT32 Min; /* 0x0020 */
  FB_FLOAT32 Max; /* 0x0024 */
  FB_BOOLEAN TriggerOnPropertyChange; /* 0x0028 */
  FB_BOOLEAN TriggerOnStart; /* 0x0029 */
  char pad_002A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(CompareFloatRangeEntityData) == 48);

}
