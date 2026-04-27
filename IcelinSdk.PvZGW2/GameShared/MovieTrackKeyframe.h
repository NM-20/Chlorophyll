#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849C68
   RuntimeId:        0E00
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E82
   VfTable:          000000014225F728
   Address (Base):   0000000143114490
*/
#pragma pack(push, 8)
class MovieTrackKeyframe : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Time; /* 0x0010 */
  FB_FLOAT32 Length; /* 0x0014 */
  FB_HANDLE(class MovieTextureAsset) Movie; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(MovieTrackKeyframe) == 32);

}
