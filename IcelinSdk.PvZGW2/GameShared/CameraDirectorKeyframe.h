#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F898
   RuntimeId:        1301
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EEA
   VfTable:          0000000142276AA0
   Address (Base):   00000001431107D0
*/
#pragma pack(push, 8)
class CameraDirectorKeyframe : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Time; /* 0x0010 */
  char pad_0014[0x0004];
  FB_HANDLE(class CameraTrackBaseData) CameraTrack; /* 0x0018 */
  FB_HANDLE(class CameraDirectorTrackBaseData) ParentDirectorTrack; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(CameraDirectorKeyframe) == 40);

}
