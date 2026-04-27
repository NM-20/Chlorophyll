#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142853A20
   RuntimeId:        16BC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          084F
   VfTable:          00000001422A12A0
   Address (Base):   000000014310E3D0
*/
#pragma pack(push, 8)
class RenderTestSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 Case; /* 0x0010 */
  FB_UINT32 SubCase; /* 0x0014 */
  FB_INT32 Next; /* 0x0018 */
  FB_BOOLEAN Enable; /* 0x001C */
  FB_BOOLEAN DrawNumberEnable; /* 0x001D */
  char pad_001E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(RenderTestSettings) == 32);

}
