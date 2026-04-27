#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864B78
   RuntimeId:        2234
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06F7
   VfTable:          00000001423520C8
   Address (Base):   00000001431081F0
*/
#pragma pack(push, 8)
class VaseRandomDataDefinition : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct VaseRandomData) VaseData; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(VaseRandomDataDefinition) == 32);

}
