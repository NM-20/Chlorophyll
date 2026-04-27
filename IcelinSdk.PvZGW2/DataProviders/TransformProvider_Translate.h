#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/TransformProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835180
   RuntimeId:        02A2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          109F
   VfTable:          00000001421EC5F8
   Address (Base):   000000014311A310
*/
#pragma pack(push, 8)
class TransformProvider_Translate : public TransformProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class TransformProvider) Transform; /* 0x0010 */
  FB_HANDLE(class Vector3Provider) Translation; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(TransformProvider_Translate) == 32);

}
