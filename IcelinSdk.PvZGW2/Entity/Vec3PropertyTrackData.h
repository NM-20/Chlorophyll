#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SimplePropertyTrackData.h>

namespace fb
{

/* TypeInfo (Array): 000000014283BF70
   RuntimeId:        096E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FBD
   VfTable:          0000000142212298
   Address (Base):   00000001430FDC90
*/
#pragma pack(push, 8)
class Vec3PropertyTrackData : public SimplePropertyTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct Vec3) Values; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(Vec3PropertyTrackData) == 48);

}
