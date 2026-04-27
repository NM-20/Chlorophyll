#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852570
   RuntimeId:        1580
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0849
   VfTable:          000000014228DDC0
   Address (Base):   00000001430DB2D0
*/
#pragma pack(push, 8)
class TextureSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 SkipMipmapCount; /* 0x0010 */
  FB_BOOLEAN LoadingEnabled; /* 0x0014 */
  FB_BOOLEAN RenderTexturesEnabled; /* 0x0015 */
  FB_BOOLEAN StreamableMipmapsEnable; /* 0x0016 */
  char pad_0017[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(TextureSettings) == 24);

}
