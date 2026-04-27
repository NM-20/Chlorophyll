#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014283C290
   RuntimeId:        099C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C4E
   VfTable:          0000000142211FC0
   Address (Base):   00000001430EECE0
*/
#pragma pack(push, 8)
class CompareIntRangeEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_INT32 Value; /* 0x001C */
  FB_INT32 Min; /* 0x0020 */
  FB_INT32 Max; /* 0x0024 */
  FB_BOOLEAN TriggerOnPropertyChange; /* 0x0028 */
  FB_BOOLEAN TriggerOnStart; /* 0x0029 */
  char pad_002A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(CompareIntRangeEntityData) == 48);

}
