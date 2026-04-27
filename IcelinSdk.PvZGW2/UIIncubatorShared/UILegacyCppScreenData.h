#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UICppScreenData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876A38
   RuntimeId:        2E03
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06EF
   VfTable:          0000000142392D18
   Address (Base):   00000001430E0100
*/
#pragma pack(push, 8)
class UILegacyCppScreenData : public UICppScreenData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(UILegacyCppScreenData) == 40);

}
