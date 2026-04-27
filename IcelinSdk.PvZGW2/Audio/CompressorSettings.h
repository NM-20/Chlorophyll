#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428377D0
   RuntimeId:        04F2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1170
   VfTable:          00000001421FA140
   Address (Base):   00000001430F2EE0
*/
#pragma pack(push, 8)
class CompressorSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Ratio; /* 0x0010 */
  FB_FLOAT32 Threshold; /* 0x0014 */
  FB_FLOAT32 Attack; /* 0x0018 */
  FB_FLOAT32 Release; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(CompressorSettings) == 32);

}
