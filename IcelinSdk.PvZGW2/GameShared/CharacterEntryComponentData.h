#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/EntryComponentData.h>
#include <IcelinSdk.PvZGW2/GameShared/AimingConstraintsData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E748
   RuntimeId:        1209
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D92
   VfTable:          0000000142272F80
   Address (Base):   00000001430ECA00
*/
#pragma pack(push, 16)
class CharacterEntryComponentData : public EntryComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AimingConstraintsData AimingConstraints; /* 0x00F0 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0100 */
#pragma pack(pop)

static_assert(sizeof(CharacterEntryComponentData) == 256);

}
