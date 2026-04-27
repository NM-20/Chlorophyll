#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836368
   RuntimeId:        03B5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1175
   VfTable:          00000001421F4C90
   Address (Base):   0000000143118E70
*/
#pragma pack(push, 8)
class MixGroup : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0010 */
  FB_STDARRAY(struct MixGroupPropertyParameters) Parameters; /* 0x0018 */
  FB_UINT16 GroupIndex; /* 0x0020 */
  FB_UINT16 ParentGroupIndex; /* 0x0022 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(MixGroup) == 40);

}
