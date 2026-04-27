#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862088
   RuntimeId:        201B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AE5
   VfTable:          0000000142343FE0
   Address (Base):   0000000143108CD0
*/
#pragma pack(push, 8)
class GrammarStateEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_HANDLE(class NuiSpeechGrammarAsset) Grammar; /* 0x0020 */
  FB_BOOLEAN StartEnabled; /* 0x0028 */
  char pad_0029[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(GrammarStateEntityData) == 48);

}
