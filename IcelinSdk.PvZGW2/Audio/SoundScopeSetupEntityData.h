#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837B50
   RuntimeId:        052A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A3E
   VfTable:          00000001421F9CE8
   Address (Base):   00000001430F2B80
*/
#pragma pack(push, 8)
class SoundScopeSetupEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SoundScopeSetupData) Setup; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(SoundScopeSetupEntityData) == 32);

}
