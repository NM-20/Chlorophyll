#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284ACE8
   RuntimeId:        0EE9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0633
   VfTable:          0000000142262FD0
   Address (Base):   0000000143113A10
*/
#pragma pack(push, 8)
class GameSettingsComponent : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(GameSettingsComponent) == 24);

}
