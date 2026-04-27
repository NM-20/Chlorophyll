#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/ObjectBlueprint.h>
#include <IcelinSdk.PvZGW2/Entity/TimeDeltaType.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D858
   RuntimeId:        1145
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0799
   VfTable:          0000000142273D28
   Address (Base):   00000001430BE1F0
*/
#pragma pack(push, 8)
class CharacterBlueprint : public ObjectBlueprint
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  TimeDeltaType TimeDeltaType; /* 0x0048 */
  char pad_004C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(CharacterBlueprint) == 80);

}
