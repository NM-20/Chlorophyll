#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/TransformProvider.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835160
   RuntimeId:        02A0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          109D
   VfTable:          00000001421EC610
   Address (Base):   000000014311A370
*/
#pragma pack(push, 16)
class TransformProvider_Orientation : public TransformProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 Orientation; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(TransformProvider_Orientation) == 32);

}
