#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428366F0
   RuntimeId:        03EB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          060A
   VfTable:          00000001421F4B08
   Address (Base):   0000000143118AB0
*/
#pragma pack(push, 8)
class StreamPoolPreset : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class StreamPoolMapping) Mappings; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(StreamPoolPreset) == 24);

}
