#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VisualEnvironmentComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Render/SubSurfaceProfile.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855E48
   RuntimeId:        189A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D8A
   VfTable:          00000001422C5028
   Address (Base):   00000001430E92E0
*/
#pragma pack(push, 16)
class SubSurfaceScatteringComponentData : public VisualEnvironmentComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 SimpleSssColor; /* 0x0080 */
  Realm Realm; /* 0x0090 */
  FB_FLOAT32 SimpleSssRolloffKeyLight; /* 0x0094 */
  FB_FLOAT32 SimpleSssRolloffLocalLight; /* 0x0098 */
  SubSurfaceProfile Profile0; /* 0x009C */
  SubSurfaceProfile Profile1; /* 0x00C8 */
  SubSurfaceProfile Profile2; /* 0x00F4 */
  SubSurfaceProfile Profile3; /* 0x0120 */
  SubSurfaceProfile Profile4; /* 0x014C */
  SubSurfaceProfile Profile5; /* 0x0178 */
  SubSurfaceProfile Profile6; /* 0x01A4 */
  SubSurfaceProfile ProfileOATS; /* 0x01D0 */
  char pad_01FC[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0200 */
#pragma pack(pop)

static_assert(sizeof(SubSurfaceScatteringComponentData) == 512);

}
