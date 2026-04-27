#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284DF20
   RuntimeId:        119F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          061F
   VfTable:          0000000142273600
   Address (Base):   00000001431118B0
*/
#pragma pack(push, 8)
class ColorPalette : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING SourcePath; /* 0x0018 */
  FB_STDARRAY(struct Vec3) Entries; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ColorPalette) == 40);

}
