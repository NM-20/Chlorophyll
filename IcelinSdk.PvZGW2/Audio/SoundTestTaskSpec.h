#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836750
   RuntimeId:        03F1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F1B
   VfTable:          00000001421F4AD8
   Address (Base):   00000001430DCD10
*/
#pragma pack(push, 8)
class SoundTestTaskSpec : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Description; /* 0x0010 */
  FB_FLOAT32 Duration; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(SoundTestTaskSpec) == 32);

}
