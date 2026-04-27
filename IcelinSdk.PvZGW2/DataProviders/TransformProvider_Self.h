#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/TransformProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835240
   RuntimeId:        02AE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1097
   VfTable:          00000001421EC568
   Address (Base):   000000014311A0D0
*/
#pragma pack(push, 8)
class TransformProvider_Self : public TransformProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(TransformProvider_Self) == 16);

}
