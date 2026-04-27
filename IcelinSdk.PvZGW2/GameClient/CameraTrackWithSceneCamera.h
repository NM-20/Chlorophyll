#pragma once

#include <IcelinSdk.PvZGW2/GameCommon/Camera.h>
#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/CameraTrackBase.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        09FB
   TypeInfo Kind:    ClassInfo
   ClassId:          008A
   VfTable:          0000000000000000
   Address (Base):   000000014311F6B0
*/
class CameraTrackWithSceneCamera : public CameraTrackBase
{
public:
  /* TypeInfo (Array): 0000000000000000
     RuntimeId:        09FC
     TypeInfo Kind:    ClassInfo
     ClassId:          0110
     VfTable:          0000000000000000
     Address (Base):   00000001431224B0
  */
  class CameraTrackCamera : public Camera
  {
  public:
    typedef struct ClassInfo TypeInfo_t;

  private:
    /* Intended for use in Ida. Do not remove. */
    static void IdaForceImport(TypeInfo_t);
  }; /* Size: 0x0150 */

  static_assert(sizeof(CameraTrackCamera) == 336);

  typedef struct ClassInfo TypeInfo_t;

  char pad_0070[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */

static_assert(sizeof(CameraTrackWithSceneCamera) == 128);

}
