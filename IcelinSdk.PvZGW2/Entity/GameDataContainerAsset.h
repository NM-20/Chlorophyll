#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014283AA08
   RuntimeId:        081B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          080D
   VfTable:          000000014220BFD0
   Address (Base):   00000001430DC890
*/
#pragma pack(push, 8)
class GameDataContainerAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class GameDataContainer) Data; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(GameDataContainerAsset) == 32);

}
