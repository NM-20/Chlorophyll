#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/CameraDirectorTrackBaseData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F068
   RuntimeId:        1289
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CD7
   VfTable:          0000000142276A00
   Address (Base):   00000001430EBCE0
*/
#pragma pack(push, 8)
class CameraDirectorTrackData : public CameraDirectorTrackBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class CameraDirectorKeyframe) Keyframes; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(CameraDirectorTrackData) == 64);

}
