#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 00000001428641E8
   RuntimeId:        21B9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DB8
   VfTable:          0000000142352A88
   Address (Base):   00000001430E6160
*/
#pragma pack(push, 16)
class PVZAnimatedBoneHelperComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0070 */
  char pad_0074[0x0004];
  FB_STDARRAY(struct PVZAnimatedBoneHelperBoneName) OutputBones; /* 0x0078 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(PVZAnimatedBoneHelperComponentData) == 128);

}
