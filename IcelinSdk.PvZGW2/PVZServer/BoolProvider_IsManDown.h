#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FEE8
   RuntimeId:        1E31
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          107E
   VfTable:          000000014231D328
   Address (Base):   000000014310A1D0
*/
#pragma pack(push, 8)
class BoolProvider_IsManDown : public PVZBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(BoolProvider_IsManDown) == 16);

}
