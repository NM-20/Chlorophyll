#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffParameterAsset.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C0F8
   RuntimeId:        26C6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          074A
   VfTable:          0000000142366990
   Address (Base):   0000000143106030
*/
#pragma pack(push, 8)
class BuffParameterFloatAsset : public BuffParameterAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BuffParameterFloatAsset) == 32);

}
