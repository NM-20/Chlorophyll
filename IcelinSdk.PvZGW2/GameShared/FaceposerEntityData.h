#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A9C0
   RuntimeId:        0EBD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A20
   VfTable:          0000000142263EA8
   Address (Base):   00000001430ED6C0
*/
#pragma pack(push, 8)
class FaceposerEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AntRef FacePoserLibrary; /* 0x0018 */
  FB_BOOLEAN SetFacePoserLibraryOnSpawn; /* 0x002C */
  char pad_002D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(FaceposerEntityData) == 48);

}
