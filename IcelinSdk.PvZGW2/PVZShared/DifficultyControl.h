#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142874588
   RuntimeId:        2C62
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1277
   VfTable:          0000000142378768
   Address (Base):   00000001431040B0
*/
#pragma pack(push, 8)
class DifficultyControl : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class AIDifficultyOverride) Overrides; /* 0x0010 */
  FB_BOOLEAN GlobalOverride; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(DifficultyControl) == 32);

}
