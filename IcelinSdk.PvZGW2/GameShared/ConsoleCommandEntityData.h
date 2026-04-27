#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BAF0
   RuntimeId:        0FAC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09C7
   VfTable:          00000001422683A8
   Address (Base):   00000001430ECFA0
*/
#pragma pack(push, 8)
class ConsoleCommandEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(FB_CSTRING) Commands; /* 0x0018 */
  FB_CSTRING DynamicCommand; /* 0x0020 */
  Realm Realm; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ConsoleCommandEntityData) == 48);

}
