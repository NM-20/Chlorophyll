#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/CustomizeBaseEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849820
   RuntimeId:        0DC2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A7D
   VfTable:          000000014225FB58
   Address (Base):   00000001430EE380
*/
#pragma pack(push, 8)
class CustomizeCharacterEntityData : public CustomizeBaseEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class CustomizeCharacterData) CustomizeCharacterData; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(CustomizeCharacterEntityData) == 40);

}
