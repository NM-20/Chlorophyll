#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/LocalPlayerId.h>

namespace fb
{

/* TypeInfo (Array): 00000001428706D8
   RuntimeId:        29AB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09D2
   VfTable:          000000014236D888
   Address (Base):   00000001430E2A40
*/
#pragma pack(push, 8)
class UIInputTriggerEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_STDARRAY(enum UIInputAction) Actions; /* 0x0020 */
  LocalPlayerId LocalPlayerId; /* 0x0028 */
  char pad_002C[0x0004];
  FB_STDARRAY(enum InputConceptIdentifiers) ConceptsSet; /* 0x0030 */
  FB_BOOLEAN IsModal; /* 0x0038 */
  FB_BOOLEAN IsEnabled; /* 0x0039 */
  FB_BOOLEAN CheckForGamepad; /* 0x003A */
  FB_BOOLEAN AllowRepeat; /* 0x003B */
  char pad_003C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(UIInputTriggerEntityData) == 64);

}
