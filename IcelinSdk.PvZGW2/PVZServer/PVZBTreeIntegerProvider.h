#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/IntegerProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F6D8
   RuntimeId:        1DB1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10B8
   VfTable:          000000014231D7D8
   Address (Base):   00000001430E86E0
*/
#pragma pack(push, 8)
class PVZBTreeIntegerProvider : public IntegerProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(PVZBTreeIntegerProvider) == 16);

}
