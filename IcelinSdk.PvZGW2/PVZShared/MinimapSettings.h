#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A230
   RuntimeId:        255B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11D1
   VfTable:          000000014235B4A0
   Address (Base):   00000001430BF7D0
*/
#pragma pack(push, 8)
class MinimapSettings : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MipBias; /* 0x0020 */
  FB_FLOAT32 TileFadeInSpeed; /* 0x0024 */
  FB_FLOAT32 TileFadeOutSpeed; /* 0x0028 */
  FB_BOOLEAN UseSparseMipRange; /* 0x002C */
  char pad_002D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(MinimapSettings) == 48);

}
