#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 00000001428620A8
   RuntimeId:        201D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09B1
   VfTable:          0000000142344018
   Address (Base):   00000001430E8440
*/
#pragma pack(push, 8)
class NuiSpeechTriggerEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_HANDLE(class NuiSpeechDirectPhrase) Phrase; /* 0x0020 */
  FB_BOOLEAN EnableAtStart; /* 0x0028 */
  char pad_0029[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(NuiSpeechTriggerEntityData) == 48);

}
