#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BBD0
   RuntimeId:        0FBA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09DD
   VfTable:          0000000142268258
   Address (Base):   00000001431130B0
*/
#pragma pack(push, 8)
class TestCaseEntityEffectData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_CSTRING FileName; /* 0x0020 */
  FB_UINT32 NumSimulationStep; /* 0x0028 */
  FB_BOOLEAN FilePathIsFromDataRoot; /* 0x002C */
  FB_BOOLEAN AutoTestScreenShotMode; /* 0x002D */
  char pad_002E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(TestCaseEntityEffectData) == 48);

}
