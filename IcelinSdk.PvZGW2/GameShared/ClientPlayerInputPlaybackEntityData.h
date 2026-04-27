#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BEB0
   RuntimeId:        0FE6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09C8
   VfTable:          0000000142267FC8
   Address (Base):   0000000143112AB0
*/
#pragma pack(push, 8)
class ClientPlayerInputPlaybackEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_CSTRING FileName; /* 0x0020 */
  FB_CSTRING TestName; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ClientPlayerInputPlaybackEntityData) == 48);

}
