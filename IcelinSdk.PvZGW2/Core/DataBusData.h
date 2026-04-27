#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428335A8
   RuntimeId:        0115
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0789
   VfTable:          00000001421E51A8
   Address (Base):   0000000143101110
*/
#pragma pack(push, 8)
class DataBusData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct PropertyConnection) PropertyConnections; /* 0x0018 */
  FB_STDARRAY(struct LinkConnection) LinkConnections; /* 0x0020 */
  FB_HANDLE(class DynamicDataContainer) Interface; /* 0x0028 */
  FB_UINT16 Flags; /* 0x0030 */
  char pad_0032[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(DataBusData) == 56);

}
